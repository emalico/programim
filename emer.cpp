#include <iostream>
using namespace std;
int main(){
	int viti;
	cout<<"Vendosni Vitin:"<<endl;
	cin>>viti;
	if (viti %4==0 && viti%100==0 && viti%400==0){
	cout<<"Viti eshte i brishte";
	}
	else {
		cout<<"Viti nuk eshte i brishte"<<endl;
	}
	return 0;
}
