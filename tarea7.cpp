#include <iostream>
#include <string>

using namespace std;

bool ordenado(int a[],int n){
	bool check=true;
	for (int i = 0; i < n; i++) {
		if(a[i]>a[i+1]){
			check=false;
			break;
		}
		cout << "hola";
	}
	return check;
}

void burbuja (int a[], int n){ 
	int aux;
	if(!ordenado(a,n)){
		for (int i = 0; i < n; i++){
			for (int j = 0; j < i; j++){
				if (a[i] < a[j]){
					aux = a[i];
					a[i] = a[j];
					a[j]= aux;
				}
			}
			if (ordenado(a,n)) {
				break;
			}
		}		
	}
}
int elMenor(int a[],int n){
	int menor;
	if (n==0) {
		return a[n];
	}
	menor = elMenor(a,n-1);
	if (a[n]>menor) {
		return menor;
	}else return a[n];
}
int busquedaEficiente(a[][5],int n, int x){
	int j=0;
	for (int i = 0; i < n; i++) {
		if (a[i][j]==x) {
			return a[i][j];
		}else {
			
		}
	}
}

int main() {
	int arr[5];
	arr[0]=8;
	arr[1]=9;
	arr[2]=6;
	arr[3]=1;
	arr[4]=5;
	int arr2[5];
	arr2[0]=1;
	arr2[1]=2;
	arr2[2]=3;
	arr2[3]=4;
	arr2[4]=5;
	int
	
	//cout << elMenor(arr,5)<<endl;
	//burbuja(arr,5);
}