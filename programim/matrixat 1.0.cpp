#include<iostream>
using namespace std;
int main(){
	int A[5];
	int B[3][3];
	// Inicializon t� gjith� elementet e vargut A me vler�n 1.
	for(int i = 0; i<5; i++){
		A[i]=1;
	}
	int n=1; // Inicializon nj� variab�l me vler�n 1.
	
	// Plot�son matric�n B me vlera n� rritje nga 1 deri n� 9.
		for(int i = 0; i<3; i++){
		
			for(int j = 0; j<3; j++){
	 B[i][j]=n;// Cakton vler�n aktuale t� n n� elementin B[i][j].
            n++;  // Rrit vler�n e n p�r 1.
	}
	}
	return 0;
}
