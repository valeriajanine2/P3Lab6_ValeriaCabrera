#include "Cancion.hpp"

Cancion::Cancion(){
	//constructor vacio
}

Cancion::Cancion(string nombre,string artista,Genero* genero, string duracion){
	this->nombre=nombre;
	this->artista=artista;
	this->genero=genero;
	this->duracion=duracion;
}

Cancion::~Cancion(){
	//destruir el objeto
}

void Cancion::setNombre(string nombre){
	this->nombre=nombre;
}

string Cancion::getNombre(){
	return this->nombre;
}

void Cancion::setArtista(string nombre){
	this->artista=artista;
}

string Cancion::getArtista(){
	return this->artista;
}

Genero* Cancion::getGenero(){
	return this->genero;
}

void Cancion::setDuracion(string nombre){
	this->duracion=duracion;
}

string Cancion::getDuracion(){
	return this->duracion;
}