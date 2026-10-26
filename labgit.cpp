#inlcude <iostream>
#inlcude <fstream>
#include <sstream>
using namespace std;

int main {

ifstream TEXTO("input/archivoEntrada.txt");


if (TEXTO.is_open()){
	cout<<"Archivo abierto"<<endl;
	string linea;
	while (getline(TEXTO, linea)){
		
	} 
}

}
