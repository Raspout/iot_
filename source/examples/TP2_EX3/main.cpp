#include "MicroBit.h"
#include <string> 


MicroBit uBit;
MicroBitThermometer thermometer;
//
// Print details of all events received to the serial port.
// Default settings are 115200 baud, 8N1 over the USB interface.
//

int main()
{
    // Initialise the micro:bit runtime.
    uBit.init();


    // We're done, so just enter a power efficient sleep while we wait for an event.
    while (1){
        uBit.serial.printf("%d", thermometer.getTemperature()); 
        uBit.sleep(1000);
        uBit.serial.printf("\r\n");
        }
}

