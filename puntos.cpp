#include "equipo.hpp"
#include "partido.hpp"
#include "puntos.hpp"
#include <string>
puntos::puntos(){
	
}
puntos::puntos(equipo ee1,int g1,int g2,int pg,int pp,int pe){
	this->e1=ee1;
	this->goles_favor=g1;
	this->goles_contra=g2;
	this->partido_g=pg;
	this->partido_p=pp;
	this->partido_e=pe;
}
puntos::~puntos(){
	//destructor
}
int puntos::getGolesF(){
	return this->goles_favor;
}
void puntos::setGolesF(int gf){
	this->goles_favor=gf;
}
int puntos::getGolesC(){
	return this->goles_contra;
}
void puntos::setGolesC(int gc){
	this->goles_contra=gc;
}
int puntos::getPartidoG(){
	return this->partido_g;
}
void puntos::setPartidoG(int pg){
	this->partido_g=pg;
}
int puntos::getPartidoP(){
	return this->partido_p;
}
void puntos::setPartidoP(int pp){
	this->partido_p=pp;
}
int puntos::getPartidoE(){
	return this->partido_e;
}
void puntos::setPartidoE(int pe){
	this->partido_e=pe;
}
void puntos::setTotal(int t){
	this->totalp=t;
}
int puntos::getTotal(){
	return this->totalp;
}
string puntos::getEquipo(){
	string s=" ";
	s+=" "+e1.toString();
	return s;
}
void puntos::setEquipo(equipo eq){
	this->e1=eq;
}
string puntos::toString(){
	string s=" ";
	//s+="equipo: "+to_string(this->e1.toString())+"\n";
	s+="Goles Favor: "+to_string(this->getGolesF())+"\n";
	s+="Goles Contra: "+to_string(this->getGolesC())+"\n";
	s+="Partidos Ganados: "+to_string(this->getPartidoG())+"\n";
	s+="Partidos Perdidos: "+to_string(this->getPartidoP())+"\n";
	s+="Partidos Empatado: "+to_string(this->getPartidoE())+"\n";
	return s;
}

