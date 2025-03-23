#include <iostream>
using namespace std;
void numrat(int n){
	int shuma=0;
	int prodhimi=1;
	for(int i=1; i<=n; i++){
		prodhimi*=i;
	}
	for(int i=0; i<=n; i++){
		shuma+=i;
	}
	cout<<"shuma eshte "<<shuma<<endl;
	cout<<"prodhimi eshte "<<prodhimi<<endl;
}
int main(){
	int x;
	cout<<"vendos nje numer "<<endl;
	cin>>x;
	
	numrat(x);
}
