/*#include<iostream>
using namespace std;
int main(){
double nr1,nr2;
char op;
cout<<"vendos nr1"<<endl;
cin>>nr1>>nr2;
cout<<"vendos nr2"<<endl;
cin>>nr2;
cout<<"vendos operatorin"<<endl;
cin>>op;
switch(op){
	case '+':
		cout<<"rezultati eshte"<<nr1+nr2;
		break;
		case '-':
			cout<<"rezultati eshte"<<nr1-nr2;
			break;
				case '*':
			cout<<"rezultati eshte"<<nr1*nr2;
			break;
				case '/':
					if(nr2==0){
						cout<<"nuk pjeseton me 0"<<endl;}
				    else {
							cout<<"rezultati"<<nr1/nr2;
						}
						break;
						case '%':
			cout<<"rezultati eshte"<<nr1%nr2;
			break;
			default:
				cout<<"op jo i sakte"<<endl;
				break;
					}
	return 0;
}


#include<iostream>
using namespace std;
int main(){
	int nr;
	cout<<"vendos numrin"<<endl;
	cin>>nr;
	switch(nr){
		case 1:
		cout<<" eshte e hene"<<endl;
		break;
	case 2:
		cout<<"eshte e marte"<<endl;
		break;
			case 3:
		cout<<"eshte e merkure"<<endl;
		break;
			case 4:
		cout<<"eshte e enjte"<<endl;
		break;
			case 5:
		cout<<"eshte e premte"<<endl;
		break;
			case 6:
		cout<<"eshte e shtune"<<endl;
		break;
			case 7:
		cout<<"eshte e diel"<<endl;
		break;
		default:
				cout<<"mos ja fut kot se java ka 7 dite"<<endl;
				break;
	}
	return 0;
}*/

#include<iostream>
using namespace std;
int main(){
	int m;
	double pi,s,p,h,r;
	cout<<"zgjidhni nje mundesi"<<endl;
	cin>>m;
	switch(m)
	case 1:
		cout<<"zgjodhe trekendeshin, vendos lartesin"<<endl;
		cin>>h;
		double a,b,c;
		cin>>a>>b>>c;
		s=(b*h)/2;
		p=a+b+c;
		cout<<p<<s;

	case 2:
		cout<<"zgjodhe drejtkendeshin, vendos brinjet"<<endl;
		double a,b;
		cin>>a>>b;
		s=a*b;
		p=2*a+2*b;
		cout<<p<<s;
		break;
	case 3:
		cout<<"zgjodhe rrethi, vendos rrezen"<<endl;
		double a,b;
		cin>>a;
		s=pi*r;
		p=2*3.14*r;
		cout<<p<<s;
		break;
		

