#include "Saida.h"
#include "Arduino.h"

Saida::Saida(int _pino, bool _estado){
	pino = _pino;
	estado = _estado;

	pinMode(pino, OUTPUT);
	digitalWrite(pino, estado);
}

void Saida::ligar(){
   
   digitalWrite(pino, HIGH);
   estado = 1;

}

void Saida::desligar(){
   
   digitalWrite(pino, LOW);
   estado = 0;
  
}

void Saida::inverter(){
   estado = !estado;
   digitalWrite(pino, estado);
}

bool Saida::lerEstado(){
   return estado;
}

