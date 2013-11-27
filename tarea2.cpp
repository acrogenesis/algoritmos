#include <iostream>
#include <string>

using namespace std;
/*1. Escribe un algoritmo en C/C++,  de la función que recibe un arreglo de n elementos
enteros  e imprima los m elementos menores de el.*/
void uno(int n[],int h,int tam){
	for (int i = 0; i < tam; i++) {
		if(n[h]>n[i])
			cout << n[i] << " ";
	}
	cout << endl;
}
/*2. Escribe un algoritmo en C/C++,  de la función que recibe un arreglo de n elementos 
enteros e imprima el mayor y el menor elemento del arreglo.*/
void dos(int n[],int tam){
	int menor=n[0];
	int mayor=n[0];
	for (int i = 1; i < tam; i++) {
		if(menor > n[i])
			menor = n[i];
		if(mayor < n[i])
			mayor = n[i];
	}
	cout << "Menor: " << menor << " Mayor: " << mayor;
	cout << endl;
}

/*3. Escribe un algoritmos en C/C++, de la función que recibe un arreglo de n elementos e 
imprima todos los conjuntos de 3 elementos del arreglo.*/
void tres(int n[],int tam){
	for (int i=0; i < tam-2; i++) {
		for (int j=i+1; j < tam-1; j++) {
			for (int k=j+1; k < tam; k++) {
				cout << n[i] << n[j] << n[k] << " ";
			}
		}
	}
	cout << endl;
}
int main(int argc, char *argv[]) {
	int tam = 5;
	int h=3;
	int arreglo[tam];
	arreglo[0]=4;	arreglo[1]=8;
	arreglo[2]=1;	arreglo[3]=5;
	arreglo[4]=7;	//arreglo[5]=6;
	cout << "1) ";
	uno(arreglo,h,tam);
	cout << "2) ";
	dos(arreglo,tam);
	cout << "3) ";
	tres(arreglo,tam);
}