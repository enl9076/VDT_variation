# VDT_variation
 This project is a microcontroller-based variation of the well-known Voodoo Doll Task often used in aggression and other psychological research.
 
 ## About the project
 I am a psychological researcher and as such have often used the Voodoll task (see ) in online and laboratory experiments. This behavioral task is typically used to measure aggressive behavior but after using it several times myself I noticed one major drawback - the *way* it measured aggression, which is simily by the number of pins participants choose to stick in the doll (virtually, if deployed online). I wanted to alter the task to be able to capture *physical aggression* a bit more accurately/objectively, so I thought about finding a way to gauge *hard* participants are pushing in the pins. This is where the microcontrollers come in.
 
 ### Version 1 -- the Nano
 This was my first attempt with this project - a very basic/simple version that senses pressure using the FSR and displays that data on the serial monitor of the Arduino IDE.
 
 **Hardware:**
 * Arduino Nano
 * Force Sensitive Resistor (FSR)
 * 10k ohm resistor
 
**Software:**
 * Arduino IDE
 
 ### Version 2 -- the upgrade
 I wanted to add more functionality to this project and make it into a device that could ostensibly be implemented in an actual research setting. So I used the NodeMCU microcontroller, which is equipped with WiFi. This enabled me to send the data to Google Sheets in real time, making the data collection and cleaning process easier. I also included an LED to indicator when data was being collected and two buttons that enabled me to control when to send data and when to stop sending data.
 
 **Hardware:**
 * NodeMCU
 * Force Sensitive Resistor (FSR)
 * Two 10k ohm resistors (1 for the LED and 1 for the FSR)
 * Green LED
 * Two buttons
 
**Software:**
 * Jupyter Notebook using Micropython kernel
 * Google Sheets
 
 
