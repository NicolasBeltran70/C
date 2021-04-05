// como almacenar una pila

#include<iostream>
#include<conio.h>	
#include<stdlib.h>
using namespace std;

struct nodo{// estructura necesaria para usar y crear nodos
	int dato;//dato del nodo
	nodo * siguiente;// puntero siguiente del nodo
};

void agregarpila(nodo *&,int); // prototipo
void sacarpila(nodo*&, int &);


int main(){
	
nodo *pila = NULL;// creamos puntero pila la cual se rellenara con siguiente 
int dato;

cout<<"digite un numero: ";
cin>>dato;

agregarpila(pila,dato);

cout<<"digite otro numero: ";
cin>>dato;


agregarpila(pila,dato);

cout<<"digite el ultimo dato numero: ";
cin>>dato;


agregarpila(pila,dato);

cout<<"\nsacando los elementos de la pila: ";

while(pila != NULL){//mientras no sea el final de la pila
	
sacarpila(pila,dato);
if (pila != NULL){//mientras hay datos en la pila muestre los datos
	cout<<dato<<" , ";
}
else{
	cout<<dato<<".";// cuando sea el ultimo dato agregue un punto final 
}

}
	
	getch();
	return 0;
}

void agregarpila(nodo *&pila, int n){// puntero de referencia ya que varia mucho
	
	nodo *nuevo_nodo = new nodo();// reserva memoria para un nodo
	nuevo_nodo->dato=n;// igualar el dato del usuario y ponerlo en el nodo
	nuevo_nodo->siguiente = pila;// poner el puntero e igualarlo a pila
	pila = nuevo_nodo;
	
	cout<< "\nelemento "<<n<<" agregado a pila correctamente"<<endl<<endl;
}

void sacarpila(nodo *&pila,int &n){
	
	nodo *aux = pila;//creamos un nodo auxiliar y lo igualamos a pila
	n = aux->dato ;// igualamos aux segun el nodo
	pila = aux->siguiente;//pila señala al nodo siguiente
	delete aux;// borramos auxiliar
	
	
	
}
