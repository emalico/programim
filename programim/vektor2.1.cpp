
	#include<iostream>
	using namespace std;
	int main(){
/*	//u1 Krijo nj� program q� lexon nj� vektor me n elemente dhe gjen shum�n e t� gjith� elementeve.
	int n;
	int sh=0;
	cout<<"vendos sa numrs do"<<endl;
	cin>>n;
	int A[n];
	cout<<"vendos numrat"<<endl;
	for(int i=0; i<n; i++){
		cin>>A[i];
		sh=sh+A[i];
	}
	cout<<"shuma eshte"<<sh;
	
	
	//u2Lexo nj� vektor me n elemente dhe num�ro sa prej tyre jan� pozitive dhe sa jan� negative.
int n;
cout<<"sa numra doni"<<endl;
cin>>n;
int S[n];
cout<<"vendosni vlerat "<<endl;
for(int i=0; i<n; i++){
	cin>>S[i];
	if(S[i]<0){
		cout<<"numrat negativ"<<S[i]<<endl;
	}
	else if(S[i]>0){
		cout<<"numrat pozitiv"<<S[i]<<endl;
	}
	else{
	cout<<"numrat 0  "<<S[i]<<endl;
	}
	}
	
	
	*/	

 //u3 Krijo nj� program q� lexon nj� vektor dhe gjen vler�n maksimale dhe minimale.
 
int n;
cout<<"vendos vlerat "<<endl;
cin>>n;
int A[n];

cout<<"vendos vlerat"<<endl;
int max=0;
int min=99999;
for(int i=0; i<n; i++){
	cin>>A[i];
}
for(int i=1; i<n; i++){
	if(A[i]< min){
	min=A[i];

if(A[i]>max){
	max=A[i];
}
}
}

cout<<"vlera minimale"<<min;
cout<<"vlera maximale"<<max;
	return 0;
}
