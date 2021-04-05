#include<iostream>
#include<conio.h>

using namespace std;

// prototipo de la funcion



void calcular(int,int,int&,int&);
//los primeros dos enteros no se cambian , los dos sigueintes se sobre escriben

int main(){
	int num1,num2,suma=0,producto=0;
	
	cout<<"digite 2 numeros: ";
	cin>>num1>>num2;
	
	calcular(num1 ,num2,suma,producto);
	
	cout<<"el nuevo valor de la suma es: "<<suma<<endl;
	cout<<"el nuevo valor del producto es: "<<producto<<endl;
	
	

	
getch();
return 0;
	
}

void calcular(int num1 ,int num2 , int& suma , int& producto ){
	
	suma = num1+num2;//sobre escribe suma de 0 a su valor
	producto = num1*num2;
}
	
	

