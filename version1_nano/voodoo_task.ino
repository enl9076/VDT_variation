/*
    Name:       voodoo_task.ino
    Created:	12/20/2020 7:24:41 PM
    Author:     emily
*/
#define fsrpin A0

//Define variable to store sensor readings:
int fsrreading; //Variable to store FSR value

void setup() {
	// Begin serial communication at a baud rate of 9600:
	Serial.begin(9600);
}
void loop() {
	fsrreading = analogRead(fsrpin);
	Serial.println(fsrreading);
	delay(1000);
}
