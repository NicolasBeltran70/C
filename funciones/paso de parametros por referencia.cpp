/*pasos por referencia */
#include<iostream>
#include<conio.h>

using namespace std;

// prototipo de la funcion



void valnuevo(int&,int&);//almacena direcciones de memoria

int main(){
	int num1,num2;
	
	cout<<"digite 2 numeros: ";
	cin>>num1>>num2;
	
	valnuevo(num1 , num2);
	
	cout<<"el nuevo valor del primer numeros es: "<<num1<<endl;
	cout<<"el nuevo valor del segundo numeros es: "<<num2<<endl;
	
	

	
getch();
return 0;
	
}

void valnuevo(int& xnum ,int& ynum){
	
	cout<<"el valor del primer numeros es: "<<xnum<<endl;
	cout<<"el valor del segundo numeros es: "<<ynum<<endl;
	
	xnum= 89;//sobre escribe los valores enteros segun el main
	ynum= 98;
	
}
	
	

