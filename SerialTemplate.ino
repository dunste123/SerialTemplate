/**
 * A template for using serial stuff with arduino
 *
 * @date 2019-02-11
 * @author duncte123
 * @version 1
 */

#include <Arduino.h>

#define SERIAL_RATE 115200
#define ENABLE_DEBUG true

// Globals

void printLn(String a_inputString) {
#if ENABLE_DEBUG
    Serial.println(a_inputString);
#endif
}

void initSerial() {
    Serial.begin(SERIAL_RATE);
    printLn("READY: Serial initialized");
}

void showCreator() {
    printLn("Created by: Duncan \"duncte123\" Sterken");
}

void setup() {

    initSerial();
    showCreator();

}

void loop() {

}