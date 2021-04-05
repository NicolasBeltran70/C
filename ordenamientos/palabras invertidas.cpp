#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>


using namespace std;

void invertidor (char cadena[], int tamano)
{
    char invertido[tamano];

    for (int x=0, y=tamano-1; x<tamano; x++, y--)
    {
        invertido[x]=cadena[y];
    }
    invertido[tamano] = '\0';
    cout<<"entrada: "<<cadena<<endl;
    cout<<endl<<"salida: "<<invertido<<endl<<endl;

}

int main ()
{

    char opcion;
    string palabra;
    int longitud, longitud2;
    int n=0;

    while (n!=5)
    {
    n++;
        system ("cls");
       
        cout<<"> Ingrese la palabra #"<<n<<": ";
        cin>>palabra;

        char cadena[palabra.size()+1];
        strcpy(cadena, palabra.c_str());// copia el valor del arreglo "cadena" en "palabra"

        longitud=strlen(cadena);// mide la longitud de la cadena

        invertidor (cadena,longitud);// funcion invertido
    getch();
	

    }

    return 0;
}
