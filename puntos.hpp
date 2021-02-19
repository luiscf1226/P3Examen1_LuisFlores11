#ifndef PUNTOS_HPP
#define PUNTOS_HPP
#include <cmath>
#include <string>
#include "equipo.hpp"
#include "partido.hpp"

using namespace std;
class puntos {
	private:
	equipo e1;
	int goles_favor;
	int goles_contra;
	int partido_g;
	int partido_p;
	int partido_e;
	int totalp;
	public:
	puntos();
	puntos(equipo,int,int,int,int,int);
	~puntos();
	void setTotal(int);
	int getTotal();
	void setEquipo(equipo);
	string getEquipo();
	int getGolesF();
	void setGolesF(int);
	int getGolesC();
	void setGolesC(int);
	int getPartidoG();
	void setPartidoG(int);
	int getPartidoP();
	void setPartidoP(int);
	int getPartidoE();
	void setPartidoE(int);
	string toString();

  
};
#endif
