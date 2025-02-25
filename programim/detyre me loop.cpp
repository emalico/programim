/*#include<iostream>
using namespace std;
int main(){
	bool kushti = true;
	while(kushti){
	int nr;
	cout<<"vendos vleren n"<<endl;
	cin>>nr;
	int sh = 0;
	for(int i = 1; i<= nr; i++){
	
	sh+=i;
	}
	cout<<"shuma e "<<nr<<"numrave te pare"<< sh <<endl;
	cout<<"shtyp 0 per te mbyllur programin";
	int in;
	cin>>in;
	if(in == 0){
	kushti=false;
	//break;
}
}
}
*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"jep numrin 1"<<endl;
cin>> n;
int m;
cout<<"jep numrin 2"<<endl;
cin>>m;
for(int i = 1; i <=n; i++){// n- numri i rreshtave
for(int j=1; j<=m; j++){// j-numri i kolonave n- per katrore
if(i==1|| i==n || j==1 || j==m){

	cout<<"- ";//me hapsire del drejtekendesh dhe cout eshte gjithmon pas kushtit
	}
	else{
		cout<<"  ";//duhen aq hapsira sa kam dhe te cout * sepse te jete i njejte
	}
	
}
cout << endl;

}
}
/*
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"jep numri";
cin>>n;
for( int i = 1; i <= n; i++){
	for( int h; h <=(n -i); h++ )//qe te ulim nr e hapsira me n-1
	cout<<" ";
	for(int j=1; j<=0; j++){

	cout<<"*";
}
cout << endl;	}
}
*/
