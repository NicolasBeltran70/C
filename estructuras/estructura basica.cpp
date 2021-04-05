/*estructuras

conjunto de elementos de diferentes tipos


struct <nombredelaestructura>{

<tipo de dato> <nombredecampo>
<tipo de dato> <nombredecampo>
<tipo de dato> <nombredecampo>
<tipo de dato> <nombredecampo>

}<variable 1 de la estructura>,<variable 2 de la estructura>;


*/

#include<iostream>
#include<conio.h>

using namespace std;

struct persona{//estructura general de una persona
	char nombre[20];
	int edad;
}


persona1={"nicolas",20},//ingresa directamente los datos por persona
persona2={"xabier",22},
persona3;//persona 3 lo ingresa el usuario


int main(){
	
	
	cout<<"digite nombre de la persona 3: ";
	cin.getline(persona3.nombre,20,'\n');
	cout<<"digite edad de la persona 3: "; 
	cin>>persona3.edad;
	cout<<endl;
	
	

	cout<<"nombre1: "<<persona1.nombre<<endl;
	cout<<"edad1: "<<persona1.edad<<endl;
	
	cout<<"nombre2: "<<persona2.nombre<<endl;
	cout<<"edad2: "<<persona2.edad<<endl;
	
	cout<<"nombre3: "<<persona3.nombre<<endl;
	cout<<"edad3: "<<persona3.edad<<endl;
	

	
getch();
return 0;
	
}
