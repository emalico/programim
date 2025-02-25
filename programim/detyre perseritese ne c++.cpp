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
*/

#include<iostream>
using namespace std;
int main(){
double nr1,nr2;
char op;
cout<<"vendos nr1"<<endl;
cin>>nr1;
cout<<"vendos nr2"<<endl;
cin>>nr2;
cout<<"vendos op"<<endl;
cin>>op;
switch(op){

case '*':
	cout<<"rez eshte"<<nr1*nr2;
	break;
	case'/':
	if(nr2==0){
	cout<<"nuk pjeseton me 0"<<endl;}
	else {
	cout<<"rezultati"<<nr1/nr2;
	}
	break;
	break;
	case'+':
	cout<<"rez eshte"<<nr1+nr2;
	break;
	case'-':
	cout<<"rez eshte"<<nr1-nr2;
	break;
}
return 0;
}



