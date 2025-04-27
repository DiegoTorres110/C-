#include <iostream>
#include "Empresa.h"
using namespace std;

Productos::Productos(){ //constructor; con el :: indica a qué clase pertenece
    this->fechaCaducidad = 0;
    this->numeroLote = 0;
    this->fechaEnvasado = 0;
    this->paisOrigen = "";
}    
void Productos::setFechaCad(int x){
    this->fechaCaducidad = x;
}
void Productos::setNumLote(int x){
    this->numeroLote = x;
}
void Productos::setfechaEnv(int x){
    this->fechaEnvasado = x;
}
void Productos::setPais(string x){
    this->paisOrigen = x;
}

int Productos::getFechaCad(){
    return this->fechaCaducidad;
}
int Productos::getNumLote(){
    return this->numeroLote;
}
int Productos::getFechaEnv(){
    return this->fechaEnvasado;
}
string Productos::getPais(){
    return this->paisOrigen;
}
	


