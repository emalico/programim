//ushtrimi me piramiden mbrapsht

#include<iostream>
/*using namespace std;
int main(){
int p;
cout<<"vendos permasen"<<endl;
cin>>p;
for(int i=0; i< p; i++){
	for(int j=0; j< i; j++){
		cout<<" ";
	}
	for(int g=0; g<(p-i); g++){//numri i rreshtave minus i(inkrementimin) //p-i= rriten reshtat per poshte
		cout<<"*";
	}
	cout<<endl;
}
return 0;
}*/
//ushtrimi me piramide
/*
using namespace std;

int main() {
    int r;
    cout<<"vendos numrin"<<endl;
    cin >>r;//numri i rreshtave

    for (int i=1; i<r; i++) {//cikli i pare kontrollon rreshta nga 1 deri te r
        for (int j=0; j <i; j++) {//cikli i dyte vendos hapsirat boshte qe piramida te rrije ne qender
            cout <<" ";
			for (int k = 0; k <(r-i); k++) {//formohet piramida
            cout <<"* ";
        }
cout<<endl;
		}
        
    }

    return 0;
}*/

/*#include<iostream>
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
}
*/
#include<iostream>
//u3 piramida 
using namespace std;
int main(){
int p;
cout<<"";
	cin>>p;
	for( int i = 1; i<p; i++){
	}
	for( int e=0; e< i; e++){
		cout<<" ";

	for( int k=0; k<(e-1); k++){
		cout<<"*";
	}
	cout<<endl;
}
	return 0;
}


