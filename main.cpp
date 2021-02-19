#include <iostream>
#include <ctime>
#include <random>
#include <vector>
#include <string>
#include "equipo.hpp"
#include "partido.hpp"
#include "puntos.hpp"
#include "tabla.hpp"
#include "liga.hpp"
using namespace std;
int main() {
	vector<equipo*> listaequipos;
	vector<liga*> listaliga;
	int menu=0;
	while(menu!=5) {
		cout<<"Escoja: "<<endl;
		cout<<"1. Mantenimiento de Equipos "<<endl<<"2. Generar Jornada"<<endl<<"3. Simular Partido"<<endl<<"4. Impresion"<<endl<<"5. Salir"<<endl;
		cin>>menu;
		if(menu==1){
			int m=0;
			while(m!=5){
				cout<<"1. Crear Equipo" <<endl<<"2. Modificar Equipo "<<endl<<"3. Listar Equipo"<<endl<<"4. Eliminar"<<endl<<"5. Salir"<<endl;
				cin>>m;
				if(m==1){
					string n;
					 int s=1+(rand()%99);
					//cout<<s<<endl;
					cout<<"Ingrese Nombre de Equipo: ";
					cin>>n;
					//liga,tabla
					listaequipos.push_back(new equipo(n,s));
					liga* l;
					l->setNombre1("LIGA BBVA");
					equipo* e;
					e->setNombre(n);
					e->setSkill(s);
					l->setListae(e);
					listaliga.push_back(l);
					
				}
			}//finwhile
		}//fin menu 1
	}	//fin while princopal

	return 0;
}
