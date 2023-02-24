// Copyright (c) 2023 Evan Beaudoin All rights reserved
//
// Created by: Evan Beaudoin
// Created on: Feb 2023
// This program makes an LED blink

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
