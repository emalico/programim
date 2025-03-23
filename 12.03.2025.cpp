//ndertoni programin i cili perdor funksionet per te llogaritur perimetrin dhe siperfaqen e rrethit dhe te meret rrezja nga perdoruesi dhe perdorni konstanten
#include<iostream>
using namespace std;
 void perimetri(double r){
const double p=3.14;
	double perimetri=2*p*r;
	cout<<"perimetri eshte "<<perimetri<<endl;
}
	void syprina(double r){
		const double p=3.14;
		double syprina=p*r*r;
	cout<<"syprina eshte "<<syprina<<endl;
	}
int main(){
	double r;
	cout<<"vendos rrezen "<<endl;
	cin>>r;
	syprina(r);
	perimetri(r);
	return 0;
}
