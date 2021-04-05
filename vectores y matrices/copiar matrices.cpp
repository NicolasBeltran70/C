/*copiar una matriz de una a otroa*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
	
	
int num1[2][2]= {{1,2},{3,4}};
int num2[2][2];



// copiar la matriz		
	
for(int i=0;i<2;i++){
	
	for(int j=0;j<2;j++){

		num2[i][j]=num1[i][j];

	}

}
// mostrar la matriz


for(int i=0;i<2;i++){
	
	for(int j=0;j<2;j++){

		cout<<num2[i][j];

	}
cout<<"\n";
}


	system("pause");
	return 0;
}

