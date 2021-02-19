#include "equipo.hpp"
#include "partido.hpp"
#include "puntos.hpp"
#include "tabla.hpp"
#include <string>
tabla::tabla(){
	
}
tabla::tabla(vector<equipo> v){
	this->listae=v;
}
tabla::~tabla(){
	//destructor
}
void tabla::setPuntos(vector<equipo> v){
	this->listae=v;
}
//vector<equipo> tabla::getVector(){
////	return this->listae;
//}

