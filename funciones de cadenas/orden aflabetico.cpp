/*coparacion de cadenas

fncion strcmp()*/

#include<iostream>
#include<stdlib.h>
#include<string.h>//funciones de cadenas

using namespace std;

int main (){
	
	char palabra[20];
	char palabra2[20];
	
	
	//mayusculas y nminusculas son diferentes en c++ 

cout<<"ingrese la palabra 1: ";
cin.getline(palabra,20,'\n');
cout<<endl;

cout<<"ingrese la palabra 2: ";
cin.getline(palabra2,20,'\n');
cout<<endl;

	
	
	if(strcmp(palabra,palabra2)==0){
		//si son iguales el valor es 0
		//si son diferentes el valor es 1
		
		cout<<"amabas palabras son iguales";
		cout<<endl;
			
	}
	
	// cada caracter tiene un numero A=0 B=1 ... Z=21
	//de aqui parte la idea de mayor a menor
		else if(strcmp(palabra,palabra2)<0){
				
			//si <0 la primera palabra es mayor alfabeticamente
			//si >0 la segunda palabra es mayor alfabeticamente
			
			cout<<"la palabra 1 es primero que la palabra 2";
			cout<<endl;
			
			}
				else if (strcmp(palabra,palabra2)>0){
			
				cout<<"la palabra 2 es primero que la palabra 1";
				cout<<endl;
				}
				
					else{
					cout<<"error en el sistema";
					cout<<endl;
					} 

	
	system("pause");
	return 0;
}
