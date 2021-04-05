/*

arreglos dinamicos

new: reserva el numero de bytes para la declaracion 
delee: libera un bloque de bytes reservado con anterioridad

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>//funciona new y delete
using namespace std;

void pedir();//prototipo
void imprimir();

int numcalif,*calif;

int main(){
	
	pedir();
	
	imprimir();
	
	
	delete[] calif;// liberando el espacio utilizados anterior mete
	
	

	
	
	getchar();
	
	return 0;
	
}

void pedir(){
	
	cout<<"digite el numero de calificaciones: ";
	cin>>numcalif;
	
	calif = new int[numcalif];//creo el arreglo
	
	for(int i=0; i<numcalif;i++){
		cout<<"ingrese una nota: ";
		cin>>calif[i];
	}
	
}

void imprimir(){
	
	cout<<"\nel vector de enlaces por nodos es: ";
	for (int i=0;i<nnodos;i++){
		cout<<vertical[i]<<endl;
	}
	
}
