#include "PLaylist.hpp"

Playlist::Playlist(){
	//constructor vacio
}

Playlist::Playlist(string nombre, vector<Cancion*> listaCanciones){
	this->nombre=nombre;
	this->listaCanciones=listaCanciones;
}

Playlist::~Playlist(){
	//destruir el objeto
}

void Playlist::setNombre(string nombre){
	this->nombre=nombre;
}

string Playlist::getNombre(){
	return this->nombre;
}

vector<Cancion*> Playlist::getListaCanciones(){
	return this->listaCanciones;
}
