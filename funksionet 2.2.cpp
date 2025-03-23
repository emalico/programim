//funksionet
#include<iostream>
using namespace std;
/*//me parameter me vlere
int shuma(int n){
	int shuma=0;
	for(int i=1; i<=n; i++){// formula eshte s= n(n+1)/2
		shuma+=i;
	}
	return shuma; 
}
int main(){
int x;
cout<<"vendos vleren qe deshiron "<<endl;
cin>>x;
cout<<"shuma e "<<x<<" vlerave te para eshte "<<shuma(x);
	return 0;
}

//pa parameter me vlere
int fuqia( ){
	int a;
	cout<<"vendos vleren "<<endl;
	cin>>a;

return a*a;}
int main(){
	cout<<"vlera e fuqise eshte "<<fuqia( );
	return 0;
}


//funksioni i cili gjen me te madhin mes dy numrave
int nje(int a, int b){
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
	int a,b;
	cout<<"vendos dy vlera "<<endl;
	cin>>a>>b;
	cout<<"rezultati eshte "<<nje(a,b)<<endl;
	return 0;
}
*/
//paparameter pa vlere
void numra( ){
	for(int i=1; i<=100; i++){
		if(i%2==0){
			cout<<i<<endl;
		}
	}
}
int main(){
	cout<<"100 numrat e pare cifte jane "<<endl;
	numra( );//sepse kemi perdorur void prandaj nuk shenohet te cout
	
	}
}
