/*estructuras de las funciones 



directivas de preprocesador

1) prototipos de funcion-> decimos que la funcion existe

int main(){

3) conjunto de instrucciones;
4) return valor


}

2) definiciones de funcion


*/


// funcion para encontrar el numero mayor
#include<iostream>
#include<conio.h>

using namespace std;

// prototipo de la funcion

int encontrarmax(int x , int y);

int main(){
	int n1 , n2;
	int mayor;
	cout<<"digite 2 numeros: ";
	cin>>n1>>n2;
	
mayor = encontrarmax(n1,n2);//ponemos las variables en el orden de la funcion
	
	cout<< "el mayor de los numeros es: "<<mayor<<endl;
	
	
	
getch();
return 0;
	
}

int encontrarmax(int x , int y){//definimos la funcion
	
	int nunmax;
	
	
	if(x>y){
		nunmax =x;
	}
	else{
		nunmax =y;
	}
	
	
	return nunmax;
	
	
}
