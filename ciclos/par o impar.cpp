/*dwternimar numero impar o par*/
#include<iostream>

using namespace std;

int main (){
	

 int num;
 
 
 cout<<"digite un numero entero: ";cin>>num;
 
 
 if (num==0)
{
 	
 cout<<"el numero es 0";
 
}
 
 else if(num%2==0)//nmod(2)
	{//divide el numero en dos y compara su residuo
 	
 	cout<<"el numero es par";
	}
	
 	else 
	 
	 {
	 	cout<<"el numero es impar";
	 }
 	
	 

 

	return 0;
}
