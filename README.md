# ESPHome Configs

This is my personal repo with all my ESPHome Device configurations. Feel free to copy the configuration. The Devices in particular:\n
bodenfeuchte1.yaml: wemos_d1_mini32, up to 4 Capacitive Soil Moisture Senors on GPIO[32-35], solar powered, sleeps during the night for 60 minutes, during daytime for 10 minutes\n
co2-1.yaml: wt32-eth01 Board, MH-Z19B CO2 Sensor, PMSX Air Particle Sensor, ssd1306 OLED Display, prepared for HX711 Load Cell\n
dstike.yaml: dstike Wifi Deauther Board, OLED Display ssd1306\n
esp-neuendorf1-dallas-ds18b20.yaml: wemos_d1_mini32, only one Dallas DS18b20 Sensor Attached\n
esp-neuendorf2-ir-counter.yaml: wemos_d1_mini32, IR Pulse Counter ---should be replaced with D1 Mini ESP8266\n
esp-neuendorf3-co2.yaml: d1_mini, CO2 Sensor, sht3xd Temperature & Humidity Sensor\n
hx711.yaml: wemos_d1_mini32, 2 hx711 Load Cells\n
lilygo-t5-1.yaml: Display many Values from HomeAssistant on a LilyGo T5-4.7inch ePaper Display and then go to sleep for 15 minutes, battery powered and working\n
lilygo-t5-2.yaml: WIP for another LilyGo T5-4.7inch ePaper Display\n
shelly-plug-plus-s.yaml: New Shelly Plug Plus S (the ESP32 Version) working with 802.1X Auth, WireGuard Tunnel, Temperature, Current, Voltage and Power-sensor. LED are also working, but not used for display anything\n
tagreader.yaml: lolin32 Board, NFC Reader (rc522) for scanning NFC Tags to HomeAssistant\n
ttgo-display: LilyGo TT-GO Display, displays graphs from HomeAssistant (history in graph), vl53l0x ToF Distance Sensor for turn off display when nobody is near.\n
ttgo-t4: LilyGo T4 Board, added a rotary encoder, display status from some HomeAssistant entity and change status (send markerpoint id value to HA to use in an Automation that toggles the entity)\n
ttgo-tblock1.yaml: Display some HomeAssistant Values on a 1.54inch Waveshare ePaper, Reads internal gyro from LilyGo T-Block\n
ttgo-tblock2.yaml: Same as tblock1 but with wireguard\n
umweltsensor.yaml: wemos_d1_mini32, Analog GAS Sensor, PMSX Air Particle Sensor\n
