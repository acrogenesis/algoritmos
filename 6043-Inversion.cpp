#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int c;
	int n;
	int compra;
	int vende;
	int mayor=-10000000;
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> n;
		int dias[n];
		int ganancias[n][n];
		mayor=-10000000;
		for (int j = 0; j < n; j++) {
			cin >> dias[j];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				ganancias[i][j]=dias[i]-dias[j];
				ganancias[i][j]<0 ? cout << ganancias[i][j] << " " : cout << " " << ganancias[i][j] << " ";
			}
			cout << endl;
		}
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (mayor < ganancias[i][j]) {
					mayor = ganancias[i][j];
					compra = j;
					vende = i;
				}
			}
		}
		cout << "Compra en " << compra+1 << ", vende en " << vende+1 <<endl;
	}
}