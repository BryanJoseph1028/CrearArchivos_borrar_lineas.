#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
const char *nombre_archivo = "archivo.txt";
void abrir_archivo();
void ingresar_estudiante();
struct estudiante{
	int codigo;
	string nombre;
};
int main(){
	abrir_archivo();
	ingresar_estudiante();
}
void abrir_archivo(){
	ifstream archivo;
	string contenido;
	archivo.open(nombre_archivo,ios::in);
	if(archivo.fail()){
		cout<<"no se puede abrir el archivo";
		exit(1);
	}
	else{
		do{getline(archivo,contenido);
		cout<<contenido<<endl;
		}while(archivo.eof()==false);
	}
	archivo.close();
} 
void ingresar_estudiante(){
	ofstream archivo;
	char continuar;
	estudiante obj_estudiante;
	archivo.open(nombre_archivo,ios::app);
		if(archivo.fail()){
		cout<<"no se puede abrir el archivo";
		exit(1);
	}
	else{
		do{
			fflush(stdin);
			cout<<"ingrese el codigo";
			cin>>obj_estudiante.codigo;
			cin.ignore();
			cout<<"ingrese el nombre";
			getline(cin,obj_estudiante.nombre);
			archivo<<obj_estudiante.codigo<<endl;
			archivo<<obj_estudiante.nombre<<endl;
			cout<<"desea agrgat oto valot";
			cin>>continuar;
			
			
		}while((continuar=='s')||(continuar=='S'));
	}
	archivo.close();
	abrir_archivo;
}

