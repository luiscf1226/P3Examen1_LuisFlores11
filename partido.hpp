#ifndef PARTIDO_HPP
#define PARTIDO_HPP
#include <cmath>
#include <string>
#include "equipo.hpp"

using namespace std;
class partido {
	private:
	equipo e1;
	equipo e2;
	float goles;
	float goles2;
	bool jugado;
	public:
	partido();
	partido(equipo,equipo,float,float,bool);	
	~partido();
	void setEquipo(equipo);
	string getEquipo();
	float getGoles2();
	void setGoles2(float);
	float getGoles();
	void setGoles(float);
	bool getJugado();
	void setJugado(bool);
	string toString();

  
};
#endif
