/*	File #2

	A abordar: tipos e declaração de variáveis
	declaração de funçoes
				
*/

//declarar variaveis
int ledPin = 8;
bool state = LOW;

//funçao que troca o estado da variavel e muda a saida digital
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
	//chamar a função
	turnLedState();
	delay(1000);

}
