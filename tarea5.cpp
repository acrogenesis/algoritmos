#include <iostream>
#include <string>

using namespace std;
int mat[8][8];
int cuantos(int ri, int rf, int ci, int cf){
	cout << ri <<" "<< rf <<" "<< ci <<" "<< cf <<endl;
	if (ri==rf && ci==cf) {
		return(mat[ri][ci]>100?1:0);
	}else {
		int rm = ((ri+rf)/2);
		int cm = ((ci+cf)/2);
		return  cuantos (ri,rm,ci,cm)+
				cuantos(ri,rm,cm+1,cf)+
				cuantos(rm+1,rf,ci,cm)+
				cuantos(rm+1,rf,cm+1,cf);
	}
	
}
int main(int argc, char *argv[]) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			mat[i][j]=101;
		}
	}
	cout << cuantos(0,7,0,7);
}