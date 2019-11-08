#include "Entrada.h"

#include "Arduino.h"


Entrada::Entrada(int _pino, int _tipo){
	pino = _pino;
	tipo = _tipo;

	pinMode(pino, INPUT);
}

int Entrada::ler(){
	if (tipo == ANALOGICO)
		return analogRead(pino);
	else
		return digitalRead(pino);
}

int Entrada::lerInverso(){
	if (tipo == ANALOGICO)
		return 1023 - analogRead(pino);
	else
		return !digitalRead(pino);
}