#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int copago(int x);
int main(){
	int controlador=1,controladorsal;
	string Doctor[8][6];
	Doctor[0][0]= "Lunes";
	Doctor[0][1]="Martes";
	Doctor[0][2]="Miercoles";
	Doctor[0][3]="Jueves";
	Doctor[0][4]="Viernes";
	Doctor[0][5]="Sabado";
	int x,y;
	for(x = 1;x < 8;x++){
		for(y = 0 ;y < 6;y++){
			Doctor[x][y] = ' ';
		}
	}
	for(x = 0;x < 8;x++){
	    for(y = 0 ;y < 6;y++){
			 cout<<"| "<<Doctor[x][y]<<"      ";
		}
		cout<<endl;
	}
	while(controlador==1){
	cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"++           HORARIOS CITAS               ++"<<endl;
	cout<<"++                                        ++"<<endl;
	cout<<"++     1. AGENDAR                         ++"<<endl;
	cout<<"++     2. COPAGO                          ++"<<endl;
	cout<<"++     3. ELIMINAR CITA                   ++"<<endl;
	cout<<"++                                        ++"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<endl;
	cout<<endl;	
	cout<<"Por favor de acuerdo con lo desee eliga un numero correspondiente a la tabla: ->"<<endl;
	int num;
	cin>>num;
	switch(num){
		case 1:{
			cout<<"este es el horario de citas:";
					for(x = 0;x < 8;x++){
	    				for(y = 0 ;y < 6;y++){
			 				cout<<"| "<<Doctor[x][y]<<"      ";
						}
						cout<<endl;
					}
			cout<<"Por favor escoja el dia que desea agendar: ";
			string Diacita;
			cin>>Diacita;
			if(Doctor[0][0] == Diacita){
				for(x = 1;x < 8;x++){
					if(Doctor[x][0]==" "){
						cout<<x;
					}
				}
				cout<<endl;
				cout<<"escoja uno de los horarios disponibles: ";
				int horacita;
				cin>>horacita;
			    string nombrepaciente;
				cout<<"Por favor digite su nombre: ";
				cin>>nombrepaciente;
				Doctor[horacita][0]=nombrepaciente;
			}
			if(Doctor[0][1] == Diacita){
				for(x = 1;x < 8;x++){
					if(Doctor[x][1]==" "){
						cout<<x;
					}
				}
				cout<<endl;
				cout<<"escoja uno de los horarios disponibles: ";
				int horacita;
				cin>>horacita;
			    string nombrepaciente;
				cout<<"Por favor digite su nombre: ";
				cin>>nombrepaciente;
				Doctor[horacita][1]=nombrepaciente;
			}
			if(Doctor[0][2] == Diacita){
				for(x = 1;x < 8;x++){
					if(Doctor[x][2]==" "){
						cout<<x;
					}
				}
				cout<<endl;
				cout<<"escoja uno de los horarios disponibles: ";
				int horacita;
				cin>>horacita;
			    string nombrepaciente;
				cout<<"Por favor digite su nombre: ";
				cin>>nombrepaciente;
				Doctor[horacita][2]=nombrepaciente;
			}
					for(x = 0;x < 8;x++){
	    				for(y = 0 ;y < 6;y++){
			 				cout<<"| "<<Doctor[x][y]<<"      ";
						}
						cout<<endl;
					}
			if(Doctor[0][3] == Diacita){
				for(x = 1;x < 8;x++){
					if(Doctor[x][3]==" "){
						cout<<x;
					}
				}
				cout<<endl;
				cout<<"escoja uno de los horarios disponibles: ";
				int horacita;
				cin>>horacita;
			    string nombrepaciente;
				cout<<"Por favor digite su nombre: ";
				cin>>nombrepaciente;
				Doctor[horacita][3]=nombrepaciente;
			}
			if(Doctor[0][4] == Diacita){
				for(x = 1;x < 8;x++){
					if(Doctor[x][4]==" "){
						cout<<x;
					}
				}
				cout<<endl;
				cout<<"escoja uno de los horarios disponibles: ";
				int horacita;
				cin>>horacita;
			    string nombrepaciente;
				cout<<"Por favor digite su nombre: ";
				cin>>nombrepaciente;
				Doctor[horacita][4]=nombrepaciente;
			}
			if(Doctor[0][5] == Diacita){
				for(x = 1;x < 8;x++){
					if(Doctor[x][5]==" "){
						cout<<x;
					}
				}
				cout<<endl;
				cout<<"escoja uno de los horarios disponibles: ";
				int horacita;
				cin>>horacita;
			    string nombrepaciente;
				cout<<"Por favor digite su nombre: ";
				cin>>nombrepaciente;
				Doctor[horacita][5]=nombrepaciente;
			}
					for(x = 0;x < 8;x++){
	    				for(y = 0 ;y < 6;y++){
			 				cout<<"| "<<Doctor[x][y]<<"      ";
						}
						cout<<endl;
					}
			break;
		}
		case 2:{
			cout<<"porfavor digite 1 si es regimen subsidiado o 2 si es regimen contributivo"<<endl;
			int p;
			cin>>p;
			int pago;
			pago=copago(p);
			cout<<"su copago es de    "<<pago<<endl;
			break;
		}
		case 3:{
				cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
				cout<<"++             DIAS CITA                  ++"<<endl;
				cout<<"++                                        ++"<<endl;
				cout<<"++     1. LUNES                           ++"<<endl;
				cout<<"++     2. MARTES                          ++"<<endl;
				cout<<"++     3. MIERCOLES                       ++"<<endl;
				cout<<"++     4. JUEVES                          ++"<<endl;
				cout<<"++     5. VIERNES                         ++"<<endl;
				cout<<"++     6. SABADO                          ++"<<endl;
				cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
				cout<<endl;
				cout<<endl;	
			cout<<"Por favor digite el numero correspondiente al dia de su cita:  ";
			int diascita;
			cin>>diascita;
            switch(diascita){
            	case 1:{
            		int aux,aux2;
            		aux=diascita-1;
            		for(x=0;x<6;x++){
            			cout<<Doctor[x][aux];
					}
					cout<<endl;
					for(x = 0;x < 8;x++){
	    				for(y = 0 ;y < 6;y++){
			 				cout<<"| "<<Doctor[x][y]<<"      ";
						}
						cout<<endl;
					}
					cout<<"Por favot digite la hora de su cita eliminar: ";
					cin>>aux2;
					Doctor[aux2][aux]=" ";
					cout<<"su cita fue eliminada con exito"<<endl;
					break;
				}
				case 2:{
					int aux,aux2;
            		aux=diascita-1;
            		for(x=0;x<6;x++){
            			cout<<Doctor[x][aux];
					}
					cout<<endl;
					for(x = 0;x < 8;x++){
	    				for(y = 0 ;y < 6;y++){
			 				cout<<"| "<<Doctor[x][y]<<"      ";
						}
						cout<<endl;
					}
					cout<<"Por favot digite la hora de su cita eliminar: ";
					cin>>aux2;
					Doctor[aux2][aux]=" ";
					cout<<"su cita fue eliminada con exito"<<endl;
					break;
				}
				case 3:{
					int aux,aux2;
            		aux=diascita-1;
            		for(x=0;x<6;x++){
            			cout<<Doctor[x][aux];
					}
					cout<<endl;
					for(x = 0;x < 8;x++){
	    				for(y = 0 ;y < 6;y++){
			 				cout<<"| "<<Doctor[x][y]<<"      ";
						}
						cout<<endl;
					}
					cout<<"Por favot digite la hora de su cita eliminar: ";
					cin>>aux2;
					Doctor[aux2][aux]=" ";
					cout<<"su cita fue eliminada con exito"<<endl;
					break;
				}
				case 4:{
					int aux,aux2;
            		aux=diascita-1;
            		for(x=0;x<6;x++){
            			cout<<Doctor[x][aux];
					}
					cout<<endl;
					for(x = 0;x < 8;x++){
	    				for(y = 0 ;y < 6;y++){
			 				cout<<"| "<<Doctor[x][y]<<"      ";
						}
						cout<<endl;
					}
					cout<<"Por favot digite la hora de su cita eliminar: ";
					cin>>aux2;
					Doctor[aux2][aux]=" ";
					cout<<"su cita fue eliminada con exito"<<endl;
					break;
				}
				case 5:{
						int aux,aux2;
            		aux=diascita-1;
            		for(x=0;x<6;x++){
            			cout<<Doctor[x][aux];
					}
					cout<<endl;
					for(x = 0;x < 8;x++){
	    				for(y = 0 ;y < 6;y++){
			 				cout<<"| "<<Doctor[x][y]<<"      ";
						}
						cout<<endl;
					}
					cout<<"Por favot digite la hora de su cita eliminar: ";
					cin>>aux2;
					Doctor[aux2][aux]=" ";
					cout<<"su cita fue eliminada con exito"<<endl;
					break;
				}
				case 6:{
						int aux,aux2;
            		aux=diascita-1;
            		for(x=0;x<6;x++){
            			cout<<Doctor[x][aux];
					}
					for(x = 0;x < 8;x++){
	    				for(y = 0 ;y < 6;y++){
			 				cout<<"| "<<Doctor[x][y]<<"      ";
						}
						cout<<endl;
					}
					cout<<"Por favot digite la hora de su cita eliminar: ";
					cin>>aux2;
					Doctor[aux2][aux]=" ";
					cout<<"su cita fue eliminada con exito"<<endl;
					break;
				}
			}   		
			break;
		}
	}
	cout<<"desea seguir haciendo proceso    precione 1 para si o 2 para no "<<endl;
	cin>>controladorsal;
	if(controladorsal==2){
		controlador=0;
	}
}
	}
	
int copago(int x){
	int esp;
	cin>>x;
	int valorcopago;
	switch(x){
		case 1:{
			cout<<"si su cita es  normal digite 1, si es de especialista digite 2"<<endl;
			cin>>esp;
			if(esp==1){
				valorcopago=1500;
			}
			if(esp==2){
				valorcopago=1500*2;
			}
			break;
		}
		case 2:{
			cout<<"si su cita es  normal digite 1, si es de especialista digite 2"<<endl;
			cin>>esp;
			int cantsal;
			if(esp==1){
				cout<<"cuantos salarios minimos gana al mes "<<endl;
				cin>>cantsal;
				if(cantsal<=2){
					valorcopago=3000;
				}
				if(cantsal>=3){
					valorcopago=3000*2;
				}
			}
			if(esp==2){
				cout<<"cuantos salarios minimos gana al mes "<<endl;
				cin>>cantsal;
				if(cantsal<=2){
					valorcopago=8000;
				}
				if(cantsal>=3){
					valorcopago=8000*2;
				}
			}
			cout<<"cuantos salarios minimos gana al mes "<<endl;
			
			break;
		}
	}
	return valorcopago;
}