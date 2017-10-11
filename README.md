# AnyOLED
A mod of Adafruit and an anonymous SSD1306 OLED Drivers that can function on 3rd-party Arduino boards with modified pinouts, eg WeMos, NodeMCU, ESP8266 etc. In the default adafruit library, you cannot change the pin delcaration (besides reset) when using I2C, which poses a problem when your board is one of the aformentioned, or has a different pinouts to your regular uno or mega etc. Now you can specify the pins. Open the example to see how.

## Upcoming Changes

  * More Text Sizes (to give more options)
  * Custom Splash
  * Display 'Animated GIF' or BMP Sequences
