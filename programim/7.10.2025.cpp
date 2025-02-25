#include<iostream>
using namespace std;
int main(){
	//te ndertohet programi  i cili gjen shumen e p numrave te dhene nga perdoruesi vtm per shumfishat e 2.
	int p/*sasiae numrave*/,num/*numrat qe vendos useri;*/,shuma=0;
	cout<<"sa vlera do"<<endl;
	cin>>p;//nr i vlerave
	cout<<"vendosni vlerat"<<endl;
	for(int i=1; i<p; i++){
	cin >>num;
	if(num/2==0){
		shuma+=num;
	}	
	}
	cout<<"shuma e p nrumrave eshte"<<shuma<<endl;
	return 0;
}
