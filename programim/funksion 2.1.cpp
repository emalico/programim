#include<iostream>
using namespace std;
//me pa parameter me vlere
/*int p(){

int m;
 cout<<"vendos vlerat e pare "<<endl;
 cin>>m;
int n;
 cout<<"vendos vlerat e dyte"<<endl;
 cin>>n;
return m*n;
}
int main(){
 cout<<"vlerat tuaja jane "<<p( )<<endl;
	return 0;
}
*/


//me parameter me vlere

int prodhimi(int m){
	int prodhimi = 1;
	for(int i=2; i<=m; i++){//kjo llogaritet psh
		prodhimi*=i;
	}
	return prodhimi;
}
int main(){
	int a;
	cout<<"vendos nje vlere "<<endl;
	cin>>a;
	cout<<"prodhimi juaj eshte "<<prodhimi(a)<<endl;
	
	return 0;
}
