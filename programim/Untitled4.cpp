#include <iostream>
using namespace std;
int main(){
	double m;
	double a,b,c;
	cout<<"vendosni numrat"<<endl; 
	cin>>a>>b>>c;
	m=(a+b+c)/3;
	cout<<"mesatarja eshte "<<m<<endl;
	if(m<=4){
	cout<<"mesatarja eshte me e vogel se 4"<<endl;
	}
	else{
		cout<<"mesatarja eshte me e madhe se 4"<<endl;
	}
	return 0;
}
