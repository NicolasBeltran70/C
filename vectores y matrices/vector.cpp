//vector
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	
	int numeros[]={1,2,3,4,5};
	int suma = 0;
	
	
for(int i=0;i<5;i++){// inician siempre desde cero

suma += numeros[i];
	
}


cout<<"la suma de los elementos es: "<<suma<<endl;

	system("pause");
	return 0;
}
