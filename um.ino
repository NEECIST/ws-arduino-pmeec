/*	File #1

	A abordar: fun��es do arduino(loop e setup)
	o que s�o pins (digitais e anal�gicos)
	fun��es do arduino(pinMode, digitalWrite, delay)
	coment�rios
	
	como guardar/carregar scripts de arduino/perifericos	
*/

void setup()
{
	//declara��o de pin de output/input
	pinMode(8, OUTPUT);
}

void loop()
{
	//escrever estado no pin 8
	digitalWrite(8, HIGH);
	//esperar 1000 ms
	delay(1000);
	digitalWrite(8,LOW);
	delay(1000);
}
