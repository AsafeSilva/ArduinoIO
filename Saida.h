#ifndef Saida_h
#define Saida_h

#define LIGADO 1
#define DESLIGADO 0

class Saida
{

private:
	int pino;
	bool estado;

public:
	Saida (int _pino, bool _estado = 0);

	void ligar();
	void desligar();
	void inverter();
	bool lerEstado();
};


#endif