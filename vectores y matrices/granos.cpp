#include<iostream>
#include<conio.h>
using namespace std;

int main (){//declaracion de variables
		
 int costo[3],grano[3];//se declaran los dos arreglos/ vectores de tamaño 3 ya que solo hay 3 tipos de granos 
 int total=0;
 int opc=0;

 
 
 while (opc<=3){//ciclo while para que se repita el proceso varias veces hasta que aluien le de salir en el menu
 
 cout<<"\t\t Menu Principal "<<endl<<endl<<endl;
 cout<<"\t escriba una de las 4 opciones "<<endl<<endl;
 cout<<"opcion 1: Ingrese los granos "<<endl;
 cout<<"opcion 2: Calcular costo por tipo de grano "<<endl;
 cout<<"opcion 3: Calcular costo total "<<endl<<endl;
 cout<<"opcion 4: Terminar "<<endl<<endl;
 cout<<"opcion: ";cin>>opc;
 system("cls");


 	
 switch(opc)
 {
 case 1:
 	 
 	 // arreglo grano[] almacena la cantidad de cada tipo de grano 
		for(int i=0;i<3;i++){//se usa ciclo for para almacenar uno por uno la cantidad de grano
		
		cout<<"Digite cantidad de grano del silo # "<<i+1<<": ";
		cin>>grano[i];
		}
		
 	 getch(); 
 	 system("cls");
 	  
	  break;
	  
	  
 case 2: 
 // el arreglo costo[] almacena el valor por cada grano
 	cout<<"\t\t Digite el costo de cada grano:"<<endl<<endl;
 	cout<<"\n Digite el costo del garbanzo: ";cin>>costo[1];
 	cout<<"\n Digite el costo de la lenteja: ";cin>>costo[2];
 	cout<<"\n Digite el costo de la arveja: ";cin>>costo[3];
 
 	 getch(); 
 	 system("cls");
 
 break;
 
 case 3:
 	for(int i=0;i<3;i++){// se multiplican uno por uno cada valor y se almacenan en la varible total

total += (grano[i]*costo[i]);
	
}

cout<<"el total de costos es : "<<total<<endl;
getch(); 
system("cls");
 	
 break;
 
 case 4:
 break;
	
 } 
 
 
}
    cout<<"\n    Adios!!! \n\n";
    getch(); 
	return 0;

}
