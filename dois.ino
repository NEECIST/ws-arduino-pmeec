/*	File #2

	A abordar: tipos e declara��o de vari�veis
	declara��o de fun�oes
				
*/

//declarar variaveis
int ledPin = 8;
bool state = LOW;

//fun�ao que troca o estado da variavel e muda a saida digital
void turnLedState(){
	state = !state;
	digitalWrite(ledPin, state);
}

void setup()
{
	pinMode(ledPin, OUTPUT);
}

void loop()
{
	//chamar a fun��o
	turnLedState();
	delay(1000);

}
