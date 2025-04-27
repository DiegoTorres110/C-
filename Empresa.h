#pragma once
#include <iostream>
using namespace std;

class Productos {
private:
	int fechaCaducidad;
	int numeroLote;
	int fechaEnvasado;
	string paisOrigen;

public:
	Productos();
	void setFechaCad(int);
	void setNumLote(int);
	void setfechaEnv(int);
	void setPais(string);

	int getFechaCad();
	int getNumLote();
	int getFechaEnv();
	string getPais();
};

class ProductoFresco : Productos {

public:
    ProductoFresco();
    void imprimirFresco();
};

class ProductoRefrigerado : Productos {

};

class ProductoCongelado : Productos {

};

class CongeladoAire : ProductoCongelado {

};

class CongeladoAgua : ProductoCongelado {

};

class CongeladoNitrogeno : ProductoCongelado {

};