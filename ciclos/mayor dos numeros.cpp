/*condicionales de mayor a menor*/

#include<iostream>

using namespace std;

int main (){
	

 int n1,n2;
 
 
 cout<<"digite 2 numeros: ";// espacio entre si
 cin>>n1>>n2;
 
 if(n1==n2){
 	
 	cout<<"ambos numreros son iguales";
 }
 	else if(n1>n2){
 		
 		cout<<"el numero 1 es mayor al numero 2";
	 }
	 
	 else 
	 	cout<<"el numero 2 es mayor al numero 1";
 
 

	return 0;
}
