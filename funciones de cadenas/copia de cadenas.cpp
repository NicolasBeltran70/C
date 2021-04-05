/*copia el contenido de una cadea a otra 

funcion strcpy()*/


#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra[]="hola que tal";
	char palabra2[20];
	
	strcpy(palabra2,palabra);
	//cadena vacia , cadena a copiar
	
	cout<<palabra2<<endl;
	
	system("pause");
	return 0;
}
