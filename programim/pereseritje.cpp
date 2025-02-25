#include<iostream>
using namespace std; 
int main(){
/*	//u1 Krijo një program që lexon një vektor me n elemente dhe gjen shumën e të gjithë elementeve.
int n;
cout<<"sa vlera do "<<endl;
cin>>n;
int sh=0;
int V[n];
cout<<"vendos vlerat e vektorit"<<endl;
for(int i=0; i<n; i++){
	cin>>V[i];
	sh+=V[i];
}
cout<<"shuma eshte "<<sh;

	//u2Lexo një vektor me n elemente dhe numëro sa prej tyre janë pozitive dhe sa janë negative.
	int n;
	cout<<"sa vlera deshiron "<<endl;
	cin>>n;
	int S[n];
	cout<<"vendos vlerat e vektorit "<<endl;
	for(int i=0; i<n; i++){
		cin>>S[i];
		if(S[i]<0){
		cout<<"numra negativ "<<S[i]<<endl;
	}
		 else if(S[i]>0){
		cout<<"numra pozitiv "<<S[i]<<endl;
	}
	else{
		cout<<"numra zero "<<S[i]<<endl;
	}
	}
	
	
	
	//u3 Krijo një program që lexon një vektor dhe gjen vlerën maksimale dhe minimale.
	int n;
	cout<<"vendos sa vlera do "<<endl;
	cin>>n;
	int G[n];
	int min=99999;
	int max=0;
	cout<<"vendos vlerat "<<endl;
	for(int i=0; i<n; i++){
		cin>>G[i];
		if(G[i]<min){
			min=G[i];
		}
		if(G[i]>max){
			max=G[i];
		}
	}
	cout<<"vlera maksimale "<<max<<endl;
	cout<<"vlera minimale "<<min<<endl;
		
	
	//u4 pozicioni tek poicioni cift
	int n;
	cout<<"vendos sa vlera do "<<endl;
	cin>>n;
	int T[n];
	cout<<"vendos vlerat e vektorit "<<endl;
	for(int i=0; i<n; i++){
		cin>>n;
	}
		cout<<"pozicioni cift eshte ";
	for(int i=0; i<n; i+=2){
		cout<<T[i]<<" ";
	}
	cout<<endl;
		cout<<"pozicioni tek eshte ";
	for(int i=1; i<n; i+=2){
		cout<<T[i]<<" ";
		
	}
	
	
	//u5 jepet vektori a[n] te ndertohet nje program qe krijon nje vektore te ri b[n]i barabarte 3*A[i]
	int n;
	cout<<"vendos sa vlera do "<<endl;
	cin>>n;
	int T[n];
	int B[n];
	cout<<"vendos vlerat e vektorit "<<endl;
	for(int i=0; i<n; i++){
		cin>>n;
	}
		for(int i=0; i<n; i++){
		B[i]=3*T[i];
	}
	for(int i=0; i<n; i++){
		cout<<B[i]<<" "<<endl;
	}
	cout<<endl;
	*/
	
	//matriksa
	//1.Jepet matrica A[m][n].Te afishohet vektori V qe mban elementet pozitive te matrices se dhene
	int n;
	cout<<"sa rreshta do "<<endl;
	cin>>n;
	int m;
	cout<<"sa kolona do "<<endl;
	cin>>m;
	int V[x];
	int x=0;//per vektorin
	int M[m][n];
	cout<<"vendos matriksen "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>M[i][j];
		}
	}
	return 0;
}
