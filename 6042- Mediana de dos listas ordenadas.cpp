#include <iostream>
#include <iomanip>

using namespace std;
int mediana(int arr1[],int arr2[],int n){
	
}
int main(int argc, char *argv[]) {
	int casos;
	int n;
	double arr1[100];
	double arr2[100];
	double arreg[100];
	int x;
	int y;
	int count;
	double res;
	cin >>casos;
	for (int i = 0; i < casos; i++) {
		cin >> n;
		count = 0;
		x = 0;
		y = 0;
		for (int j = 0; j < n; j++) {
			cin >> arr1[j];
		}
		for (int j = 0; j < n; j++) {
			cin >> arr2[j];
		}
//empieza proceso
		
		cout << "Mediana caso " <<i+1<<": ";
		cout << fixed << setprecision(2) << mediana(arr1,arr2,n) << endl;
	}
	
}