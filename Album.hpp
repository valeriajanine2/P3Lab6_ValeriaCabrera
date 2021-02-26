#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
#include <string>
#include <vector>
#include "Cancion.hpp"
//#include "Playlist.hpp"

using namespace std;

class Album{
	private:
		string nombre;
		vector<Cancion*> listaCanciones;
		string artista;
		
	public:
		Album();
		Album(string,vector<Cancion*>,string);
		Album(string);
		~Album();
		void setNombre(string);
		void setArtista(string);
		string getNombre();
		string getArtista();
		vector<Cancion*> getCanciones();
		void listarCanciones();
		Album* operator * (int);
		Album* operator + (Cancion*);
		void setListaCanciones(vector<Cancion*>);
};

#endif