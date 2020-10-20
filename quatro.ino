/*	File #4

	A abordar: utilização de analogRead
	utilização de funções com argumentos
	if/else statement
	
				
*/

//declaração de pins de motor e o valor a escrever no motor
int motorPinDir = 7;
int motorPinPwm = 9;
int write = 0;

int potentiometerPin = A0;
int read = 0;
int redLedPin = 8;
int yellowLedPin = 6;
int greenLedPin = 5;

void turnOnLed(int distance){
	if(distance <400){
		digitalWrite(redLedPin,HIGH);
		digitalWrite(yellowLedPin,LOW);
		digitalWrite(greenLedPin,LOW);
	}else if(distance >=400 && distance <700){
		digitalWrite(redLedPin,LOW);
		digitalWrite(yellowLedPin,HIGH);
		digitalWrite(greenLedPin,LOW);
	}else{
		digitalWrite(redLedPin,LOW);
		digitalWrite(yellowLedPin,LOW);
		digitalWrite(greenLedPin,HIGH);
	}
}
//função que controla o motor consoante o valor de read
void motorControl(int value){
	if(value<400){
		write = 0;
	}
	else{
		//faz a correspondencia entre os ranges do sensor e os valores aceites pelo motor
		write = map(value, 400, 1023, 0, 255);
	}
	analogWrite(motorPinPwm, write);
}

void setup()
{
	//declaração do pin Dir do motor como HIGH permanentemente
	pinMode(motorPinDir, OUTPUT);
	pinMode(motorPinPwm, OUTPUT);

	pinMode(potentiometerPin, INPUT);
	pinMode(greenLedPin, OUTPUT);
	pinMode(yellowLedPin, OUTPUT);
	pinMode(redLedPin, OUTPUT);

}

void loop()
{
	digitalWrite(motorPinDir, HIGH);

	read = analogRead(potentiometerPin);
	motorControl(read);
	turnOnLed(read);
}

