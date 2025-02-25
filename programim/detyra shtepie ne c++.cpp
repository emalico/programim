/*#include<iostream>
using namespace std;
int main(){
int n;
cout<<"vendos numrin"<<endl;
cin>>n;
if(n>=1 & n<=5){
	cout<<"katroret jane"<<n<<endl;	
	for(int i = 1; i <=n; i++){//vihet kushti nqs eshte true
	cout<<i<<" ^2= "<<i*i<<endl;//vendoset i sepse nuk del numri i cili po kryhet pshm. =46x - 6=46
}                                //vendoset i*iqe te dale rezultati
}
else{
	cout<<"duhet te vendosesh vtm nr nga 1-5"<<endl;
}
return 0;

#include<iostream>
#include <cmath>
using namespace std;
int main(){
int m;
cout<<"vendos vleren"<<endl;
cin>>m;
if( m>=0){
	cout<<"rrenja katrore eshte"<<endl;
	for(int i = 1; i<=m; i++){
		cout<<"rrenja katrore "<<m<<"eshte"<<sqrt(m)<<endl;
	}
		}else{
		cout<<"ju lutem vendos nr deri te 5 ose deri te 1"<<endl;
	}
	return 0;

}
}*/
#include <iostream>
using namespace std;
int main(){
	int h;
	double sh;
	cout<<"vendos shpjetesin"<<endl;
	cin>>sh;
	for(int i = 1; i<=h; i++){
		double d= sh*i;
	cout << "Distanca pas " << i << " oreve eshte: " << d << " km" << endl;
	}
	return 0;
}
