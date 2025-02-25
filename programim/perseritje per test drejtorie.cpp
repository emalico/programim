#include<iostream>
//u1 me temperaturen me if else
/*
using namespace std;
int main(){
	double t;
	cout<<"vendos temperaturen"<<endl;
	cin>>t;
	if(t<=10){
		cout<<"eshte ftohte"<<endl;
	}
	else if(t<=20){
			cout<<"eshte nxehte"<<endl;
	}
	else{
			cout<<"vape"<<endl;
	}
	return 0;
}
#include<iostream>
//u2 me cmimin 10%
using namespace std;
int main(){
	double cmimi;
	cout<<"vendos cmimin"<<endl;
	cin>>cmimi;
	if(cmimi>=100){
			cout<<"cmimi  rritet";
		cmimi= cmimi/10;
		
	}
	else{
		cout<<"cmimi nuk rritet";
	}
	return 0;
}

#include<iostream>
//u3 piramida mbrapsht
using namespace std;
int main(){
	int p;
	cout<<"vendos permasat"<<endl;
	cin>>p;
	for(int i=0; i< p; i++){
		for( int j=0; j< i; j++){
			cout<<" ";
	}
	for(int k=0; k<(p-i); k++){
		cout<<"*";//nuk shkruhet  endl sepse kalon ne rresht te ri
	}
	cout<<endl;
}
	return 0;
}*/

#include<iostream>
//u3 piramida 
using namespace std;
int main(){
int p;
cout<<"";
	cin>>p;
	for( int i = 1; i<= p; i++){
	}
	for( int n = 1; n <= p - i; n++){
		cout<<" ";
	}
	for( int k=1; k<(2 * i - 1); k++){
		cout<<"*";
	}
	return 0;
}


