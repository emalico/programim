W//funksionet perseritje per test
#include<iostream>
using namespace std;
/*
//funksioni me shume

int shuma(int n){
	int shuma =0;
	for(int i=1; i<=n; i++){
		shuma+=i;
	}
	return shuma;
}
int main(){
	int x;
	cout<<"vendos ca vlere do"<<endl;
	cin>>x;
	cout<<"shuma juaj eshte "<<shuma(x);
	return 0;
	}

//fuqia 
int fuqia( ){
	int a;
	cout<<"vendos numrin "<<endl;
	cin>>a;
	return a*a;
}
int main(){
	cout<<"fuqia juaj eshte "<<fuqia( );
	return 0;
}


//funksioni i cili gjen me te madhin mes dy numrave
int rezu( int a, int b){
	int rezultat;
	if(a<b){
		rezultat=b;
	}
	else{
		rezultat=a;
	}
	return rezultat;
}
int main(){
	int a, b;
	cout<<"vendos dy numra "<<endl;
	cin>>a>>b;
	cout<<"numri me i madh eshte "<<rezu(a,b)<<endl;
	return 0;
}

//ndertoni funksionin i cili lexon nga 1-n numra nga useri dhe perdor funksionet per te gjetur  dhe afishuar shumen dhe prodhimin
//tek e tek
#include <iostream>
using namespace std;

int shuma(int n) {
    int sh = 0;
    for (int i = 0; i <= n; i++) {
        sh += i;
    }
    return sh;
}

int prodhimi(int n) {
    int p = 1;
    for (int i = 1; i <= n; i++) {
        p *= i;
    }
    return p;
}

int main() {
    int x;
    cout << "Vendos nje numer: ";
    cin >> x;

    cout << "Shuma eshte: " << shuma(x) << endl;
    cout << "Prodhimi eshte: " << prodhimi(x) << endl;

    return 0;
}



//shuma prodhimi bashke
void numrat(int n){
	int shuma=0;
	for(int i=1; i<=n; i++){
		shuma+=i;
	}
	int p=1;
	for(int i=1; i<=n; i++){
		p*=i;
	}
	cout<<"shuma eshte : "<<shuma<<endl;
	cout<<"prodhimi eshte : "<<p<<endl;
}
int main(){
	int x;
	cout<<"vendos numrin "<<endl;
	cin>>x;
	numrat(x);
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
	int n;
	cout<<"vendosni nje numer "<<endl;
	cin>>n;
	cout<<"faktoriali eshte "<<faktorial(n);
	return 0;
	
}


//faktoriali iterativ
int faktorial(int n){
	int p=1;
	for(int i=1; i<=n; i++){
		p*=i;
	}
	return p;
}
int main(){
int o;
cout<<"vendos numrin"<<endl;
cin>>o;
cout<<"faktoriali eshte "<<faktorial(o)<<endl;
return 0;
}


//4. Nderto programin I cili gjen shumen e 10 numrave te pare natyror
//duke perdorur rekursionin
int shuma(int n){
if(n==1){
	return 1;
}
else{
	return n+shuma(n-1);
}
}
int main(){
	int numri=10;
	cout<<"shuma e dhjete numrave te pare eshte "<<shuma(10);
	return 0;
}

//5. Nderto programin I cili llogarit faktorialin e nje numri n duke perdorur
//rekursioni.N merret si parameter nga perdoruesi
int faktorial(int n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*faktorial(n-1);
	}
}
int main(){
	int N;
	cout<<"vendos numrin "<<endl;
cin>>N;
cout<<"faktoriali eshte "<<faktorial(N);
return 0;
}

//6. Nderto programin I cili gjen fuqine a te nje numri n duke perdorur
//rekursionin.pra n a .

int long fuqia(int a, int n){
	if(n==0){
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
	int x,y;
	cout<<"vendos numrin dhe fuqine "<<endl;
	cin>>x>>y;
	cout<<"numri "<<y<<" ka me fuqi "<<x<<" eshte: "<<fuqia(y,x);
	return 0;
}

//7. Nderto programin I cili gjen shumen e dy numrave x dhe y duke
//perdorur rekursionin
int shuma(int n, int m){
	if(n==0){
		return m;
	}
	else{
		return 1+shuma(m,n-1);		
	}
}
int main(){
	int n,m;
	cout<<"vendos dy numera ";
	cin>>n>>m;
	cout<<"shuma e tij eshte : "<<shuma(n,m)<<endl;
	return 0;
}

//me prodhim
int prodhim(int m,int k){
	if(k==0){
		return 0;
	}
	else{
		return m+prodhim(m,k-1);
	}
}
int main(){
	int o, p;
	cout<<"vendos dy numra "<<endl;
	cin>>o>>p;
	cout<<"prodhumi eshte "<<prodhim(o,p);
	return 0;
}
*/
