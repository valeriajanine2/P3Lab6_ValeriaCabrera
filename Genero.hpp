#ifndef GENERO_H
#define GENERO_H
#include <iostream>
#include <string>

using namespace std;

class Genero{
	private:
		string nombre;
		
	public:
		Genero();
		Genero(string);
		~Genero();
		void setNombre(string);
		string getNombre();
};

#endif