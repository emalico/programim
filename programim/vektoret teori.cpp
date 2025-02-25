#include<iostream>
//vektoret
//cfare jane vektoret: jane tabela njepermasore te cilat ruajne te dhena te te njejtit tip.
//ne vektore ne punojme me pozicione ky pozicion ndryshe quhet index dhe fillon nga 0;(ne c++)
//sintaksa e vektortit:
//datatype Emri [permasa];
//inicializimi int nota[5]={10,9,8,9,10};
//indeksi 1 me pak se permasa e vektorit nga 5 ne 4 i=0.....
//per output ose afishim perdorim cikel
/*for(int i=0, i<5, i++){
	cout<<Nota[i];
}

using namespace std;
int main(){
//Ndërtoni një program në c++ i cili mer si parameter një vektor me emër A, dhe afishon numrat nga 1-6(numra të plotë).
int A[6]={1,2,3,4,5,6};
int i;
cout<<"vlerat e vektorit jane:"<<endl;
for(i=0;i<6;i++)

{

cout<<A[i]<<" ";

}
}
Ndertoni një program i cili deklaron një vektor G te tipit karakter,i cili afishon
tekstin: KLASA
#include<iostream>
using namespace std;
int main()
{
char G[]={"KLASA"};
int i;
cout<<"teksti:"<<endl;
for(i=0;i<5;i++)
{
cout<<G[i];
}
}

//u3Ndërtoni programin i cili mer si parametër një vektor me emër TEST dhe e
//mbush me vlera nga përdoruesi.(4 elemente te tipit integer)

using namespace std;
int main(){
int n;
int i;
cout<<"jep gjatesine e vektorit:"<<endl;
cin>>n;
int TEST[n];
cout<<"vendos elementet e vektorit"<<endl;
for(i=0;i<n;i++){
cin>>TEST[i];
}
for(i=0;i<n;i++){
cout<<TEST[i];
}
}


u4Gjeni nr max ne vektor

using namespace std;

int main()

{
int i,n,max;
cout<<"vendosin gjatesine e vektorit\n";
cin>>n;
int V[n];
cout<<"vendosni elementet e vektorit\n";
for(i=0;i<n;i++)
cin>>V[i];
max=V[0];
for(i=1;i<n;i++)
if(V[i]>max){
max=V[i];
}
cout<<"Numri me i madh ne kete vektor eshte:"<<" "<<max<<endl;
}


Ushtrimi 5
Gjeni prodhimin e numrave cift ne vektor.(numrat I vendos perdoruesi
using namespace std;
int main(){
int numrat[5],p=1;
cout<<"Fusni numrat"<<endl;
for(int i=0;i<5;i++){
cin>>numrat[i];
if(numrat[i]%2==0){
p*=numrat[i];
}
}
cout <<"Prodhimi i numrave cift eshte: "<<p<<endl;
}
u6Ushtrimi i meposhtem gjen sesa numra jane cift dhe sa numra jane tek ne nje
vektor.     
#include <iostream>
using namespace std;

int vektori(int a) {
    int j, V[50];
    int tek = 0, cift = 0;

    for (j = 1; j <= a; j++) {
        cout << "nr. " << j << " = ";
        cin >> V[j];

        if (V[j] % 2 == 0) {
            cift++;
        } else {
            tek++;
        }
    }

    cout << endl;
    if (cift == 1) {
        cout << cift << " numer eshte numer cift." << endl;
    } else if (cift != 1) {
        cout << cift << " numra jane numra cift." << endl;
    }

    return 0;
}

