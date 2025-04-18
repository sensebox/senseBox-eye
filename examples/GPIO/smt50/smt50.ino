// SMT50 connected at GPIO A. Green temperature wire into IO3 and yellow humidity wire into IO2
#define TEMP_IO 3
#define HUMI_IO -1


float getSMT50Temperature(int analogPin){
  float voltage = analogReadMilliVolts(analogPin) / 1000.0;
  return (voltage - 0.5) * 100;
}
float getSMT50Moisture(int analogPin){
  float voltage = analogReadMilliVolts(analogPin) / 1000.0;
  return (voltage * 50) / 3;
}


void setup() {
  Serial.begin(115200);
  //Enable IO and Vout
  pinMode(TEMP_IO,INPUT);
  analogReadResolution(13);
  analogSetAttenuation(ADC_11db);
}

void loop() {
    Serial.print("Temperatur: ");
    Serial.println(getSMT50Temperature(TEMP_IO));
    delay(100);
}