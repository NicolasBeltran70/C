/*concatenacion de cadenas 

funcion strcat()*/

#include<iostream>
#include<stdlib.h>
#include<string.h>//funciones de cadenas

using namespace std;

int main (){
	
	char palabra[]="esto es una cadena";
	char palabra2[]=" de ejemplo";
	char palabra3[30];
	
//primero copiamos palabra1 uno en palabra3

strcpy(palabra3,palabra);

// sumamos(concatenamos) palabra tres y palabra 2 

strcat(palabra3,palabra2);



cout<<"palabra 1: "<<palabra<<endl;
cout<<"palabra 2: "<<palabra2<<endl;
cout<<"la concatenacion es --> "<<palabra3<<endl;
	
	system("pause");
	return 0;
}
