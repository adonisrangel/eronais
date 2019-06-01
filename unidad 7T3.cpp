#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <cstdlib>
using namespace std;
struct numeros{
	int n,g;
	char linea,t;
}numeros[10],*puntero=numeros;
int main(){
	char linea;
	int i=0,f=0,r,j=0;
	fstream archivo;
	int ero,donis=1,contador=0;
	printf("linea a leer:");
	
	archivo.open("T3U7.txt",ios::in);
		while (!archivo.eof()){
			linea=archivo.get();
			if(linea==','){
				ero=1;
				i++;
			}
			if (linea!=','){
				ero=0;
				j++;
				(puntero+i)->t=linea;
			}
			if(donis==ero){
				j=0;
				contador++;
			}
		}
		archivo.close();
			for (int c=0;c<contador;c++){
		printf("%d,",(puntero+c)->t);
	}
	system("pause>nul");
}
