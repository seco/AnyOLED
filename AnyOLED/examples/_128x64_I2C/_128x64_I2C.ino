#include <Adafruit_GFX.h>
#include <AnyOLED_SSD1306.h>

int SCL_PIN = 5; // or D1 On WeMosD1
int SDA_PIN = 4; // or D2 On WeMosD1
int RST_PIN = 13; // or D7 On WeMosD1
int DC_PIN = 12; // or D6 On WeMosD1

//Call the display with the aformentioned pin configs
AnyOLED_SSD1306 display(SCL_PIN, SDA_PIN, DC_PIN, RST_PIN);

void setup() {
  
  Serial.begin(9600);

  //Initialize Display
  display.begin(SSD1306_SWITCHCAPVCC, 0x3D); //0x3D is the Default I2C Address for 128x64 || 0x3C is for 128x32
  //Empty the Buffer to the OLED
  display.display();
  //Initial delay to show splashscreen
  delay(2000);
  //Clear display
  display.clearDisplay();

  //Text 'Settings'
  
  //Set Text Size (1 or 2)  ||  3 coming soon to allow more options in size
  display.setTextSize(1); 
  //WHITE or BLACK (Black being transparent if your background is black
  display.setTextColor(WHITE); 
  //Set cursor to (x,y) to start your text at the co-ordinate
  display.setCursor(0,0);
  //Show text
  display.println("Hello World"); //println would cause the next text (println or print) to be a line below, so no need for another .SetCursor(0,7) 
  //Empty the Buffer to the OLED
  display.display();
  delay(1000);
  //We will now display letters one by one on the same line, on the 2nd line, because of the println on line 34
  display.print("A ");
  display.display();
  delay(1000);
  display.print("B ");
  display.display();
  delay(1000);
  display.print("C ");
  display.display();
  delay(1000);
  display.print("D ");
  display.display();
  delay(1000);
  display.println("E ");
  display.display();
  delay(1000);
}

void loop() {


}
