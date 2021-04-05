/*SIMULACION DE UN CAJERO AUTOMATICO*/
#include<iostream>

using namespace std;

int main (){
	

 int saldo_ini=1000,opc;
 float extra,retiro,saldo_fin=0;
 
 
 cout<<"\t\t Bienvenido a su cajero Virtual "<<endl<<endl<<endl;
 cout<<"\t escriba una de las 3 opciones "<<endl<<endl;
 cout<<"opcion 1: ingresar dinero a la cuenta "<<endl;
 cout<<"opcion 2: retirarr dinero de la cuenta "<<endl;
 cout<<"opcion 3: salir "<<endl<<endl;
 cout<<"opcion: ";cin>>opc;
 //ejemplo n1=2152
 
 switch(opc)
 {//de 100 a 900
 case 1:
 	 cout<<"Digite la cantidad a ingresar: ";cin>>extra;
	  saldo_fin=saldo_ini+extra;
	  cout<<"saldo actual es de: "<<saldo_fin;
	  break;
	  
	  
 case 2: 
 	cout<<"Digite la cantidad a retirar: ";cin>>retiro;
 	
 	if(retiro>saldo_ini){
 		
 		cout<<"no tiene suficiente dinero para retirar";
	 }
	 else{
	 saldo_fin=saldo_ini-retiro;
	  cout<<"saldo actual es de: "<<saldo_fin;	
	 	
	 }
 
 break;
 
 case 3:break;
 	
 	
 } 


	return 0;
}
