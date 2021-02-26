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

void Playlist::listarCanciones(){
	cout<<"Album: "<<this->nombre<<endl;
	
	for(int i = 0; i < listaCanciones.size(); i++){
		Cancion* c = new Cancion();
		c = listaCanciones.at(i);
		cout<<i<<") "<<c->getNombre()<<" - "<<c->getArtista()<<" Genero: "<<c->getGenero()->getNombre()<<" Duracion: "<<c->getDuracion()<<endl;
	}
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
