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
	vector<partido*> listapar;
	vector<equipo*> listaequipos2;
	vector<puntos*> lista9;
	
	int menu=0;
	int total;
	while(menu!=5) {
		cout<<"Escoja: "<<endl;
		cout<<"1. Mantenimiento de Equipos "<<endl<<"2. Generar Jornada"<<endl<<"3. Simular Partido"<<endl<<"4. Impresion"<<endl<<"5. Salir"<<endl;
		cin>>menu;
		int par=0;
		if(menu==1){
			int m=0;
			while(m!=5){
				cout<<"1. Crear Equipo" <<endl<<"2. Modificar Equipo "<<endl<<"3. Listar Equipo"<<endl<<"4. Eliminar"<<endl<<"5. Regresar"<<endl;
				cin>>m;
				if(m==1){
					string n;
					 int s=1+(rand()%99);
					//cout<<s<<endl;
					cout<<"Ingrese Nombre de Equipo: ";
					cin>>n;
					//liga,tabla
					listaequipos.push_back(new equipo(n,s));
					listaequipos2.push_back(new equipo(n,s));
					cout<<"equipo Creado"<<endl;
					total++;
					
				}//crear
				if(m==2){
					  for(int i = 0; i < listaequipos.size(); i++){
			          equipo *e = listaequipos[i];
			          cout <<"------" << "Equipo #" << i <<"------"<<endl;
			          cout << "Nombre : " <<e->getNombre()<<endl;
			          cout<<"Skill: "<<e->getSkill()<<endl;
			          
			        }
			        int i = -1;
			        cout << "Ingrese el indice del equipo que modificara: ";
			        cin >> i;
			        equipo *ee = listaequipos[i];
			        int ss=1+(rand()%99);
			        string nn;
			        cout<<"Ingrese nuevo nombre: "<<endl;
			        cin>>nn;
			        ee->setNombre(nn);
			        ee->setSkill(ss);
			       	
				}//2
				if(m==3){
					 for(int i = 0; i < listaequipos.size(); i++){
			          equipo *e = listaequipos[i];
			          cout <<"------" << "Equipo #" << i <<"------"<<endl;
			          cout << "Nombre : " <<e->getNombre()<<endl;
			          cout<<"Skill: "<<e->getSkill()<<endl;
			        }
					
				}//3
				if(m==4){
					for(int i = 0; i < listaequipos.size(); i++){
			          equipo *e = listaequipos[i];
			          cout <<"------" << "Equipo #" << i <<"------"<<endl;
			          cout << "Nombre : " <<e->getNombre()<<endl;
			          cout<<"Skill: "<<e->getSkill()<<endl;
			        }
			         int carro = -1;
			        cout << "Ingrese el indice del equipo que eliminara: ";
			        cin >> carro;
			        delete listaequipos[carro];
			        listaequipos.erase(listaequipos.begin()+carro);
			        break;
					
				}//4
			}//finwhile
		}//fin menu 1
		if(menu==2){
		
			int o=1+(rand()%listaequipos.size());
			int o2=1+(rand()%listaequipos.size());
			cout<<"cantidad de equipos en la liga: "<<total<<endl;
			cout<<o<<endl;
			do {
				
				equipo *e =listaequipos[o];
				equipo *e2 =listaequipos[o2];
				partido *p;
				int n=1;
				p=new partido(e,e2);
				listapar.push_back(p);
				total-=2;
				
				cout<<"Jornada : "<<n<< " Equipo : "<<e->getNombre()<<" VS Equipo:  "<<e2->getNombre()<<endl;
				n++;
				cout<<"todavia hay: "<<total<< " Equipos sin partido"<<endl;
				
				
			} while(total>0);

			
			
		}//menu2
		if(menu==3){
			for(int i=0;i<listapar.size();i++){
				partido *p=listapar[i];
				equipo *e=p->getEquipo111();
				equipo *e2=p->getEquipo222();
				int m=1;
				cout<<"partido: "<<m<<endl;
				cout<<"Equipo: "<<e->getNombre()<<" vs Equipo: "<<e2->getNombre()<<endl;
				int gc= 0+(rand()%3);
				int r= -15+(rand()%30);
				int r2= -15+(rand()%30);
				int k=e->getSkill();
				int k2=e->getSkill();
				e->setSkill(k+r);
				e2->setSkill(k2+r2);
				if(e->getSkill()>e2->getSkill()){
					cout<<"El Ganador es: "<<e->getNombre()<<endl;
					puntos *p;
					int golesf=0;
					golesf=e->getSkill()/10;
					int pg=0;
					pg++;
					int tt=0;
					tt+=3;
					par++;
					p=new puntos(e,golesf,gc,pg,0,0,tt);
					lista9.push_back(p);
					
				}else{
					cout<<"El Ganador es: "<<e2->getNombre()<<endl;
					puntos *p;
					int golesf=0;
					golesf=e2->getSkill()/10;
					int pg=0;
					pg++;
					par++;
					int tt=0;
					tt+=3;
					p=new puntos(e2,golesf,gc,pg,0,0,tt);
					lista9.push_back(p);
				}
				//cout<<r<<endl;
			}
			cout<<"FIN DE PARTIDOS"<<endl;
		}//3
		if(menu==4){
			cout<<"TABLA: "<<endl;
			for(int i=0;i<lista9.size();i++){
				int n=listaequipos.size();
				while(n>0){
					
				
				puntos *p=lista9[i];
				equipo *e=p->getEquipaso();
				par++;
				cout<<"Nombre Equipo: "<<e->getNombre()<<endl<<"Partido jugado: "<<par<<endl<<"Partidos Ganados: "<<p->getPartidoG()<<endl<<"Partidos Perdidos: "<<p->getPartidoP()<<endl<<"Partidos Empatados: "<<p->getPartidoE()<<endl<<"Goles Favor: "<<p->getGolesF()<<endl<<"Goles Contra: "<<p->getGolesC()<<endl<<"total puntos: "<<p->getTotal()<<endl<<endl;
				n--;
				}
			}
		}
	}	//fin while princopal

	return 0;
}
