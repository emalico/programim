#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"vendos sa vlera do te vendosesh "<<endl;
	cin>>n;
	int V[n];
	cout<<"vendos vlerat "<<endl;
	for(int i=0; i<n; i++){
		cin>>V[i];
	}
		cout<<"pozicioni cift "<<endl;
	for(int i=1; i<n; i+=2){
		cout<<V[i];
	}
	cout<<endl;	 
	cout<<"pozicioni tek "<<endl;
	for(int i=0; i<n; i+=2){
		cout<<V[i];
	}	
		 	cout<<endl;	 
			 
	
		 return 0;
	}
	
	
	
	/*
		int n;
		cout<<"vendos sa vlerat vlera do "<<endl;
		cin>>n;
		
		 int A[n];

		 cout<<"vendos vlerat "<<endl;
		 for(int i =0; i<n; i++){
		 	cin>>A[i];
		 }
		 cout<<"pozicioni tek "<<endl;
		 for(int i =1; i<n; i+=2){
		 	cout<<A[i];		 	}
		 	cout<<endl;
		  cout<<"pozicioni cift "<<endl;
		 for(int i =0; i<n; i+=2){
		 	cout<<A[i];//mos harro cout vektorin , per te afishuar vlerat
		 	}*/
