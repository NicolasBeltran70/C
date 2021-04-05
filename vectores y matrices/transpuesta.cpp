/*realizar la transpuesta de una matriz*/ 


//matrices
/*  

tipo nombre[nfilas][columnas]

de derecha a izquierda y de arriba hacia bajo

para llamar un dato en especifico tener en cuenta 
el 0 de fila y el cero de columna

int numero[2][3]={{1,2,3},{4,5,6}}


ojo : una matriz simetrica es si es 
cuadrada(filas=columnas)
igual a su transpuesta


*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	int numeros[100][100],filas,columnas,band=0;

	
	
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


// comprobacion de simetria
if(filas==columnas){	
	for(int i=0;i<filas;i++){// filas
		for(int j=0;j<columnas;j++){//columnas
	
		if(numeros[j][i]==numeros[i][j]){
		band++;
   }
  }
 }
}



if(band==filas*columnas)//suma cada valor igual
{
	cout<<"\nLa matriz es simetrica\n";	
}
else

{
cout<<"\nLa matriz no es simetrica\n" ;		
}


// muestra la matriz



cout<<"\nMatriz \n";

for(int i=0;i<filas;i++){// filas
	for(int j=0;j<columnas;j++){//columnas
	
	cout<<numeros[i][j]<<"  "; 
	
	}
	cout<<"\n";//espacio entre filas
		
}
cout<<endl;


cout<<"\nMatriz transpuesta\n";




for(int i=0;i<filas;i++){// filas
	for(int j=0;j<columnas;j++){//columnas
	
	cout<<numeros[j][i]<<"  "; 
	
	}
	cout<<"\n";//espacio entre filas
		
}

 

cout<<endl;

	system("pause");
	return 0;
}
