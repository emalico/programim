#include<iostream>
using namespace std;
int main(){
	/*
	//u1 ushtrimi me pozicionin cift dhe tek
	int n;
	cout<<"Sa vlera deshironi? "<<endl;
	cin>>n;
	
	int S[n];
	cout<<"Ju lutem vendosni vlerat! "<<endl;
	for(int i=0; i<n; i++){
		cin>>S[i];
	}
	cout<<"Pozicioni cift ";
		for(int i=1; i<n; i+=2){
		cout<<S[i]<<" ";
	}
	cout<<endl;
		cout<<"Pozicioni tek ";
		for(int i=0; i<n; i+=2){
		cout<<S[i]<<" ";
	}
	cout<<endl; 
	
	
	
	//u2 Krijo një program që lexon një vektor me n elemente dhe gjen shumën e të gjithë elementeve.
	int n;
	cout<<"sa vlera do "<<endl;
	cin>>n;
	int sh=0;
	int V [n];
	cout<<" vlerat ";
	for(int i=0; i<n; i++){
		cin>>V[i];
		sh=sh+V[i];
	}
	cout<<"shuma eshte "<<sh<<endl;
	
	
	//u3Lexo një vektor me n elemente dhe numëro sa prej tyre janë pozitive dhe sa janë negative.
	int n;
	cout<<"sa vlera do "<<endl;
	cin>>n;
	int V[n];
	cout<<" vendos vlerat "<<endl;
	for(int i =0; i<n; i++){
		cin>>V[i];
		if(V[i]>0){
			cout<<"eshte pozitiv "<<V[i]<<endl;
		}
		else if(V[i]<0){
			cout<<"eshte negativ"<<V[i]<<endl;
		}
			else if(V[i]==0){
			cout<<"eshte 0 "<<V[i]<<endl;
		}
	}
	cout<<endl;
	
	//u3 Krijo një program që lexon një vektor dhe gjen vlerën maksimale dhe minimale.
	int n;
	cout<<"vendosni sa vlera doni ";
	cin>>n;
	int V[n];
	cout<<"vendos vlerat "<<endl;
	int Max=0;
	int min=9999;
	for(int i=0; i<n; i++){
		cin>>V[i];
	}
	for(int i=1; i<n; i++){
		if(V[i]<min){
		min=V[i];
		}
		if(V[i]>Max){
		Max=V[i];
		}
}
cout<<"vlera me e madhe "<<Max<<endl;
cout<<"vlera me e vogel "<<min<<endl;
	
	
		//u5 jepet vektori a[n] te ndertohet nje program qe krijon nje vektore te ri b[n]i barabarte 3*A[i]
	int n;
	cout<<"vendos sa vlera do "<<endl;
	cin>>n;
	int A[n], B[n];
	cout<<"vendos vlerat "<<endl;
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
		for(int i=0; i<n; i++){
		B[i]=3*A[i];
	}
	for(int i=0; i<n; i++){
		cout<<B[i]<<" "<<endl;
	}
	cout<<endl;
	*/
	
	
	// u5 jepet vektori Max[n] te ndertohet nje program qe gjen sa here ndeshet vlera maximale.
	int n;
	cout<<"vendos se sa vlera "<<endl;
	cin>>n;
	int Max[n];
	cout<<"vendos vleren "<<endl;
	for(int i=0; i<n; i++){
		cin>>Max[i];
	}
int MaxValue = Max[0], count =0;//count fillon numerimin
		 for(int i=0; i<n; i++){
		 	if(Max[i]>MaxValue){  
            MaxValue = Max[i];
            count = 1;
            
        } else if (Max[i] == MaxValue) {
            count++;
        }
    }

    cout << "Vlera maksimale eshte: " << MaxValue << endl;
    cout << "Ajo ndeshet: " << count << " here" << endl;   
	
	
	
	return 0;
}
