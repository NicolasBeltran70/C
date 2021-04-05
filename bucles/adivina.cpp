// numero aleatorio

#include<iostream>
#include<stdlib.h>//aleatorio
#include<time.h>//aleatorio

using namespace std;

int main (){
	int numero,dato,cont=0;
	
	srand(time(NULL));//agrega numero aleatorio
	dato = 1+ rand()%(100);
	
	do{
		
		cout<<"\nDigite un numero: ";cin>>numero;
		
		
		if(numero>dato){
			
		cout<<"\nDigite un numero menor: \n";
		}
		else if (numero<dato){
			cout<<"\nDigite un numero mayor: \n";
			
			
		}
		cont++;
		
	}while(numero != dato);
	
	cout<<"\nAdivino el numero \n";
	cout<<"numero de intentos: "<<cont<<endl;
	
	system("pause");
	return 0;
}
