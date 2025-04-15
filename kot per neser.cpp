#include<iostream>
using namespace std;
///ush ndertoni programin ne c++ i cili krijon klasen punonjes. te ndertohet nje konstruktor i cili do mar si parameter dy atribute emri dhe sa oret e punes. 
//te ndertohet nje metod llogarit paga e cila merr 
//si parameter sa paguhet punonjesi per ore dhe kthen si rez pagen e tij. dhe te ndertohet nje metode e cila afishon te dhenat, te krijohen dy objekte s1,s2.
/*
class punonjes{
	public:
		string emri;
		int orapunes;
		punonjes(string emeri, int orapuntore){
			emri=emeri;
			orapunes=orapuntore;
		}
		double llogaritpagen(int paga){
		return orapunes*paga;	
		}
		void afisho(int paga){
			cout<<"emri juaj eshte "<<emri<<endl;
			cout<<"ora e punes eshte "<<orapunes<<endl;
			cout<<"paga fillestare "<<paga;
			cout<<"paga finale "<<llogaritpagen(paga);
		}
};
int main(){
	int ora1,ora2,paga1,paga2;
	string emeri1,emeri2;
	cout<<"vendos emerin dhe oren e punonjesit te pare "<<endl;
	cin>>emeri1>>ora1;
	cout<<"vendos emerin dhe oren e punonjesit te dyte "<<endl;
	cin>>emeri2>>ora2;
	cout<<"vendos pagen e pare "<<endl;
	cin>>paga1;
	cout<<"vendos pagen 2"<<endl;
	cin>>paga2;
	punonjes s1(emeri1,ora1);
	punonjes s2(emeri2,ora2);
	s1.afisho(paga1);
	s2.afisho(paga2);
	return 0;
}
*/


//ush te ndertohoet programi i cili krijon klasen farmaci te ruhen brenda furnitoret emrat e ilaceeve nr i stokut te ilaceve dhe emrimenaxherit. 
//ilacet te ruhen ne nje vektor te quajtur ilace. te kontrollohet nese gjendet ne ne farmaci ilaci me emrin paracetamol. 
//te afishohen rezultate dhe te krijohet nje metode e cila te bej afishimin e te dhenave.
class farmaci {
    public:
        string furnitori;
        int stoku;
        string emrimenaxherit;
        string ilace[3]; 
        farmaci(string emerilacesh[],string menaxher, string furni, int stok){
        	for(int i=0; i<3;i++){
        		emerilacesh[i]=ilace[i];
			}
			menaxher=emrimenaxherit;
			furni=furnitori;
			stok=stoku;
		}
	bool kontroll(){
		for(int i=0; i<3; i++){
		if(ilace[i]=="paracetamol"){
			return true;
		}
		else{
			return false;
		}
			}
	}
	void afishim(){
		cout<<"furnitori eshte "<<furnitori<<endl;
		cout<<"menaxheri eshte "<<emrimenaxherit<<endl;
		cout<<"numri i ilaceve "<<stoku<<endl;
		for(int i=0; i<3; i++){
			cout<ilace[i]<<" "<<endl;
		}
		cout<<endl;
	}
};
int main(){
	string ilace[]={"paracetamol", "ibubrofen", "antrikorp"};
	farmaci g("paracetamol", "ema", "aliexpress", 3);
	g.afishim();
	if(g.kontroll()){
		cout<<"ka paracetamol ";
	}
	else{
		cout<<"ska paracetamol "<<endl;
		return 0;
	}
}
