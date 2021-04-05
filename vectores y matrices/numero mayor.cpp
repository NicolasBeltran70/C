#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	
	int numeros[100],n,mayor=0;
	
cout<<"Digite el numero de elementos del arreglo: ";
cin>>n;	
cout<<endl;
	
for(int i=0;i<n;i++){
	
	
cout<<"Digite el numero "<<i+1<<" : ";
cin>>numeros[i];


if(numeros[i]>mayor){
	
	mayor=numeros[i];
	
	}

	
}


cout<<endl;
cout<<"el mayor elemento es: "<<mayor<<endl;
cout<<endl;


	system("pause");
	return 0;
}
