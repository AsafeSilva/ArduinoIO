#include <ArduinoIO.h>

Entrada botao(10);
Entrada pot(A0, ANALOGICO);


void setup() {

}

void loop() {

	int valorBotao = botao.ler();

	int valorPot = pot.ler();

}
