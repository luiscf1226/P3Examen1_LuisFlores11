#ifndef TABLA_HPP
#define TABLA_HPP
#include <cmath>
#include <string>
#include <vector>
#include "equipo.hpp"
#include "puntos.hpp"
#include "partido.hpp"

using namespace std;
class tabla {
	private:
	vector <equipo> listae;
	public:
	tabla();
	tabla(vector<equipo>);
	~tabla();
	void setPuntos (vector<equipo>);
	string toString();
	//ector<equipo> getVector();
  
};
#endif

