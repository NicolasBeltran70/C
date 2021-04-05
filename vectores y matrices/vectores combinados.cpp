/*agregar dos vectores en un solo vector
 sin sumarlos y en orden*/
 
 #include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	
char letras1[]={'a','b','c','d','e'};
char letras2[]={'f','g','h','i','j'};
char letras3[10];


// pasar vector 1 al vector 3	
	
for(int i=0;i<5;i++){

letras3[i]=letras1[i];

	
}

// pasar vector 2 al vector 3

for(int i=5;i<10;i++){

letras3[i]=letras2[i-5];//i=5 i-5=0 para que guarde desde 0 hasta 5

	
}


// mostrar todo el vector


for(int i=0;i<10;i++){

cout<<letras3[i]<<endl;

	
}



	system("pause");
	return 0;
}

