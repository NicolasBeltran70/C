//plantillas de funciones

// sacar el valor absoluto de un numero

//no se sabe si es int,float , double , void

//tipo de funcion general

#include<iostream>
#include<conio.h>

using namespace std;

// prototipo de la funcion

template<class TIPOD>// creacion de la plantilla

void mostrarabs(TIPOD numero);

int main(){
	int num1=-4;
	float num2= -56.67;
	double num3 =-123.5678;
	
	
	mostrarabs(num1);
	mostrarabs(num2);
	mostrarabs(num3);
	
	
getch();
return 0;
	
}

template<class TIPOD>

void mostrarabs(TIPOD numero){
	
	if (numero<0){
		numero = numero *-1;
	}
	
	cout<<"el valor absoluto del numero es: "<<numero<<endl;
	
	
}








