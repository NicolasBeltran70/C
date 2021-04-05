/*calcula longitud de una cadena de caracteres 

funcion strlen()*/


#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra[]="hola que tal";
	int longitud =0;
	
	
	longitud = strlen(palabra);
	
	cout<<"el numero de caracteres de la cadena es: ";
	cout<<longitud<<endl;
	
	system("pause");
	return 0;
}
