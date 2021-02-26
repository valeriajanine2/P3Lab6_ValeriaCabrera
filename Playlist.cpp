#include "PLaylist.hpp"

Playlist::Playlist(){
	//constructor vacio
}

Playlist::Playlist(string nombre, vector<Cancion*> listaCanciones){
	this->nombre=nombre;
	this->listaCanciones=listaCanciones;
}

Playlist::Playlist(string nombre){
	this->nombre=nombre;
}

Playlist::~Playlist(){
	//destruir el objeto
}

void Playlist::listarCanciones(){
	//cout<<"Album: "<<this->nombre<<endl;
	
	for(int i = 0; i < this->listaCanciones.size(); i++){
		Cancion* c = new Cancion();
		c = this->listaCanciones.at(i);
		cout<<"	"<<i<<") "<<c->getNombre()<<" - "<<c->getArtista()<<" Genero: "<<c->getGenero()->getNombre()<<" Duracion: "<<c->getDuracion()<<endl;
	}
}

Playlist* Playlist::operator +(Cancion* c){
	
	string name = this->nombre;
	Playlist* play = new Playlist(name);
	vector<Cancion*> songs = this->listaCanciones;
	songs.push_back(c);
	play->setListaCanciones(songs);
	return play;
}

Playlist* Playlist::operator +(Playlist* play){
	
	vector<Cancion*> songs;
	
	for(int i = 0; i < this->listaCanciones.size(); i++){
		Cancion* c = new Cancion();
		c = this->listaCanciones.at(i);
		songs.push_back(c);
	}
	
	for(int i = 0; i < play->getListaCanciones().size(); i++){
		Cancion* c = new Cancion();
		c = play->getListaCanciones().at(i);
		songs.push_back(c);
	}
	
	string name = "Union " + this->getNombre() + " " + play->getNombre();
	
	Playlist* p = new Playlist(name,songs);
	
	return p;
	
}

Playlist* Playlist::operator +(Album* album){
	
	Playlist* p = new Playlist(this->nombre);
	
	vector<Cancion*> songs = this->listaCanciones;
	for(int i = 0; i < album->getCanciones().size(); i++){
		Cancion* c = new Cancion();
		c = album->getCanciones().at(i);
		songs.push_back(c);
	}
	
	p->setListaCanciones(songs);
	
	return p;
	
}

Playlist* Playlist::operator -(Cancion* c){
	
	Playlist* play = new Playlist(this->nombre);
	
	vector<Cancion*> temp = this->getListaCanciones();
	
	for(int i = 0; i < temp.size(); i++){
		Cancion* s = new Cancion();
		s = temp.at(i);
		if(c->getNombre()==s->getNombre()){
			temp.erase(temp.begin() + i);
		}
	}
	
	play->setListaCanciones(temp);
	
	return play;
	
}

Playlist* Playlist::operator -(Genero* g){
	
	Playlist* play = new Playlist(this->nombre);
	
	vector<Cancion*> temp = this->getListaCanciones();
	
	for(int i = 0; i < temp.size(); i++){
		Cancion* s = new Cancion();
		s = temp.at(i);
		Genero* gen = s->getGenero();
		if(g->getNombre()==gen->getNombre()){
			temp.erase(temp.begin() + i);
		}
	}
	
	play->setListaCanciones(temp);
	
	return play;
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

void Playlist::setListaCanciones(vector<Cancion*> listaCanciones){
	this->listaCanciones=listaCanciones;
}