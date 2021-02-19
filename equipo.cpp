#include "equipo.hpp"
#include <string>
equipo::equipo(){
	
}
equipo::equipo(string n,int s){
	this->nombre=n;
	this->skill=s;
}
equipo::~equipo(){
	//destructor
}
string equipo::getNombre(){
	return this->nombre;
}
void equipo::setNombre(string n){
	this->nombre=n;
}
int equipo::getSkill(){
	return this->skill;
}
void equipo::setSkill(int s){
	this->skill=s;
}
//void liga::setListapp(vector <puntos> e){
//	this->lista_p=e;//
//}
//vector<equipo> liga::getVector(){
//	return this->lista_p////;
//}

string equipo::toString(){
	string s=" ";
	s+="Nombre: "+this->getNombre()+"\n";
	s+="Skill: "+to_string(this->getSkill())+"\n";
	return s;
}
