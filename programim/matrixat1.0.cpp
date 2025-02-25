#include<iostream>
using namespace std;
int main(){
/*	//1.Jepet matrica A[m][n].Te afishohet vektori V qe mban elementet pozitive te matrices se dhene
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
		*/
		
		//2.Jepet vektori V[n].Te ndertohet programi qe afishon vektorin X me elemetet qe jane ne pozicionet teke dhe vektorin Y me elementet qe jane ne pozicionet cifte.
		int n;
		cout<<"sa vlera do "<<endl;
		cin>>n;
		int t=0;
		int k=0;
		int V[n], X[t], Y[k];
		cout<<"vendos vlerat "<<endl;
		for(int i=0; i<n; i++){
			cin>>V[i];
			if(i%2==0){
				X[t]=V[i];
				t++;
			}
			if(i%2!=0){
				Y[k]=V[i];
				k++;
			}
		cout<<"vektori tek"<<endl;
		for(int i=0; i<k; i++){
			cout<<Y[i]<<" ";
		}
			cout<<"vektori cift"<<endl;
		for(int i=0; i<t; i++){
			cout<<X[i]<<" ";
		}
		}
		
		
//	//	1.Ndertoni programin I cili lexon nje matrice katrore me m rreshta dhe m kolona. E mbush matricen me element nga perdoruesi dhe me pas I afishon ato ne ekran
//	int m;
//	cout<<"vendos sa vlera doni "<<endl;
//	cin>>m;
//	int A[m][m];//matrikse katrore
//	cout<<"vendos vlerat "<<endl;
//	for(int i=0; i<m; i++){
//		for(int j=0; j<m; j++){
//			cin>>A[i][j];
//		
//		}
//	}
//	//per te shfAQUR matriksem ose mbushur
//	for(int i=0; i<m; i++){
//		for(int j=0; j<m; j++){
//			cout<<A[i][j];
//		}
//		cout<<endl;
//	}
	
	
//	//2.Ndertoni programin I cili lexon nje matrice A me m rreshta dhe n kolona. E mbush matricen me element nga perdoruesi dhe me pas gjen shumen e matrices dhe e afishon ate ne ekran
//	int sh=0;
//	int n;
//	cout<<"sa vlera do per rreshtat "<<endl;
//	cin>>n;
//	int m;
//	cout<<"sa vlera do per kolonat "<<endl;
//	cin>>m;
//	int M[m][n];
//	cout<<"vendos vlerat "<<endl;
//	for(int i=0; i<m; i++){
//		for(int j=0; j<n; j++){
//			cin>>M[i][j];
//		
//		}
//	}
//	for(int i=0; i<m; i++){
//		for(int j=0; j<n; j++){
//			cout<<M[i][j];
//			sh+=M[i][j];
//			
//			cout<<"shuma eshte "<<sh<<endl;
//		}
//	}
//			cout<<endl;
//			
//			
//			//3.Ndertoni programin I cili merr si parameter dy matrica a dhe b dhe afishon prodhimin e te dyjave.
//	int p=1;
//	int a;
//	cout<<"sa vlera do per rreshtat "<<endl;
//	cin>>a;
//	int b;
//	cout<<"sa vlera do per kolonat "<<endl;
//	cin>>b;
//	int M[a][b];
//	cout<<"vendos vlerat "<<endl;
//	for(int i=0; i<a; i++){
//		for(int j=0; j<b; j++){
//			cin>>M[i][j];
//	}
//		}
//		for(int i=0; i<a; i++){
//		for(int j=0; j<b; j++){
//			cout<<M[i][j];
//			p*=M[i][j];
//			
//			cout<<"prodhimi eshte "<<p<<endl;
//		}
//	}
//			cout<<endl;

//3.Vertetoni nese nje matrice eshte identitet ose jo?! Qe nje matrice te jete identitet duhet qe ajo te jete matrice katrore. Elementet e diagonales kryesore te jene te gjitha 1 dhe elementet e tjere te jene 0
	return 0;
}
