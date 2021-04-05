//Ejemplo de matriz dinámica



/*

matriz: 

1 2 3
4 5 6
7 8 9

 punters de cada filas:
  
 1
 4
 7




*/
#include<iostream> 
#include<conio.h>
#include<stdlib.h>// comando new y delete
using namespace std;

void pedir();//prototipo
void imprimir(int **,int,int);//puntero matriz , filas , columnas

int **puntero_matriz;//señalamos hacia una matriz
int nfilas,ncol;// variables de numero de filas y columnas

int main(){
	
	pedir();
	imprimir(puntero_matriz,nfilas,ncol);
	
	//liberamos memoria que utilizamos
	
 for(int i=0;i<nfilas;i++){
	   	delete[] puntero_matriz[i];
	   }
	   
	   delete[] puntero_matriz;
	


  getch();
  return 0; 
  } 
   
   void pedir(){
   	
   	cout<<"digite el numero de filas: ";
   	cin>>nfilas;
   	cout<<"digite el numero de columnas: ";
   	cin>>ncol;
   	
   	//arreglos dinamicos - reservamos memoria
   	
   	//reserva memoria para la matriz
   	puntero_matriz = new int*[nfilas];//reserva()new memoria para cada fila
   	for(int i=0;i<nfilas;i++){
   		
   		puntero_matriz[i] = new int [ncol];// reservo memoria para las columnas
   		
   		
	   }
	   cout<<"\nDigite elementos de la matriz: \n";
	   for(int i=0;i<nfilas;i++){
	   	for (int j=0;j<ncol;j++){
	   		cout<<"digite un numero["<<i<<"]["<<j<<"]: ";
	   		cin>>*(*(puntero_matriz+i)+j);//alamcenar en una matriz dinamica
			   // igual que matriz[i][j]
	   		
	}
  }
}
   	
   void imprimir(int**puntero_matriz,int nfilas, int ncol ){
   	
   	cout<<"\n imprimiendo matriz: \n";
   	for(int i=0; i<nfilas;i++){
   		for(int j=0;j<ncol;j++){
   			cout<<*(*(puntero_matriz+i)+j)<<" ";
		   }
		   cout<<"\n";
	   }
   }	
   	
   	
   	
   	
