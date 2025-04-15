#include<iostream>
using namespace std;
//u1 cfare eshte nje funksion, rekursiv, iterativ, sa lloje i ndajme dhe cfare eshte prototipi

//u8 //faktoriali iterativ
//u9 /4. Nderto programin I cili gjen shumen e 10 numrave te pare natyror
//duke perdorur rekursionin
//u10  Nderto programin I cili gjen fuqine a te nje numri n duke perdorur
//rekursionin.pra n a .
//u11 7. Nderto programin I cili gjen shumen e dy numrave x dhe y duke
//perdorur rekursionin

//1. funksioini eshte nje grup instruksionesh i cili kryenj nje detyre te caktuar, kemi dy lloje rekursiv-qe jane funksionet te cilat therrasin veten 
//dhe iterativ te cilat ndahen ne : me kthim/pa kthim vlere me /pa parameter.rekursivi ndahet ne rastin e thjeshte qe eshte rasti qe mund te zgjidhet nga programi 
//dhe rasti rekursiv i cili programi nuk e zgjidh dot.prototipi eshte deklarimi i funksionit para main me qellim strukturimin e tij pas main. sintaksa:
//iterativ- tiptedhenash(){trupi funksionit}; rekursiv-nqs rast baze, zgjidhe, perndryshe thjestoje problemin deri sa te jete rast baze.



/*//u2 //funksioni me shume
int shuma(int n){
	int sh=0;
	for(int i=1; i<=n; i++){
		sh+=i;
	}
	return sh;
}
int main(){
	int x;
	cout<<"vendos nje numer "<<endl;
	cin>>x;
	cout<<"shuma juaj eshte "<<shuma(x)<<endl;
	return 0;
}



//u3 //fuqia 
int fuqia( ){
	int m;
	cout<<"vendos fuqine "<<endl;
cin>>m;
	return m*m;
}
int main(){
	cout<<"fuqia juaj eshte "<<fuqia( )<<endl;
	return 0;
}


//u4 //funksioni i cili gjen me te madhin mes dy numrave
int numra(int a, int b){
	if(a<b){
		return b;
	}
	else{
		return a;
	}
}
int main(){
	int n, m; 
	cout<<"vendos dy numra "<<endl;
	cin>>n>>m;
	cout<<"me i madhi eshte "<<numra(n,m)<<endl;
	return 0;
}



//u5 //ndertoni funksionin i cili lexon nga 1-n numra nga useri dhe perdor funksionet per te gjetur  dhe afishuar shumen dhe prodhimin
//tek e tek
int shuma(int n){
	int sh=0;
	for(int i=1; i<=n; i++){
		sh+=i;
	}
	return sh;
}
	int prodhimi(int m){
		int p=1;
		for(int i=1; i<=m; i++){
			p*=i;
		}
		return p;
	}
int main(){
	int k;
	cout<<"vendos k "<<endl;
	cin>>k;
	cout<<"shuma dhe prodhimi jane: shuma= "<<shuma(k)<<" prodhimi= "<<prodhimi(k)<<endl;
	return 0;
}


//u6 //shuma prodhimi bashke
void numrat(int j){
	int sh=0;
	
	for(int i=1; i<=j; i++){
		sh+=i;
	}
	int p=1;
		for(int i=1; i<=j; i++){
			p*=i;
	}
	cout<<"shuma eshte "<<sh<<endl;
	cout<<"prodhimi eshte "<<p<<endl;
}
int main(){
	int n;
	cout<<"vendos nje numer "<<endl;
	cin>>n;
numrat(n);
}
*/

//u7 //faktoriali rekursiv
int faktorial(int m){
	if(m==1||m==0){
		return 1;
	}
	else {
		return m*faktorial(m-1);
	}
}
int main(){
	int n;
	cout<<"vendos nje numer "<<endl;
	cin>>n;
	cout<<"faktoriali eshte "<<faktorial(n)<<endl;
	return 0;
}

