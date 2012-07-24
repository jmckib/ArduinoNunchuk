/*
 * ArduinoNunchuk Demo
 *
 * Copyright 2011-2012 Gabriel Bianconi, http://www.gabrielbianconi.com/
 *
 * Project URL: http://www.gabrielbianconi.com/projects/arduinonunchuk/
 *
 */

#include <Wire.h>
#include <ArduinoNunchuk.h>

#define BAUDRATE 19200

ArduinoNunchuk nunchuk = ArduinoNunchuk();

void setup()
{
  Serial.begin(BAUDRATE);
  nunchuk.setPowerPins();
  nunchuk.init();
}

void loop()
{
  nunchuk.update();

  Serial.print("\tjoyX: ");
  Serial.print(nunchuk.joyX, DEC);

  Serial.print("\tjoyY: ");
  Serial.print(nunchuk.joyY, DEC);

  Serial.print("\taccelX: ");
  Serial.print(nunchuk.accelX, DEC);

  Serial.print("\taccelY: ");
  Serial.print(nunchuk.accelY, DEC);

  Serial.print("\taccelZ: ");
  Serial.print(nunchuk.accelZ, DEC);

  Serial.print("\tzButton: ");
  Serial.print(nunchuk.zButton, DEC);

  Serial.print("\tcButton: ");
  Serial.println(nunchuk.cButton, DEC);
}
