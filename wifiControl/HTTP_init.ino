
void HTTP_init(void) {
 // Добавляем функцию Update для перезаписи прошивки по WiFi при 1М(256K SPIFFS) и выше
 httpUpdater.setup(&HTTP);
 // Запускаем HTTP сервер
 HTTP.begin();
}


// webSocket
void initWebSocket() {
 // start webSocket server
 webSocket.begin();
 webSocket.onEvent(webSocketEvent);
}


void webSocketEvent(uint8_t num, WStype_t type, uint8_t * payload, size_t length) {
 switch (type) {
  case WStype_DISCONNECTED:
   //            USE_SERIAL.printf("[%u] Disconnected!\n", num);
  // cmd("90,1000,0,0,0,0");
   break;
  case WStype_CONNECTED: {
   IPAddress ip = webSocket.remoteIP(num);
   //   USE_SERIAL.printf("[%u] Connected from %d.%d.%d.%d url: %s\n", num, ip[0], ip[1], ip[2], ip[3], payload);
   // send message to client
   webSocket.sendTXT(num, "Connected");
  }
   break;
  case WStype_TEXT:
   // Serial.println("text");
   // USE_SERIAL.printf("[%u] get Text: %s\n", num, payload);
   if (length > 0) {
    String command = String((const char *)payload);
    // Serial.println(command);
    cmd(command);
   }
   break;
 }
}


void cmd(String command) {
 int x = number(command);
 command = cut(command);
 int y = number(command);
 command = cut(command);
 uint8_t r1 = number(command);
 command = cut(command);
 uint8_t r2 = number(command);
 command = cut(command);
 uint8_t r3 = number(command);
 command = cut(command);
 int ax = number(command);
 command = cut(command);
 uint8_t opt = number(command);

 servoX.write(x);
 if (opt == 1) {
  servoY.write(y);
 } else {
  servoY.writeMicroseconds(y);
 }
 digitalWrite(relayPin1, r1);
 digitalWrite(relayPin2, r2);
 digitalWrite(relayPin3, r3);
 servoAX.write(ax);
}

int16_t number (String data) {
 int p = data.indexOf(",");
 return data.substring(0, p).toInt();

}

String cut (String data) {
 int p = data.indexOf(",");
 return data.substring(p + 1);
}

void initControl() {
 pinMode(relayPin1, OUTPUT);
 pinMode(relayPin2, OUTPUT);
 pinMode(relayPin3, OUTPUT);
 servoAX.attach(axPin);
 servoX.attach(xPin);
 servoY.attach(yPin);
 servoY.writeMicroseconds(1000);
 delay(2000);
}
