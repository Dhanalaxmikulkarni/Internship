#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


int sensorValue;
int digitalValue;
void setup()
{

Serial.begin(115200); // sets the serial port to 9600


if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

   display.display();
  delay(2000); // Pause for 2 seconds

  // Clear the buffer
  display.clearDisplay();


  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println(F("Hello !!!"));
  display.setCursor(20, 40);
  display.println(F("Dhanya"));
  display.display();      // Show initial text
  delay(3000); 


}


void loop()

{

sensorValue = analogRead(34); // read analog input pin 0

digitalValue = digitalRead(2); 

Serial.println(sensorValue, DEC); // prints the value read
display.clearDisplay();

  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(20, 10);
  display.println(F("GOOD"));
   display.setCursor(20, 50);
  display.println("MORNING");
  display.display();      // Show initial text
  

delay(1000); // wait 100ms for next reading

}
