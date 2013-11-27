#include <iostream>
#include <cmath>
using namespace std;

int arr[100];
int aux[100];
long long intercambios=0;
void Une(int inicio, int mitad, int fin) {

	int i = inicio; int j = mitad+1; int k = 0;
	while ((i<=mitad) and (j<=fin)) {
		if (arr[i] <= arr[j]){
			aux[k] = arr[i];
			i++;
			intercambios +=j-(mitad+1);
		}else{
			aux[k] = arr[j];
			j++;
		}
		k++;
	}
	while (i<=mitad) {
		aux[k]=arr[i];
		i++;
		k++;
		intercambios +=j-(mitad+1);
	}
	while (j<=fin) {
		aux[k]=arr[j];
		j++;
		k++;
	}
	for (int h = inicio; h <= fin; h++) {
		arr[h]=aux[h-inicio];
		
	}
	
}
void mergeSort(int inicio, int fin){
	if (inicio < fin) {
		int mitad;
		mitad = floor((inicio+fin) /2);
		mergeSort(inicio, mitad);
		mergeSort(mitad+1, fin);
		Une(inicio, mitad, fin);
	}
}
int main(int argc, char *argv[]) {
	int n=1;
	while (n!=0) {
		cin >> n;
		intercambios = 0;
		if (n == 0)
			continue;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		mergeSort(0,n-1);
		cout <<intercambios<<endl;
		
	}
}