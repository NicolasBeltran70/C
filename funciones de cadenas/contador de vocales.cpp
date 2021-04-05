/*conteo de vocales de una cadena*/

#include<iostream>
#include<stdlib.h>
#include<string.h>//funciones de cadenas

using namespace std;

int main (){
	
	char palabra[60];
	int A=0,E=0,I=0;
	int O=0,U=0;
	int total=0;
	
cout<<"digite una frase: ";
cin.getline(palabra,60,'\n');


strlwr(palabra);//convierte la frase en minuscula por si tiene mayuscula

for(int j=0;j<30;j++){
	
	switch(palabra[j]){// lee cada posicion de la cadena
		
		case 'a':A++;break;
		case 'e':E++;break;
		case 'i':I++;break;
		case 'o':O++;break;
		case 'u':U++;break;
		
		
	}
	
}


total=A+E+I+O+U;

cout<<"\nel numero de vocales 'a' en la frase son: "<<A;
cout<<"\nel numero de vocales 'e' en la frase son: "<<E;
cout<<"\nel numero de vocales 'i' en la frase son: "<<I;
cout<<"\nel numero de vocales 'o' en la frase son: "<<O;
cout<<"\nel numero de vocales 'u' en la frase son: "<<U;
cout<<endl;
cout<<"\nel numero total de vocales en la frase son: "<<total;
cout<<endl;
cout<<endl;


	system("pause");
	return 0;
}
