#include <Wire.h>

#include <string.h>
#include <SPI.h>
#include "SC16IS750.h"


SC16IS750 i2cuart = SC16IS750(SC16IS750_PROTOCOL_I2C,SC16IS750_ADDRESS_BB);

//Connect TX and RX with a wire and run this sketch

void setup() 
{
    Serial.begin(9600);
    Serial.println("Init OK");
    // UART to Serial Bridge Initialization
    i2cuart.begin(9600);               //baudrate setting
    if (i2cuart.ping()!=1) {
        Serial.println("device not found");
        while(1);
    } else {
        Serial.println("device found");
    }
    Serial.println("start serial communication");
    


};

char str_tmp;
void loop() 
{
    i2cuart.SetRtsPin(1);
    delay(5);
    i2cuart.write(0x55);
    delay(5);
    i2cuart.SetRtsPin(0);
    while(i2cuart.available()==0);
    
    Serial.print("Data:");
    while(i2cuart.available()==1)
    {
      str_tmp=i2cuart.read();
      Serial.print(str_tmp);
      Serial.print(" ");  
    }
    Serial.println("");
  
};
