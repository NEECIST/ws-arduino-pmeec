/*	File #1

	A abordar: funções do arduino(loop e setup)
	o que são pins (digitais e analógicos)
	funções do arduino(pinMode, digitalWrite, delay)
	comentários
	
	como guardar/carregar scripts de arduino/perifericos	
*/

void setup()
{
	//declaração de pin de output/input
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
