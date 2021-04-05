//busqueda secuencial 


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int a[]={3,4,1,2,5};
	int i, dato;
	char band = 'F';
	///////////////////////////////
	
		cout<<"cadena almacenada:  ";
	for(i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	///////////////////////////////
	dato=3;// valor a buscar
	i=0;
	while((band == 'F')&&(i<5)){
		if(a[i]==dato){
			
			band ='V';
		}		
		i++	;
	}
	
	
	if(band=='F'){
		
		cout<<"el numero "<<dato<<" no existe en el arreglo";
		
	}
	
	else if(band=='V'){
		
		cout<<"el numero "<<dato<<" esta en la posicion: "<<i<<endl;
		
	}
	
getch();
return 0;	
	
}
