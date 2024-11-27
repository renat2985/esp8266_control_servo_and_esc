void WIFIinit() {
 // Если не удалось подключиться запускаем в режиме AP
 Serial.println("");
 Serial.println("WiFi up AP");
 StartAPMode();
}

bool StartAPMode() {
 IPAddress apIP(192, 168, 4, 1);
 IPAddress staticGateway(192, 168, 4, 1);
 IPAddress staticSubnet(255, 255, 255, 0);
 // Отключаем WIFI
 WiFi.disconnect();
 // Меняем режим на режим точки доступа
 WiFi.mode(WIFI_AP);
 // Задаем настройки сети
 WiFi.softAPConfig(apIP, staticGateway, staticSubnet);
 //Включаем DNS
 dnsServer.start(53, "*", apIP);
 // Включаем WIFI в режиме точки доступа с именем и паролем
 // хронящихся в переменных _ssidAP _passwordAP

 //WiFi.softAP("wificontrol", "wificontrol");
 String ApName = "wificontrol-"+String( ESP.getChipId(),HEX);
 WiFi.softAP(ApName.c_str(), "wificontrol");
 return true;
}
