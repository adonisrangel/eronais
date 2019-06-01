#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <cstdlib>
using namespace std;
struct numeros{
	int n,g;
}numeros[10],*puntero=numeros;
int main(){
	char linea;
	int i=0,f=0;
	fstream archivo;
	int ero,donis=1,contador=0;
	printf("linea a leer:");
	
	archivo.open("T1U7.txt",ios::in);
		while (!archivo.eof()){
			linea=archivo.get();
			if(linea==','){
				ero=1;
			}
			if (linea!=','){
				ero=0;
				(puntero+i)->n=linea;
				i++;
			}
			if(donis==ero){
				(puntero+i-2)->n=((puntero+i-2)->n)*10;
				(puntero+f)->g=(puntero+i-2)->n+(puntero+i-1)->n;
				f++;
				contador++;
				i++;
			}
		}
		archivo.close();
			for (int c=0;c<contador;c++){
		printf("%f,",(puntero+c)->g);
	}
	system("pause>nul");
}
