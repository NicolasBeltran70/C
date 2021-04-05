/*estructuras anidadas
 estrutura dentro de otra

n personas con n variables repetitivas

estructuras ---> personas
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct info_direccion{// declaras variables 
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};


struct empleado{
	char nombre[20];
	double salario;
	struct info_direccion info_diremp;//se llama por el segundo nombre
}empleados[2];//solo tendremos dos empleados



int main(){
	
	for(int i=0;i<2;i++){
	
	fflush(stdin);//vacia el buffer y permite digitar los valores
	cout<<"empleado "<<i+1<<endl;
	cout<<"digite su nombre: ";
	cin.getline(empleados[i].nombre,20,'\n');
	cout<<"digite su direccion: "; 
	cin.getline(empleados[i].info_diremp.direccion,30,'\n');
	cout<<"digite su ciudad: "; 
	cin.getline(empleados[i].info_diremp.ciudad,20,'\n');
	cout<<"digite su provincia: "; 
	cin.getline(empleados[i].info_diremp.provincia,20,'\n');
	cout<<"digite su salario: "; 
	cin>>empleados[i].salario;
	cout<<endl;
	
	}
	
	
	
	cout<<"datos almacenadosde los empleados: "<<endl<<endl;
	
	// imprimimos los datos
	for(int i=0;i<2;i++){
	
	cout<<"Nombre "<<i+1<<" : "<<empleados[i].nombre<<endl;
	cout<<"Direccion "<<i+1<<" : "<<empleados[i].info_diremp.direccion<<endl;
	cout<<"Ciudad "<<i+1<<" : "<<empleados[i].info_diremp.ciudad<<endl;
	cout<<"Provincia "<<i+1<<" : "<<empleados[i].info_diremp.provincia<<endl;
	cout<<"Salario "<<i+1<<" : "<<empleados[i].salario<<endl<<endl;
	
	}
	


	
getch();
return 0;
	
}
