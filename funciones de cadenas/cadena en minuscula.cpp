/*convertir una cadena de caracteres a minusculas

funcion strlwr()*/

#include<iostream>
#include<stdlib.h>
#include<string.h>//funciones de cadenas

using namespace std;

int main (){
	
	char palabra[]="ABCDEF";
	char palabra2[30];
	

strcpy(palabra2,palabra);

strlwr(palabra2);

// sumamos(concatenamos) palabra tres y palabra 2 


cout<<"palabra en mayuscula: "<<palabra<<endl;

cout<<"palabra en minuscula: "<<palabra2<<endl;

	system("pause");
	return 0;
}
