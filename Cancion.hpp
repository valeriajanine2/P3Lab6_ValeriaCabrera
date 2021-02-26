#ifndef CANCION_H
#define CANCION_H
#include <iostream>
#include <string>
#include "Genero.hpp"

using namespace std;

class Cancion{
	private:
		string nombre;
		string artista;
		Genero* genero;
		string duracion;
		
	public:
		Cancion();
		Cancion(string,string,Genero*,string);
		~Cancion();
		void setNombre(string);
		void setArtista(string);
		void setGenero(Genero*);
		void setDuracion(string);
		string getNombre();
		string getArtista();
		Genero* getGenero();
		string getDuracion();
};

#endif