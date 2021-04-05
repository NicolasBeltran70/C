/*cadena de caracteres*/
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main (){
	
	char palabra[]="nicolas";
	
	char palabra2[]={'n','i','c','o'};
	
	char nombre[10];
	
	cout<<"digite su nombre: ";
	/* cin>>nombre; no guarda despues de el espacio*/ 
	
	//gets(nombre);
	//toma mas espacios de los limitados
	//coge otro espacio de memoria que no le pertenece
	
	
	cin.getline(nombre,10,'\n');
	/*
	-variable
	-longitud
	-condicion final
	
	*/
	cout<<nombre<<endl;
	
	/*
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	*/

	system("pause");
	return 0;
}
