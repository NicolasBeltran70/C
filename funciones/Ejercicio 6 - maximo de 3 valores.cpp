/*Ejercicio 6: Escriba una plantilla de funci�n llamada maximo() que devuelva el valor 
m�ximo de tres argumentos que se transmitan a la funci�n cuando sea llamada.
Suponga que los tres argumentos ser�n del mismo tipo de datos.*/

#include<iostream>
#include<conio.h>
using namespace std;

template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3);//VALOR VARIABLE

int main(){
	char dato1='e',dato2='f',dato3='a';
	
	cout<<"El maximo valor es: "<<maximo(dato1,dato2,dato3);
	
	getch();
	return 0;
}

template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3){
	TIPOD max;//se declara un maximo de la funcion tiepo variable
	
	if((dato1 > dato2) && (dato1 > dato3)){
		max = dato1;
	}
	else{
		 if((dato2>dato1) && (dato2>dato3)){
			max = dato2;
		}
		else{
			max = dato3;
		}
	}
	return max;
}
