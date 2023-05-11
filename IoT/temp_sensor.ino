/*
Paste the following in diagram.json

{
  "version": 1,
  "author": "Adithya Subramani R",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-arduino-uno", "id": "uno", "top": 0, "left": 0, "attrs": {} },
    {
      "type": "wokwi-ntc-temperature-sensor",
      "id": "ntc1",
      "top": -83.8,
      "left": -154.2,
      "attrs": {}
    }
  ],
  "connections": [
    [ "ntc1:GND", "uno:GND.1", "black", [ "h0" ] ],
    [ "ntc1:VCC", "uno:5V", "red", [ "h179.66", "v234.96" ] ],
    [ "ntc1:OUT", "uno:A5", "green", [ "h0" ] ]
  ],
  "dependencies": {}
}

*/
int temp = A5;
void setup() {
  // put your setup code here, to run once:
  pinMode(temp,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int rawVal = analogRead(temp);
  float TEMP_in_C = 1 / (log(1 / (1023. / rawVal - 1)) / 3950.0 + 1.0 / 298.15) - 273.15;
  Serial.print("Temperature in celsius: ");
  Serial.println(TEMP_in_C);
  delay(5000);
}
