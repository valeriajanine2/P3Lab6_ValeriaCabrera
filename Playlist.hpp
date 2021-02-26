#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <iostream>
#include <string>
#include <vector>
#include "Cancion.hpp"
#include "Album.hpp"

using namespace std;

class Playlist{
	private:
		string nombre;
		vector<Cancion*> listaCanciones;
		
	public:
		Playlist();
		Playlist(string,vector<Cancion*>);
		Playlist(string);
		~Playlist();
		void setNombre(string);
		string getNombre();
		vector<Cancion*> getListaCanciones();
		void setListaCanciones(vector<Cancion*>);
		void listarCanciones();
		Playlist* operator + (Cancion*);
		Playlist* operator + (Playlist*);
		Playlist* operator + (Album*);
		Playlist* operator - (Cancion*);
		Playlist* operator - (Genero*);
};

#endif