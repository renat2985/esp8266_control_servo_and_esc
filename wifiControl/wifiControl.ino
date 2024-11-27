#include "set.h"

void setup() {

  initControl();
 Serial.begin(115200);
 Serial.println("");
 Serial.println("Start 1-WIFI");
 FS_init();
 //Запускаем WIFI
 WIFIinit();
 //Настраиваем и запускаем HTTP интерфейс
 Serial.println("Start 2-WebServer");
 HTTP_init();

 initWebSocket();
}

void loop() {
 HTTP.handleClient();
 delay(1);
 dnsServer.processNextRequest();
 webSocket.loop();
}
