#ifndef LIGA_HPP
#define LIGA_HPP
#include <cmath>
#include <string>
#include <vector>
#include "equipo.hpp"
#include "puntos.hpp"
#include "partido.hpp"
#include "tabla.hpp"
using namespace std;
class liga {
	private:
	string nombre;
	equipo e;
	vector <equipo> listae;
	vector <partido> listap;
	tabla t1;
	public:
	liga();
	liga(string,vector<equipo>,vector<partido>,tabla);
	liga(string,equipo);
	void setNombre1(string n);
	string getNombre1();
	void setListae(vector<equipo>);
	vector<equipo> getVector();
	void setListap(vector<partido>);
	vector<partido> getVector2();
	void setTabla(tabla);
	tabla getTabla();


  
};
#endif
