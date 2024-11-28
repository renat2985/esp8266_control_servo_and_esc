# ESP8266 Control servo and ESC in Browser
This project makes it easy to control servos and electronic speed controllers (ESC) through a web interface using the ESP8266 module.


<p align="center">
<a href="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/phone1.png"><img src="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/phone1.png" width="250"></a> <a href="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/phone2.png"><img src="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/phone2.png" width="250"></a> <a href="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/phone3.png"><img src="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/phone3.png" width="250"></a>
</p>


# How it works:
1. **After turning on the device:**

    - A Wi-Fi network named ```wificontrol-*``` will be created.
    - Connect to this network from your device, WiFi password: ```wificontrol```.
      
      <img src="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/wifi.png" height="300px">
    
    - Open a browser and enter the address **http://192.168.4.1** to access the web interface.
      
      [![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/9NU7gCPBSDI/0.jpg)](https://www.youtube.com/watch?v=9NU7gCPBSDI)


# Upload instruction

## 🚀 Web installer (recommended)

### Go to the web installer and follow instructions.

### [https://renat2985.github.io/esp8266_control_servo_and_esc/](https://renat2985.github.io/esp8266_control_servo_and_esc/)

## or NodeMCU Flasher

#### Specification .bin files [Download bin file here](https://github.com/renat2985/esp8266_control_servo_and_esc/raw/master/esp8266_control_servo_and_esc.zip)
```
Module: Generic ESP8266 Module
Flash Size: 1M(256K SPIFFS)
CPU Frequency: 80Mhz
Flash Mode: dio
Flash Frequency: 40Mhz
Upload Speed: 921600
```

<img src="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/nodemcu-flasher.png" width="400px">

NodeMCU Flasher https://github.com/nodemcu/nodemcu-flasher Download Release: [Win32](https://github.com/nodemcu/nodemcu-flasher/blob/master/Win32/Release/ESP8266Flasher.exe) or [Win64](https://github.com/nodemcu/nodemcu-flasher/blob/master/Win64/Release/ESP8266Flasher.exe).


# Pin Assignment

The following table shows the pin configuration for the components:

| Pin         | GPIO  | Function        |
|-------------|-------|-----------------|
| **D2**      | GPIO 4 | Servo or ESC    |
| **D1**      | GPIO 5 | Servo           |
| **D4**      | GPIO 2 | Servo           |
| **D6**      | GPIO 12 | Relay          |
| **D7**      | GPIO 13 | Relay          |
| **D5**      | GPIO 14 | Relay          |

# Schematic NodeMCU / Wemos
<img src="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/schematic.png" width="350px"> <img src="https://raw.githubusercontent.com/renat2985/esp8266_control_servo_and_esc/master/tutorial/schematic2.png" width="350px">



## :battery: Donation
If you like this project, you can buy me a cup of coffee :coffee:

<img src="https://github.com/renat2985/renat2985/raw/main/donate/donate.png" width="100%">

- PayPal [https://www.paypal.me/RKevrels](https://www.paypal.me/RKevrels/5)
