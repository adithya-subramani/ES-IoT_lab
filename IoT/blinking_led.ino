/*
Paste the following in diagram.json

{
  "version": 1,
  "author": "Adithya Subramani R",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-arduino-uno", "id": "uno", "top": 0, "left": 0, "attrs": {} },
    {
      "type": "wokwi-led",
      "id": "led1",
      "top": -142.15,
      "left": 107.18,
      "attrs": { "color": "red" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r1",
      "top": -75.53,
      "left": 61.99,
      "attrs": { "value": "1000" }
    }
  ],
  "connections": [
    [ "led1:A", "uno:12", "green", [ "v0" ] ],
    [ "r1:2", "led1:C", "green", [ "v0" ] ],
    [ "r1:1", "uno:GND.1", "green", [ "v0" ] ]
  ],
  "dependencies": {}
}

*/
int led = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
