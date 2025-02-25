#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"sa rreshta doni "<<endl;
	cin>>n;
		int m;
	cout<<"sa kolona doni "<<endl;
	cin>>m;
	int A[m][n];
	int x=0;//duhet me shkrojne tjt se ngaterrohet me kolonat ose rreshtat 
	int V[x];
	cout<<"vendos vlerat "<<endl;
	for(int i=0; i<n; i++){//loop per rreshtat
		for(int j=0; j<n; j++){//loop per kolonat
			cin>>A[i][j];
			if(A[i][j]>0){//kushti 
				V[x]=A[i][j];
				x++;
				}	
			}
		}
		cout<<"vlerat e vektorit ";
		for(int i=0; i<x; i++){//loop per vektorin per afisshimin
			cout<<"pozicionet pozitiv "<<V[i]<<" "<<endl;
		}
		cout<<endl; 

    return 0;
}

