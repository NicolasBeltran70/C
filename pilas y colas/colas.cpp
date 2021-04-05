//colas 
#include<iostream>
#include<conio.h>	
#include<stdlib.h>
using namespace std;

struct nodo{// estructura necesaria para usar y crear nodos
	int dato;//dato del nodo
	nodo * siguiente;// puntero siguiente del nodo
};

//prototipo

void insertarcola(nodo *&,nodo *&,int);
bool cola_vacia(nodo *);
void suprimircola(nodo *&,nodo*& ,int&);

int main(){
	
	nodo *frente = NULL;
	nodo *fin = NULL;
	int dato;
	
	cout<<"digite numero 1: ";
    cin>>dato;
    insertarcola(frente,fin,dato);
    
    cout<<"\n digite numero 2: ";
    cin>>dato;
    insertarcola(frente,fin,dato);
    
    cout<<"\n digite numero 3: ";
    cin>>dato;
    insertarcola(frente,fin,dato);
    
    cout<<"\neliminando los nodos de la cola: ";
    while(frente != NULL){
    	suprimircola(frente,fin,dato);
    	if(frente != NULL){// si hay datos
    		cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";// este es el ultimo dato 
		}
	}
	
	getch();
	return 0;
}

// funcion par incertar elementos

void insertarcola(nodo *&frente,nodo *&fin,int n){
	
	nodo *nuevo_nodo= new nodo(); // creamos el nuevo nodo
	
	nuevo_nodo->dato = n;  //asignarle al nuevo nodo el dato de la cola 
	nuevo_nodo->siguiente = NULL; // siguiente apunta a NULL
	
	if(cola_vacia(frente)){
	// si la cola esta vacia el frente y el fin se le asigna nuevo nodo
	
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente= nuevo_nodo;// se le asigna como nuevo nodo
	}
	
	fin = nuevo_nodo;
	
	cout<<"elemento "<<n<<" insertado correctamente";
}

//funcion para determinar si la cola esta vacia

bool cola_vacia(nodo *frente){
	return (frente==NULL)? true : false;
	
	/*
	if (frente == NULL){// verifica si el frente esta en null
		return true;
	}
	else {
		return false;
	}
	*/
}
//funcion de eliminar cola
void suprimircola(nodo *&frente, nodo *&fin ,int &n){
	n= frente->dato;//vamos a eliminar el dato del frente
	nodo *aux =frente;//igualamos frente con un puntero
	
	//eliminar la colas
	if (frente ==fin ){// en caso de que solo halla un nodo
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente -> siguiente;
	}
	
	delete aux;
	
}
