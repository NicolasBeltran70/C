/*ordenamiento por seleccion*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros []={5,3,4,1,2};
	int i,j,min,aux;
	
	
//algoritmo por seleccion

	for (i=0; i<5;i++){
	
		min = i;
		for(j=i+1;j<5;j++){
			if(numeros[j]<numeros[min]){
				min =j;
				
			}
			
		}
		aux = numeros[i];
		numeros[i]=numeros[min];
		numeros[min]= aux;
	}
	
	
	
	cout<<"orden de los numeros ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\norden de los numeros descendiente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	
	getch();
	return 0;
}
