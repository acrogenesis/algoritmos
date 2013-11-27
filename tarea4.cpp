#include <iostream>
#include <string>

using namespace std;

void cuatro_it(int arr[],int n){
	int contador=0;
	for (int i = 0; i < n; i++) {
		if (arr[i]%2 !=0) {
			contador += arr[i];
		}
	}
	cout << contador;
}
int cuatro_re(int arr[],int n,int contador){
	n--;
	if((arr[n] %2 !=0) && (n>=0)){
		contador += arr[n];
		return cuatro_re(arr,n,contador);
	}
	if(n==-1)
		cout << contador;
	else 
		return cuatro_re(arr,n,contador);
}
int main(int argc, char *argv[]) {
	int tam = 6;
	int arreglo[tam];
	arreglo[0]=5;	arreglo[1]=10;
	arreglo[2]=7;	arreglo[3]=8;
	arreglo[4]=1;	arreglo[5]=6;
	cuatro_it(arreglo,tam);
	cout << endl;
	cuatro_re(arreglo,tam,0);
}