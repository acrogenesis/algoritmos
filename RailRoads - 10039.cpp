// Adrian Rangel 1190871
// Felix Olazaran 1191059
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int cA; //cant de vagones en tren 1
	int cB; //cant de vagones en tren 2
	int cS; //cant de vagones en tren 3
	int trenA[1000]; //tren 1
	int trenB[1000]; //tren 2
	int trenS[2000]; //tren completo
	bool M[1000][1000]; //matriz
	int j;
	cin >> cA >> cB; //leer num vagones
	cS = cA+cB;
	while (cA and cB) {
		for (int i = 0; i < cA; i++) {
			cin >> trenA[i]; //leer vagones A
		}
		for (int i = 0; i < cB; i++) {
			cin >> trenB[i]; //leer vagones B
		}
		for (int i = 0; i < cS; i++) {
			cin >> trenS[i]; //leer vagones trenS
		}
//		termina lectura empieza proceso
		
		M[0][0]=true; //primero en T
		for (int l = 0; l <= 3; l++) {
			for (int w = 0; w <= 3; w++) {
				cout << M[l][w]<< " ";
			}
			cout << endl;
		}
		cout << endl;
		//el resto
		j=0;
		for (int h = 1; h <= cS; h++) {
			for (int i=0; i <=h; i++) {
				j=h-i;
				if( (j<=cA) and (i<=cB) ){
					if (i>0 and j>0) {
						M[i][j]=(
							(
								(M[i-1][j]) and (trenB[i-1]==trenS[h-1])) or ((M[i][j-1]) and (trenA[j-1]==trenS[h-1])
							)
						);
					}else if(i==0){
						M[i][j]=((M[i][j-1]) and (trenA[j-1]==trenS[h-1]));
					}
					else if(j==0){
						M[i][j]=((M[i-1][j]) and (trenB[i-1]==trenS[h-1]));
					}
				}
				cout << "j= " << j <<" h= "<< h << " i= " << i<<endl;
				for (int l = 0; l <= 3; l++) {
					for (int w = 0; w <= 3; w++) {
						cout << M[l][w]<< " ";
					}
					cout << endl;
				}
				cout << endl;
			}
		}
		for (int l = 0; l <= 3; l++) {
			for (int w = 0; w <= 3; w++) {
				cout << M[l][w]<< " ";
			}
			cout << endl;
		}
		cout << endl;
//		termina proceso empieza cout
		if (M[cB][cA]) {
			cout << "possible" << endl;
		} else {
			cout << "not possible" << endl;
		}
		cin >> cA >> cB; //leer num vagones
		cS = cA+cB;
	}
	return 0;
}