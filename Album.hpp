#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
#include <string>
#include <vector>
#include "Cancion.hpp"

using namespace std;

class Album{
	private:
		string nombre;
		vector<Cancion*> listaCanciones;
		string artista;
		
	public:
		Album();
		Album(string,vector<Cancion*>,string);
		~Album();
		void setNombre(string);
		void setArtista(string);
		string getNombre();
		string getArtista();
		vector<Cancion*> getCanciones();
};

#endif