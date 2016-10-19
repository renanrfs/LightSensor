int lightSensor = 0;      // Analogic PIN for Light Sensor
char lightSensorValue = 0;
int sumLight = 0;
int count = 0;
  
void setup(){
  Serial.begin(9600); 
}
 
void loop(){
   
  int lightSensorValue = analogRead(lightSensor);
    
  // Low brightness
  if (lightSensorValue < 750) {
    Serial.print("Luminosidade baixa: ");
    Serial.println(lightSensorValue);
  }
   
  // Medium brightness
  if (lightSensorValue >= 750 && lightSensorValue <= 800) {
    Serial.print("Luminosidade media: ");
    Serial.println(lightSensorValue);
  }
   
  // High brightness
  if (lightSensorValue > 800) {
    Serial.print("Luminosidade alta: ");
    Serial.println(lightSensorValue);
  }

  sumLight = sumLight + lightSensorValue;
  count++;
  
  Serial.print("Media: ");
  Serial.println(sumLight / count);
  
     
  delay(60000);
} 
