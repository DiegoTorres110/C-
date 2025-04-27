#include<iostream>
#include "Empresa.h"
using namespace std;

ProductoFresco::ProductoFresco() : Productos() { //constructor subclase invoca constructor padre
    
}

void ProductoFresco::imprimirFresco(){
    cout << "Producto Fresco" << endl;
    cout << "Fecha de caducidad: " << this->getFechaCad() << endl;
    cout << "Número de lote: " << this->getNumLote() << endl;
    cout << "Fecha de envasado: " << this->getFechaEnv() << endl;
    cout << "Pais de Origen: " << this->getPais() << endl;
}