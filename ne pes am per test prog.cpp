#include<iostream>
using namespace std;
int main(){
	//u1 switch case me opsione
/*	int op;
cout<<"vendos opsionin"<<endl;
cin>>op;
switch(op){
	case 1:{
		int a,b,s,p;
		cout<<"vendos brinjen a"<<endl;
		cin>>a;
		cout<<"vendos brinjen b"<<endl;
		cin>>b;
		s=a*b;
		cout<<"syprina eshte "<<s<<endl;
		p=2*a+2*b;
		cout<<"perimetri eshte "<<p<<endl;
		break;
	}
	default:{
		cout<<"e ke gabim";
		break;
	}
}

//piramida mbrapsht
int e;
cout<<"vendosni nr"<<endl;
cin>>e;
for(int y=1; y<e; y++){
	for(int g=0; g<y; g++){
		cout<<" ";                               
}
for(int r=0;r<(e-y); r++){
		cout<<"* ";//mos harro hapsiren
		}
cout<<endl;
	}
//kend drejt
int y;
cout<<"vendos nje numer";
cin>>y;
for(int o=1; o<y; o++){
	for(int p=0; p<o; p++){
		cout<<"* ";
	}
	cout<<endl;
}


int y,b;
cout<<"vendos nje numer a";
cin>>y;
cout<<"vendos nje numer b";
cin>>b;

for(int o=1; o<y; o++){
	for(int p=0; p<b; p++){
		if( o==1 || o== y-1|| p==1||p== b-1){
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	cout<<endl;*/
	int sh=0;
	int p;
	cout<<"sa vlera te nevojiten "<<p<<endl;
	cin>>p;
	int n;
	cout<<"vendos numrat";
	
	for(int o=1; o<=10; o++){
		cin>>n;
		if(n%2==0){
			sh+=n;
		}
		cout<<"shuma eshte"<<sh<<endl;
	}

return 0;
}


