#include <iostream>
#include <string>

using namespace std;
int mat[8][8];
int contador = 0;
int dondeEstaX(int ri, int rf, int ci, int cf){
	for (int i = ri; i < rf; i++) {
		for (int j = ci; j < cf; j++) {
			if (mat[i][j] != -1) {
				return i;
			}
		}
	}
}
int dondeEstaY(int ri, int rf, int ci, int cf){
	for (int i = ri; i < rf; i++) {
		for (int j = ci; j < cf; j++) {
			if (mat[i][j] != -1) {
				return j;
			}
		}
	}
}
void triom(int ri, int rf, int ci, int cf, int r0, int c0){
	if (ri+1==rf && ci+1==cf) {
		
		
	}else {
		int rm = ((ri+rf)/2);
		int cm = ((ci+cf)/2);
		if (ri<r0 && rm>r0 && ci<c0 && cm > c0) {
			
		}
		return  triom(ri,rm,ci,cm,dondeEstaX(ri,rm,ci,cm),dondeEstaY(ri,rm,ci,cm));
		return	triom(ri,rm,cm+1,cf,dondeEstaX(ri,rm,cm+1,cf),dondeEstaY(ri,rm,cm+1,cf));
		return	triom(rm+1,rf,ci,cm,dondeEstaX(rm+1,rf,ci,cm),dondeEstaY(ri,rm,cm+1,cf));
		return	triom(rm+1,rf,cm+1,cf,dondeEstaX(rm+1,rf,cm+1,cf),dondeEstaY(rm+1,rf,cm+1,cf));
	}
}

int main(int argc, char *argv[]) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			mat[i][j]=-1;
		}
	}
	mat[2][5]=0;
	triom(0,7,0,7,2,5);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout <<mat[i][j] << " ";
		}
		cout << endl;
	}
	
}