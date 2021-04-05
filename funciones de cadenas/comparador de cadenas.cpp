/*coparacion de cadenas

fncion strcmp()*/

#include<iostream>
#include<stdlib.h>
#include<string.h>//funciones de cadenas

using namespace std;

int main (){
	
	char palabra[20];
	char palabra2[20];
	int lon1=0,lon2=0;
	
	//mayusculas y nminusculas son diferentes en c++ 

cout<<"ingrese la palabra 1: ";
cin.getline(palabra,20,'\n');
cout<<endl;

cout<<"ingrese la palabra 2: ";
cin.getline(palabra2,20,'\n');
cout<<endl;

	
	lon1=strlen(palabra);
	lon2=strlen(palabra2);
	
	
	
	if(strcmp(palabra,palabra2)==0){
		//si son iguales el valor es 0
		//si son diferentes el valor es 1
		
		cout<<"amabas palabras son iguales";
		cout<<endl;
		
		
	}
	else 
	{
		
		cout<<"las palabras son diferentes";
		cout<<endl;
		cout<<endl;
	}
		//comparacion de longitudes
		
		
		
		
		if(lon1>lon2){
			cout<<"la palabra 1 es mas larga que la palabra 2";
			cout<<endl;
			cout<<"longitud palabra 1: "<<lon1<<endl;
			cout<<"longitud palabra 2: "<<lon2<<endl;
			
			
			cout<<endl;
		}
		
		else if(lon1<lon2){
			cout<<"la palabra 2 es mas larga que la palabra 1";
			cout<<endl;
			cout<<"longitud palabra 2: "<<lon2<<endl;
			cout<<"longitud palabra 1: "<<lon1<<endl;
			
		}
		
			else if(lon1==lon2){
				
			cout<<"ambas palabra tienen la misma longitud";
			cout<<endl;
			
			}
	 
		
	
	
	
	
	system("pause");
	return 0;
}
