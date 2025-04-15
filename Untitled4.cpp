//ndertoni funksionin i cili lexon nga 1-n numra nga useri dhe perdor funksionet per te gjetur  dhe afishuar shumen dhe prodhimin
#include<iostream>
using namespace std;
/*void numra(int n){
	int shuma =0;
	int prodhimi=1;
	for(int i=1; i<=n; i++){
		prodhimi*=i;
	}
	for(int i=0; i<=n; i++){
		shuma+=i;
	}
	cout<<"shuma eshte "<<shuma<<endl;
		cout<<"prodhimi eshte "<<prodhimi<<endl;
}
int main(){
	int x;
	cout<<"vendos numrin"<<endl;
	cin>>x;
	
	numra(x);
}
*

//ndertoni funksionin i cili lexon nga 1-n numra nga useri dhe perdor funksionet per te gjetur  dhe afishuar shumen dhe prodhimin ****vec e vec
int prodhimi(int n){
	int prodhimi=1;
	for(int i=1; i<=n; i++){
		prodhimi*=i;
	}
	return prodhimi;
}
int shuma(int n){
	int shuma=0;
	for(int i=0; i<=n; i++){
		shuma+=i;
	}
	return shuma;
}

int main(){
	int n;
cout<<"vendos numrin "<<endl;
cin>>n;
cout<<"shuma eshte "<<shuma(n);
cout<<"prodhimi eshte "<<prodhimi(n);
return 0;
}

//faktoriali rekursiv
int faktoriali(int n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*faktoriali(n-1);
	}
}
int main(){
	int m;
	cout<<"vendos numri "<<endl;
	cin>>m;
	cout<<"faktoriali i numrit = "<<m<< "eshte = "<<faktoriali(m)<<endl;
	return 0;
}

*/
//faktoriali interativ
int faktoriali(int n){
	int prodhimi=1;
	for(int i=1; i<=n; i++){
		prodhimi*=i;
    }
    return prodhimi;
  }
  int main() {
    int n;
    cout << "Vendos numrin: ";
    cin >> n;
    cout << "Faktoriali i numrit " << n << " eshte " << faktoriali(n) << endl;
    return 0;
}













