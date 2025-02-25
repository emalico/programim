/*#include<iostream>
using namespace std;
int main(){
	double nr1,nr2;
	char op;
	cout<<"vendosni numrin e pare"<<endl;
	cin>>nr1;
	cout<<"vendosni operatorin"<<endl;
	cin>>op;
	cout<<"vendosni numrin e dyte"<<endl;
	cin>>nr2;
	switch(op){
		case'-':
			cout<<"rezultati eshte "<<nr1-nr2<<endl;
			break;
			
	case'*':
			cout<<"rezultati eshte "<<nr1*nr2<<endl;
			break;
		case'+':
			cout<<"rezultati eshte "<<nr1+nr2<<endl;
			break;
			case'/':
				if(nr2==0){
					cout<<"nuk mund te pjesetosh me 0"<<endl;
				}
				else{
					cout<<"rezultati eshte"<<nr1/nr2<<endl;
				}
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
	int nr;
	cout<<"ju lutem vendosni nr qe te konvertohet ne dite jave"<<endl;
	cin>>nr;
	switch(nr){
		case 1:
		cout<<"e hene"<<endl;
		break;
		case2:
		cout<<"e marte"<<endl;
		break;
	case 3:
	cout<<"e merkure"<<endl;
	break;
		case 4:
		cout<<"e enjte"<<endl;
		break;
	case 5:
		cout<<"e premte"<<endl;
		break;
	case 6:
		cout<<"e shtune"<<endl;
		break;
	case 7:
		cout<<"e diel"<<endl;
		break;
		default:
				cout<<"ja ke fut kot"<<endl;
				break;
	
	}






}
