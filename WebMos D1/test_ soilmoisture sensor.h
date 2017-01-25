
/* # the sensor value description
# 0  ~300     dry soil
# 300~700     humid soil
# 700~950     in water*/


#include <ESP8266WiFi.h>

	int sensor pin = A0;	//assumption
	int sensor_value;  
	int delay = 500;	// delay to boot up.


int soil_moisture() 
{
	soil_value=analogRead(A0);  // read from analog pin A0

 	Serial.print(soil_value);

if(soil_value<300)
{

	
	return 0; 		//dry soil
}

else if((soil_value>300)&&(soil_value<700))
{

	
	return 1;		//humid soil
}

else if((soil_value>700)&&(soil_value<950))
{

	return 2;	//wet soil
}
call(delay);
}

