#include <iostream>
#include <iomanip>

using namespace std;
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
		for (count =0; count <= n;) {
			if (x == n-1) {
				arreg[count]=arr2[y];
				count++;
				y++;
			}
			if (arr1[x] < arr2[y]) {
				arreg[count]=arr1[x];
				count++;
				x++;
				
			}else {
				arreg[count]=arr2[y];
				y++;
				count++;
			}
		}
		res = (arreg[n-1]+arreg[n])/2;
		
		cout << "Mediana caso " <<i+1<<": ";
		cout << fixed << setprecision(2) << res << endl;
	}
	
}