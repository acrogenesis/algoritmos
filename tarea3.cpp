#include <iostream>
#include <string>

using namespace std;
void tres(int arr[],int tam){
	int be[tam][tam];
	/*
	mi solucion
	for (int i = 0; i < tam; i++) {
		be[i][i]=arr[i];
		be[0][i]=arr[i]+be[0][i-1];
		be[i][0]=be[0][i];
	}
	for (int i = 1; i < tam; i++) {
		for (int j = i+1; j < tam; j++) {
			be[i][j]=be[i-1][j]-arr[i-1];
			be[j][iX]=be[i-1][j]-arr[i-1];
		}
	}*/
	//solucion maestro
	for (int i = 0; i < tam; i++) {
		be[i][i]=arr[i];
		for (int j = i+1; j < tam; j++) {
			be[j][i]=be[i][j]=be[i][j-1]+arr[j];
		}
	}
	
	// checar biarreglo
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < tam; j++) {
			if (be[i][j]>=10) {
				cout << be[i][j] << "  ";
			} else {
				cout << " " << be[i][j] << "  ";
			}
			
		}
		cout << endl;
	}
}
int main(int argc, char *argv[]) {
	/*Desarrolla un algoritmo que dado un arrelo A que contiene  n distintos enteros positivos, generé un 
	arreglo de dos dimensiones B, en donde en la posición B[i][j]  = B[j][i] =  A[i]+A[i+1]+…+A[j-1]+A[j]. Se 
	calificará eficiencia.*/
	int tam = 5;
	int arreglo[tam];
	arreglo[0]=5;	arreglo[1]=10;
	arreglo[2]=7;	arreglo[3]=8;
	arreglo[4]=1;	//arreglo[5]=6;
	
	tres(arreglo,tam);
	
	
}