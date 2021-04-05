/*pedir vector con sus indices*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	
int numeros[100],n;
	
cout<<"Digite el numero de elementos del arreglo: ";
cin>>n;	
cout<<endl;

	
	
for(int i=0;i<n;i++){// inician siempre desde cero

cout<<"Digite el numero "<<i+1<<" : ";
cin>>numeros[i];//pidiendo cada numero del usuario
	
}

cout<<"\nlos numeros ingresados fueron:"<<endl<<endl;


for(int i=0;i<n;i++){// inician siempre desde cero

cout<<i+1<<" --> "<<numeros[i]<<endl;

	
}

cout<<"\nlos numeros ingresados en forma inversa fueron:"<<endl<<endl;


for(int s=n;s>0;s--){
	
cout<<s<<" --> "<<numeros[s-1]<<endl;	
	
}




cout<<endl;

	system("pause");
	return 0;
}
