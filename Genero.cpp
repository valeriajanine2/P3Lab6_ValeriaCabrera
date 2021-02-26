#include "Genero.hpp"

Genero::Genero(){
	//constructor vacio
}

Genero::Genero(string nombre){
	this->nombre=nombre;
}

Genero::~Genero(){
	//destruir el objeto
}

void Genero::setNombre(string nombre){
	this->nombre=nombre;
}

string Genero::getNombre(){
	return this->nombre;
}
