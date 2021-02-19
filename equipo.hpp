#ifndef EQUIPO_HPP
#define EQUIPO_HPP
#include <cmath>
#include <string>

using namespace std;
class equipo {
	private:
	string nombre;
	int skill;
	//vector <puntos> lista_p;
	public:
	equipo();
	equipo(string,int);
	~equipo();
//	void setListapp(vector<puntos>);
	//vector<> getVector();
	string getNombre();
	void setNombre(string);
	int getSkill();
	void setSkill(int);
	string toString();

  
};
#endif
