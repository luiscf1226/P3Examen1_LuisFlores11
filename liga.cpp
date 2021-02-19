#include "equipo.hpp"
#include "partido.hpp"
#include "puntos.hpp"
#include "tabla.hpp"
#include "liga.hpp"
#include <string>
liga::liga(){
	
}
liga::liga(string name,vector<equipo> v1,vector<partido>v2,tabla tt){
	this->nombre=name;
	this->listae=v1;
	this->listap=v2;
	this->t1=tt;
}
liga::liga(string nn,equipo e){
	this->nombre=nn;
	this->e=e;
}
string liga::getNombre1(){
	return this->nombre;
}
void liga::setNombre1(string n){
	this->nombre=n;
}
void liga::setListae(vector <equipo> e){
	this->listae=e;//
}
vector<equipo> liga::getVector(){
	return this->listae;
}
void liga::setListap(vector <partido> e){
	this->listap=e;//
}
vector<partido> liga::getVector2(){
	return this->listap;
}
void liga::setTabla(tabla t){
	this->t1=t;
}
tabla liga::getTabla(){
	return this->t1;
}
