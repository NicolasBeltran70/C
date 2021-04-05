//factorial 

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	int numero , factorial =1;
	
		cout<<"digite un numero:";cin>>numero;

	
	for(int i=1;i<=numero;i++){//inicio; condicion;accion
		
		factorial*=i;
		
		
	}
	
	cout<<"el valor factorial es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}
