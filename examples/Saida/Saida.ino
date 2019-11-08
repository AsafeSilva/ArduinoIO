#include <ArduinoIO.h>

Saida led(13);
Saida buzzer(3);
Saida rele(A3, LIGADO);



void setup() {

}

void loop() {

	led.ligar();
	delay(500);
	led.desligar();
	delay(500);

	buzzer.inverter();

	if (buzzer.lerEstado() == LIGADO){
		rele.desligar();
	}else{
		rele.ligar();
	}
}
