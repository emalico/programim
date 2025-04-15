#include<iostream>
using namespace std;
//funksioni me shume
/*
int shum(int n){
	int s=0;
	for(int i=1; i<=n; i++){
		s+=i;
	}
	return s;
}
int main(){
	int c;
	cout<<"vendos nje numer "<<endl;
	cin>>c;
	cout<<"shuma juaj eshte "<<shum(c)<<endl;
	return 0;
}

//fuqia 
int fuqia( ){
	int a;
	cout<<"vendos nje numer "<<endl;
	cin>>a;
	return a*a;
}
int main(){
	cout<<"fuqia juaj eshte "<<fuqia( )<<endl;
	return 0;
	
}

//funksioni i cili gjen me te madhin mes dy numrave
int funksion(int s, int t){
	if(s<t){
		return t;
	}
	else{
		return s;
	}
}
int main(){
	int a,b;
	cout<<"vendos dy numra "<<endl;
	cin>>a>>b;
	cout<<"me i madhi eshte "<<funksion(a,b)<<endl;
	return 0;
}

//ndertoni funksionin i cili lexon nga 1-n numra nga useri dhe perdor funksionet per te gjetur  dhe afishuar shumen dhe prodhimin
//tek e tek
int shuma(int n){
	int shuma=0;
	for(int i=1; i<=n; i++){
		shuma+=i;
	}
	return shuma;
}
int prodhimi(int j){
	int prodhimi=1;
	for(int i=1; i<=j; i++){
		prodhimi*=i;
	}
	return prodhimi;
}
int main(){
	int j;
	cout<<"vendos nje numer"<<endl;
	cin>>j;
	cout<<"shuma eshte "<<shuma(j)<<" prodhimi eshte "<<prodhimi(j)<<endl;
	return 0;
	}
	
	
	//shuma prodhimi bashke
	void numra(int n){
		int shuma=0;
		int prodhimi=1;
		for(int i=1; i<=n; i++){
			shuma+=i;
			prodhimi*=i;
		}
		cout<<"prodhimi eshte "<<prodhimi<<endl;
		cout<<"shuma eshte "<<shuma<<endl;
	}
	int main(){
		int m;
		cout<<"vendos numrin "<<endl;
		cin>>m;
		numra(m);
	}

//faktoriali rekursiv
int faktorial(int m){
	if(m==0||m==1){
		return 1;
	}
	else{
		return m*faktorial(m-1);
	}
}
int main(){
	int j;
	cout<<"vendos nje numer "<<endl;
	cin>>j;
	cout<<"faktoriali "<<faktorial(j)<<endl;
	return 0;
}

//faktoriali iterativ
int faktorial(int n){
	int p=1;
	for(int i; i<=n; i++){
		p*=i;
	}
	return p;
}
int main(){
	int j;
	cout<<"vendos numrin"<<endl;
	cin>>j;
	cout<<"faktoriali iterativ "<<faktorial(j)<<endl;
	return 0;
}

//4. Nderto programin I cili gjen shumen e 10 numrave te pare natyror
//duke perdorur rekursionin
int shumara(int n){
	if(n==1){
		return 1;
	}
	else{
		return n+shumara(n-1);
	}
}
int main(){
	int m=10;
	cout<<"shuma e dhjete nr te pare eshte "<<shumara(10)<<endl;
	return 0;
}

//6. Nderto programin I cili gjen fuqine a te nje numri n duke perdorur
//rekursionin.pra n a .
int fuqia(int a,int n){
	if(a==0){
		return 1;
	}
	else if(n==1){
		return a;
	}
	else{
		return a*fuqia(a,n-1);
	}
}
int main(){
	int m,b;
	cout<<"vendos numer dhe fuqine e tij "<<endl;
	cin>>m>>b;
	cout<<"fuqia eshte "<<fuqia(m,b)<<endl;
	return 0;
}

//7. Nderto programin I cili gjen shumen e dy numrave x dhe y duke
//perdorur rekursionin
int shuma(int n,int m){
	if(n==0){
		return m;
	}
	else{
		return 1+shuma(m,n-1);
	}
}
int main(){
	int m,j;
	cout<<"vendos numra "<<endl;
	cin>>m>>j;
	cout<<"shuma eshte "<<shuma(m,j)<<endl;
	return 0;
}
*/

