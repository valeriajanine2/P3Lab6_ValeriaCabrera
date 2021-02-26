#include "Album.hpp"

Album::Album(){
	//constructor vacio
}

Album::Album(string nombre,vector<Cancion*> listaCanciones,string artista){
	this->nombre=nombre;
	this->artista=artista;
	this->listaCanciones=listaCanciones;
}

Album::~Album(){
	//destruir el objeto
}

void Album::listarCanciones(){
	
	cout<<"Playlist: "<<this->nombre<<" - "<<this->artista<<endl;
	
	for(int i = 0; i < listaCanciones.size(); i++){
		Cancion* c = new Cancion();
		c = listaCanciones.at(i);
		cout<<i<<") "<<c->getNombre()<<" - "<<c->getArtista()<<" Genero: "<<c->getGenero()->getNombre()<<" Duracion: "<<c->getDuracion()<<endl;
	}
}

void Album::setNombre(string nombre){
	this->nombre=nombre;
}

string Album::getNombre(){
	return this->nombre;
}

void Album::setArtista(string nombre){
	this->artista=artista;
}

string Album::getArtista(){
	return this->artista;
}

vector<Cancion*> Album::getCanciones(){
	return this->listaCanciones;
}
