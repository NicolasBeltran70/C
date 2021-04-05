//busqueda binaria de un arreglo

//el arreglo tiene que estar en orden SI o SI de forma ascendente
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numeros[]={1,2,3,4,5};
	int inf,sup,mitad,dato,i;
	char band = 'F';
	///////////////////////////////
	
	i=0;
	cout<<"cadena almacenada:  ";
	for(i=0;i<5;i++){
	cout<<numeros[i]<<" ";
	}
	cout<<endl;
	
	
	///////////////////////////////
	
	
	dato=4;// valor a buscar
	inf=0;
	sup =5;// numero de datos
	
	
	
	while(inf <= sup){
		mitad =(inf+sup)/2;
		
		if(numeros[mitad]==dato){
			
			band = 'V';
			break;
		}	
	
	
	if(numeros[mitad]>dato){
		
		sup=mitad;
		mitad=(inf+sup)/2;
		
	}
	
	if(numeros[mitad]<dato){
		
		inf = mitad;
		mitad = (inf+sup)/2;
			
	}
}
	
	if(band=='F'){
		
		cout<<"el numero "<<dato<<" no existe en el arreglo";
		
	}
	
	else if(band=='V'){
		
		cout<<"el numero "<<dato<<" esta en la posicion: "<<mitad+1<<endl;
		
	}
	
getch();
return 0;
	
}
