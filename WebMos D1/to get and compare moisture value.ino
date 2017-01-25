/* # the sensor value description

# 0  ~300     dry soil

# 300~700     humid soil

# 700~950     in water*/


int sensor pin = A0;//assumption
int sensor_value;

void setup() {
  mySerial.begin(9600); // set up serial port for 9600 baud (speed)
  delay(500);// delay to boot up.
}

void loop() {
  soil_value=analogRead(A0);  // read from analog pin A0

Serial.print(soil_value);

if(soil_value<300)
{

Serial.println(“Dry soil,Please water it!!!”);

}

else if((soil_value>300)&&(soil_value<700))
{

Serial.println(“Humid soil”);

}

else if((soil_value>700)&&(soil_value<950))
{

Serial.println(“watery soil,Please take care”);

}
else
{
  serial.println("error");
}
delay(500);
}


