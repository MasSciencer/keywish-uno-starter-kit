/***********************************************************************
 *       __                                                          _
 *      / /        _____  __    __  _          _   (_)   ________   | |
 *     / /____   / _____) \ \  / / | |   __   | |  | |  (  ______)  | |_____
 *    / / ___/  | |_____   \ \/ /  | |  /  \  | |  | |  | |______   |  ___  |
 *   / /\ \     | |_____|   \  /   | | / /\ \ | |  | |  (_______ )  | |   | |
 *  / /  \ \__  | |_____    / /    | |/ /  \ \| |  | |   ______| |  | |   | |
 * /_/    \___\  \______)  /_/      \__/    \__/   |_|  (________)  |_|   |_|
 *
 *
 * KeyWay Tech firmware
 *
 * Copyright (C) 2015-2020
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, in version 3.
 * learn more you can see <http://www.gnu.org/licenses/>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *
 * [Title]      SW520D Ball Switch
 * [Diagram]
 *         Arduino PIN A5   ===================  SW520D PIN 1
 *         Arduino PIN GND  ===================  SW520D PIN 2
 *         Arduino PIN A5   ===================  10kΩresistor PIN 1
 *         Arduino PIN 5V   ===================  10kΩresistor PIN 2
 *         Arduino PIN 13   ===================  LED PIN +
 *         Arduino PIN GND  ===================  LED PIN -
 */
int Led=9;        //定义LED 接口  
int Hall_Pin= 8;  //定义霍尔开关传感器接口 
int val=0;        //定义数字变量val 
void setup() 
{  
  pinMode(Led,OUTPUT);//定义LED 为输出接口  
  pinMode(Hall_Pin,INPUT);//定义倾斜开关传感器为输出接口
  Serial.begin(9600);
}  
void loop() 
{  
 // Serial.println(Hall_Pin);
  val=digitalRead(Hall_Pin);//将数字接口9的值读取赋给val 
  Serial.println(val);
  if(val==HIGH)               //当霍尔开关传感器检测有信号时，LED 亮 
     {  digitalWrite(Led,HIGH); 
     delay(1000);
     } 
  else 
     {  
       digitalWrite(Led,LOW); 
       delay(1000);
     } 
}