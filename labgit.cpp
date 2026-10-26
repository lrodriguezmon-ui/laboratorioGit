#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main () {

ifstream TEXTO("input/TEXTO.txt");
ofstream TEXTOsalida("output/TEXTOsalida.txt");

if (TEXTO.is_open() && TEXTOsalida.is_open()){
	cout<<"Archivo abierto"<<endl;
	string linea;
	while (getline(TEXTO, linea)){
		TEXTOsalida<<linea;
	}
	cout<<"Archivo copiado"<<endl;		
	} 
}


