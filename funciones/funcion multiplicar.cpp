/*escriba una funcion que acepte dos numeros , los multiplique
 y muetre los resultados*/
 
#include<iostream>
#include<conio.h>

using namespace std;

// prototipo de la funcion

// el tipo void es la funcion que MUESTRA

// si la funcion solo se quiere MOSTRAR SIN RETORNAR se usa void


void pedirdatos();//no retorna
void multiplicar(float x , float y);

float num1,num2;//variables globales

int main(){
	
	pedirdatos();
	multiplicar(num1,num2);
	
getch();
return 0;
	
}

void pedirdatos()//no retorna
{
cout<<"digite 2 numeros: ";
cin>>num1>>num2;
cout<<endl;

}

void multiplicar(float x , float y){
	float multi = x*y;
	
	cout<<"la multiplicacion es: "<<multi<<endl;
	
	
	
}
