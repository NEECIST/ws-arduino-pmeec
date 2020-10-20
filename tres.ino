/*	File #3

	A abordar: utilização de analogRead
	utilização de funções com argumentos
	if/else statement
	
				
*/

//declarar variaveis
int redLedPin = 8;
int yellowLedPin = 6;
int greenLedPin = 5;
int potentiometerPin = A0;
int read = 0;

//função com um argumento de entrada
void turnOnLed(int distance){
//a variável distance está a ser declarada como argumento da função e a ser utilizada dentro da mesma. logo não podemos existe fora desta função
	//if/else statement
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

void setup()
{
	//declarar pins como output/input
	pinMode(potentiometerPin, INPUT);
	pinMode(greenLedPin, OUTPUT);
	pinMode(yellowLedPin, OUTPUT);
	pinMode(redLedPin, OUTPUT);
}

void loop()
{
	//ler valor do potenciometro
	read = analogRead(potentiometerPin);
	//chamar a função dando como argumento o valor do potenciometro
	turnOnLed(read);
	delay(10);
}

