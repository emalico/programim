/*#include<iostream>
using namespace std;
int main(){
int n= 1;
for(int i= 1; i<=15;i++){
	if(i%5!=0){
			cout<<i<<"ok"<<endl;
	}
	else{
		cout<<""<<endl;
	}
}
}


*/
#include<iostream>
using namespace std;
int main(){
double a,b,c;
double m=(a+b+c)/3;
cin>>a>>b>>c;
if(10<=m<=9){
	cout<<"ju keni marr A"<<endl;
}
else if(8=<m<=7){
	cout<<"ju keni marr B"<<endl;
}
else if(6<=m<=5){
	cout<<"ju keni marr C"<<endl;
}
else{
	cout<<"ju keni ngelur"<<endl;
}
return 0;
}
