/* <VAPS ARDUINO> Copyright (C) <2017>  <TEAM VAPS>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
  #include <SoftwareSerial.h>
SoftwareSerial mSerial(0,1);
int Buzzer =13 ; 
int IR = 7;  // This is our input pin
int eyestatus = HIGH;  // HIGH MEANS EYE OPEN
void setup() {
  analogWrite(6,20);
  pinMode(Buzzer, OUTPUT);
  pinMode(IR, INPUT);
  
   mSerial.begin(9600);}
void loop() { 
 eyestatus  = digitalRead(IR);//Reads the output of the ir sensor from the 2nd PIN of the Digital section of the arduino
  if (eyestatus == LOW){digitalWrite(Buzzer,HIGH);    
  mSerial.print("1");
  
  }
  else{
    digitalWrite(Buzzer, LOW);
    mSerial.print("0");
    
  }
  delay(200);
}

