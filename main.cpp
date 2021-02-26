#include <iostream>
#include <string>
#include <vector>
#include "Album.hpp"
#include "Cancion.hpp"
#include "Genero.hpp"
#include "Playlist.hpp"


using namespace std;

void listarGeneros(vector<Genero*> lista){
	for(int i = 0; i < lista.size(); i++){
		Genero* g = new Genero();
		cout<<i<<") "<<g->getNombre()<<endl;
	}
}

void listarCanciones(vector<Cancion*> lista){
	for(int i = 0; i < lista.size(); i++){
		Cancion* c = new Cancion();
		cout<<i<<") "<<c->getNombre()<<" - "<<c->getArtista()<<" Genero: "<<c->getGenero()->getNombre()<<" Duracion: "<<c->getDuracion()<<endl;
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Album* album = new Album();
	Cancion* cancion = new Cancion();
	Genero* genero = new Genero();
	Playlist* playlist = new Playlist();
	
	int opcion=0;
	int opcion2=0;
	
	vector<Genero*> genres;
	vector<Cancion*> songs;
	
	while(opcion!=5){
		
		cout<<"MENU\n1) Mantenimiento\n2) Sobrecargar el Operador *\n3) Sobrecargar el Operador +\n4) Sobrecargar el Operador -\n5)Salir"<<endl;
		cout<<"Ingrese el numero de la opcion que desea realizar: ";
		cin>>opcion;
		
		switch(opcion){
			
			case 1:{
				
				while(opcion2!=11){
				
				
					cout<<"1) Agregar Cancion\n2) Modificar Cancion\n3) Eliminar Cancion\n4) Listar Canciones\n";
					cout<<"5) Agregar Genero\n6) Modificar Genero\n7) Eliminar Genero\n8) Listar Generos\n";
					cout<<"9) Listar Albumes\n10) Listar Playlists\n11) Salir";
					cout<<"Ingrese el numero de la opcion que desea realizar: ";
					cin>>opcion2;
					
					
					switch(opcion2){
						case 1:{
							
							//agregar cancion
							if(genres.size()!=0){
								string 	nombre, artista, duracion;
								Genero* g = new Genero();
								int index;
								
								cout<<"Nombre: ";
								cin>>nombre;
								cout<<"Arista: ";
								cin>>artista;
								listarGeneros(genres);
								cout<<"Ingrese el numero del indice del genero: ";
								cin>>index;
								while(index>genres.size() || index<0){
									cout<<"El numero ingresado no es un indice de la lista"<<endl;
									cout<<"Ingrese el numero del indice del genero: ";
									cin>>index;
								}//fin de la validacion
								g = genres.at(index);
								cout<<"Ingrese la duracion en formato 00:00: ";
								cin>>duracion;
								
								Cancion* song = new Cancion(nombre,artista,g,duracion);
								
								songs.push_back(song);
								
								
							}else{
								cout<<"No se puede crear una cancion si no hay generos creados"<<endl;
							}
							
							break;
						}
						
						case 2:{
							
							//modificar cancion
							if(genres.size()!=0){
								string 	nombre, artista, duracion;
								Genero* g = new Genero();
								int index, i;								
								
								cout<<"Ingrese el numero de la cancion a modificar: ";
								cin>>i;
								while(i>songs.size() || i<0){
									cout<<"El numero igresado no es un indice"<<endl;
									cout<<"Ingrese el numero de la cancion a modificar: ";
									cin>>i;
								}//fin de la validacion
								
								cout<<"Nuevo Nombre: ";
								cin>>nombre;
								cout<<"Nuevo Arista: ";
								cin>>artista;
								listarGeneros(genres);
								cout<<"Ingrese el numero del indice del genero: ";
								cin>>index;
								while(index>genres.size() || index<0){
									cout<<"El numero ingresado no es un indice de la lista"<<endl;
									cout<<"Ingrese el numero del indice del genero: ";
									cin>>index;
								}//fin de la validacion
								g = genres.at(index);
								cout<<"Ingrese la nueva duracion en formato 00:00: ";
								cin>>duracion;
								
								Cancion* song = new Cancion();
								
								song = songs.at(i);
								song->setNombre(nombre);
								song->setArtista(artista);
								song->setGenero(g);
								song->setDuracion(duracion);
								
							}else{
								cout<<"No se puede crear una cancion si no hay generos creados"<<endl;
							}
							
							break;
						}
						
						case 3:{
							
							//eliminar canciones
							
							if(genres.size()!=0){
								
								int index;
								
								cout<<"Ingrese el indice de la cancion que desea eliminar: ";
								cin>>index;
								while(index>songs.size() || index<0){
									cout<<"No existe una cancion en ese indice"<<endl;
									cout<<"Ingrese el indice de la cancion que desea eliminar: ";
									cin>>index;
								}
								
								songs.erase(songs.begin()+index);
								
							}else{
								cout<<"No se puede crear una cancion si no hay generos creados"<<endl;
							}
							
							
							break;
						}
						
						case 4:{
							
							//listar canciones
							
							listarCanciones(songs);
							
							break;
						}
						
						case 5:{
							
							//crear genero
							
							string nombre;
							
							cout<<"Nombre: ";
							cin>>nombre;
							
							Genero* g = new Genero(nombre);
							
							genres.push_back(g);
							
							
							break;
						}
						
						case 6:{
							
							//modificar genero
							
							int index;
							string nombre;
							
							cout<<"Ingrese el numero del genero que desea modificar: ";
							cin>>index;
							while(index>genres.size() || index<0){
								cout<<"No existe un genero con ese indice"<<endl;
								cout<<"Ingrese el numero del genero que desea modificar: ";
								cin>>index;
							}
							
							cout<<"Nuevo nombre: ";
							cin>>nombre;
							
							Genero* g = new Genero();
							g = genres.at(index);
							g->setNombre(nombre);
							
							break;
						}
						
						case 7:{
							
							//eliminar genero
							
							int index;
							
							cout<<"Ingrese el numero del genero que desea eliminar: ";
							cin>>index;
							while(index>genres.size() || index<0){
								cout<<"No existe un genero con ese indice"<<endl;
								cout<<"Ingrese el numero del genero que desea eliminar: ";
								cin>>index;
							}
							
							genres.erase(genres.erase(genres.begin()+index));
							
							break;
						}
						
						case 8:{
							
							//listar genero
							
							listarGeneros(genres);
							
							break;
						}
						
						case 9:{
							
							//listar albumes
							
							
							
							break;
						}
						
						case 10:{
							
							//listar playlists
							
							break;
						}
						
						case 11:{
							//solo por la validacion
							break;
						}
						
						default: {
							cout<<"Asegurese de ingresar una de las opciones del menu"<<endl;
							break;
						}
					}
				
			}
				
				break;
			}
			
			case 2:{
				
				
				break;
			}
			
			case 3:{
				
				break;
			}
			
			case 4:{
				
				
				break;
			}
			
			case 5:{
				cout<<"Adios, tenga buen dia <3";
				break;
			}
			
			default: {
				cout<<"Asegurese de ingresar una de las opciones del menu"<<endl;
				break;
			}
			
		}//fin del switch
		
	}//fin del while principal
	
	delete genero;
	delete cancion;
	delete album;
	delete playlist;
	
	for(int i = 0; i < genres.size(); i++){
		delete genres.at(i);
	}
	
	for(int i = 0; i < songs.size(); i++){
		delete songs.at(i);
	}
	
	
	return 0;
}