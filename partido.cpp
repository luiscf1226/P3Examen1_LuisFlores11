#include "equipo.hpp"
#include "partido.hpp"
#include <string>
partido::partido(){
	
}
partido::partido(equipo ee1,equipo ee2,float goles,float goles2,bool b){
	this->e1=ee1;
	this->e2=ee2;
	this->goles=goles;
	this->goles2=goles2;
	this->jugado=b;
}
partido::~partido(){
	//destructor
}
float partido::getGoles2(){
	return this->goles2;
}
void partido::setGoles2(float g2){
	this->goles2=g2;
}
float partido::getGoles(){
	return this->goles;
}
void partido::setGoles(float g){
	this->goles=g;
}
bool partido::getJugado(){
	return this->jugado;
}
void partido::setJugado(bool b){
	this->jugado=b;
}
string partido::getEquipo(){
	string s=" ";
	s+=" "+e1.toString();
	return s;
}
void partido::setEquipo(equipo eq){
	this->e1=eq;
}
string partido::getEquipo2(){
	string s=" ";
	s+=" "+e2.toString();
	return s;
}
void partido::setEquipo2(equipo eq){
	this->e2=eq;
}
string partido::toString(){
	string s=" ";
	s+="Goles 1: "+to_string(this->getGoles())+"\n";
	s+="Goles 2: "+to_string(this->getGoles2())+"\n";
	return s;
}
