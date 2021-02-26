#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <iostream>
#include <string>
#include <vector>
#include "Cancion.hpp"

using namespace std;

class Playlist{
	private:
		string nombre;
		vector<Cancion*> listaCanciones;
		
	public:
		Playlist();
		Playlist(string,vector<Cancion*>);
		~Playlist();
		void setNombre(string);
		string getNombre();
		vector<Cancion*> getListaCanciones();
		void listarCanciones();
};

#endif