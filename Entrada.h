#ifndef Entrada_h
#define Entrada_h

#define DIGITAL 0
#define ANALOGICO 1

class Entrada {

private:
	int pino;
	int tipo;

public:
	Entrada(int _pino, int _tipo = DIGITAL);

	int ler();
	int lerInverso();
	
};



#endif