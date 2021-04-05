/*invertir una cadena de caracteres

funcion strrev()*/

#include<iostream>
#include<stdlib.h>
#include<string.h>//funciones de cadenas

using namespace std;

int main (){
	
	char palabra[]="abcdef";
	char palabra2[30];
	

strcpy(palabra2,palabra);

strrev(palabra2);

// sumamos(concatenamos) palabra tres y palabra 2 


cout<<"palabra original: "<<palabra<<endl;

cout<<"palabra invertida: "<<palabra2<<endl;

	system("pause");
	return 0;
}
