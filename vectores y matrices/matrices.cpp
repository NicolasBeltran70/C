//matrices
/*  

tipo nombre[nfilas][columnas]

de derecha a izquierda y de arriba hacia bajo

para llamar un dato en especifico tener en cuenta 
el 0 de fila y el cero de columna

int numero[2][3]={{1,2,3},{4,5,6}}


*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	int numeros[100][100],filas,columnas;
	
	
cout<<"Digite el numero de filas: ";
cin>>filas;	
cout<<endl;

cout<<"Digite el numero de columnas: ";
cin>>columnas;	
cout<<endl;
	
	
	
for(int i=0;i<filas;i++){// filas
	for(int j=0;j<columnas;j++){//columnas
	
	cout<<"Digite el numero ["<<i<<"]["<<j<<"]: ";
	cin>>numeros[i][j];
	
}

}
cout<<endl;

// mostrando las matrices 

for(int i=0;i<filas;i++){// filas
	for(int j=0;j<columnas;j++){//columnas
	
	cout<<numeros[i][j]; 
	
	}
	cout<<"\n";//espacio entre filas
}
cout<<endl;

	system("pause");
	return 0;
}
