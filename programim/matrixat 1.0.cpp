#include<iostream>
using namespace std;
int main(){
	int A[5];
	int B[3][3];
	// Inicializon të gjithë elementet e vargut A me vlerën 1.
	for(int i = 0; i<5; i++){
		A[i]=1;
	}
	int n=1; // Inicializon një variabël me vlerën 1.
	
	// Plotëson matricën B me vlera në rritje nga 1 deri në 9.
		for(int i = 0; i<3; i++){
		
			for(int j = 0; j<3; j++){
	 B[i][j]=n;// Cakton vlerën aktuale të n në elementin B[i][j].
            n++;  // Rrit vlerën e n për 1.
	}
	}
	return 0;
}
