#include<iostream>
using namespace std;
int main(){
	int n;
			cout<<"vendos nr elementeve";
			cin>>n;
			
			int A[n];
			cout<<"Jepni elementet e vektorit:"<<endl;
			for(int i=0; i<n; i++){
				cin>>A[i];	
			}
			cout << "Elementet ne pozicione cift: ";
				for(int i=0; i<n; i+=2){
				cout<<A[i]<<" ";
			}
			cout<<endl;
			
			cout << "Elementet ne pozicione tek: ";
				for(int i=1; i<n; i+=2){
				cout<<A[i]<<" ";}
				cout<<endl;
	return 0;
}
