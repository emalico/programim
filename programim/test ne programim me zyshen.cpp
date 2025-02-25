#include<iostream>
using namespace std;
int main(){
	//u1 cfare eshte nje vektore/matriks
	//***vektori nje tabel nje dimensionale e cila permban te dhenat me te njejtin emer dhe datatype, matriksa*****
	//***eshte tabel dydimensionale e cila permban te dhena me te njejten emer dhe datatype*****

	//u2 sintaksa e tyre
	//*** datatype emer [permase], matriksa--datatype emer [permase][permase]*****

	//u3 cfare eshte indeksi dhe pse fillon nga 0
	//*** eshte pozicioni ne nje vektore/matrikse dhe fillon nga zero sepse aty ka pikenisjen dhe shkon n-1****
	
	
	//u4 te formohet matriksa A[m][m] e cila permban notat e studenteve. te llogaritet mesatarja dhe te ruhet ne vektorin B[n][m].
	/*const int m=4;
	double mes=0;
	int A[m][m]={{10,7,9,10},{7,10,10,9},{9,8,9,9},{9,10,9,8}};
	double B[m];
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			mes+=A[i][j];
		}
		B[i]=mes/m;
		cout<<"mesatarja b eshte "<<endl;
		for(int i=0; i<m; i++){
		}
	
cout<<B[i]<<endl;
}
	
	//u5 jepet matriksa te vektorit te pare te vendosur ne lendet. kolona e pare eshte per nxenesit. gjej lenden me mesatare me te larte edhe nxenesin,
	string lendet[5]={"programim", "database" ,"ekonomi" ,"arkitekture", "rrjeta"};
	string nxenesit[4]={"ema", "emi", "aisel", "jona"};
	int Nota[4][5]={{10,10,10,10,10},
	{10,9,10,10,10},{4,10,7,6,7,},{10,10,8,10,9,}};
//gjejme njeher mesataren lendes
for(int i=0; i<5; i++){
	double mesatareL[ ]={0,0,0,0,0};
	double mesatareN[ ]={0,0,0,0};
	double sum=0;
	for(int j=0; j<4; j++){
		sum+=Nota[i][j];
	}
	int mesatare=sum/4;
	cout<<"mesatarja e "<<lendet[i]<<" eshte "<<mesatare<<endl;
	mesatareL[i];
}
//per nxenesin 
for(int i=0; i<4; i++){
		double mesatareL[ ]={0,0,0,0,0};
	double mesatareN[ ]={0,0,0,0};
	double sum=0;
	for(int j=0; j<5; j++){
		sum+=Nota[i][j];
	}
	int mesatare=sum/5;
	cout<<"mesatarja e "<<nxenesit[i]<<" eshte "<<mesatare<<endl;
    mesatareN[i];
}
int y=0;
int max=0;
for(int i=0; i<5; i++){
	if(max<mesatareL[i])
	max=mesatareL[i];
	y=1;
}
int x=0;
int Max=0;
for(int i=0; i<5; i++){
	if(Max<mesatareN[i])
	Max=mesatareN[i];
	x=1;
}

//u6 matriksa identite
int m;
cout<<"vendos sa vlera do ";
cin>>m;
int A[m][m];
cout<<"vlerat e matrikese "<<m<<"\n";
for(int i=0; i<m; i++){
	for(int j=0; j<m; j++){
		if(i==j){
			cout<<" 1 ";
		}
		else{
			cout<<" 0 ";
		}
	}
	cout<<endl;
}

//Programi i meposhtem ben te mundur perseritjen e nje emri ne nje matrice aq here sa e vendos perdoruesi.
int n;
cout<<"vendos sa rreshta do "<<endl;
cin>>n;
int m;
string emri;
cout<<"vendos sa kolona do "<<endl;
cin>>m;
cout<<"si quhesh "<<endl;
cin>>emri;
int A[n][m];
for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		A[i][j]=emri;
	}

for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
	cout<<A[i][j]<<" ";
	}
}
	cout<<endl;
}

//Programi I meposhtem ben te mundur gjetjen e shumes se anetareve te nje matrice ku numri I rreshtave dhe kolonave vendoset nga perdoruesi.
	//shuma e dy matriksave
	int n;
	cout<<"vendos sa rreshts do "<<endl;
	cin>>n;
	int m;
	cout<<"sa kolona do "<<endl;
	cin>>m;
		int sh=0;
	int M[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"vendos vlerat [ "<<i<<" ][ "<<j<<" ]"<<endl;
			cin>>M[i][j];
		}
}
		cout<<endl;

	cout<<"-----------------";
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
		cout<<M[i][j]<<" ";
		sh+=M[i][j];
		}
	}
	cout<<"-----------------";
	cout<<"shuma eshte "<<sh<<endl;
	cout<<endl;
	
	
//	Të formohen matricaA(m,m)e cila përmban notat e studentëve. Të llogaritet nota mesatare e secilit student dhe ajo të ruhet në vektorinB(m,n).	
const int m=4;
double mes=0;
int A[m][m]={
{10,7,9,10},
{7,10,10,9},
{9,8,9,9}, {9,10,9,8}};
int B[m];
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
		mes+=A[i][j];
			B[i]=mes/m;	
		}
	}
	cout<<endl;
	for(int i=0; i<m; i++){
		cout<<"mesatarja ne vektorin b eshte "<<B[i]<<" ";	
	}
	cout<<endl;
	
	
	//Jepet matrica. te vektori pare jane te vendosura lendet. Kolona e pare esht per nxenesit. gjej 
	//lenden me mesataren me te larte dhe nxenesin me mesataren me te larte
string lendet[5] = {"Programim", "Rrjeta", "DB", "CP", "Ekonomi"};
string nxenesit[4] = {"Albi", "Ronald", "Ledio", "Mateo"};
int notat[4][5] = {
    {10, 10, 10, 10, 10},
    {10, 9, 10, 10, 10},
    {4, 10, 7, 6, 7},
    {10, 10, 8, 10, 9},
};

int mesataretL[] = {0, 0, 0, 0, 0};
int mesataretN[] = {0, 0, 0, 0};
//gjejme mesataret e lendeve
for(int i=0; i<5; i++){
	float shuma=0;
	for(int j=0; j<4; j++){
	shuma+=notat[i][j];
	}
	
		double mes=shuma/4;
	cout<<"mesataret e "<<lendet[i]<<" jane "<<mes<<endl;
	mesataretL[i]=mes;
}
cout<<endl;
for(int i=0; i<4; i++){
	float shuma=0;
	for(int j=0; j<5; j++){
	shuma+=notat[i][j];
	}
	double mes=shuma/5;
	cout<<"mesatarja e "<<nxenesit[i]<<" eshte "<<mes<<endl;
	mesataretN[i]=mes;
}
cout<<endl;

int y=0;
int max=0;
for(int i=0; i<5; i++){
	if(max<mesataretL[i]){
	max=mesataretL[i];
	y=i;
}
}
cout<<"lenda me mesatare me te larte eshte "<<mesataretL[y];
cout<<endl;
int X=0;
int Max=0;
for(int i=0; i<4; i++){
	if(Max<mesataretN[i]){
	Max=mesataretN[i];
	X=i;
}
}

cout<<"nxenesi me mesatare me te larte eshte "<<mesataretN[X];
cout<<endl;

//Jepet matrica A me m rreshta dhe n kolona. Të afishohet vektori V që mban elementët pozitiv të matricës A.
int n;
cout<<"vendos nr e rreshtave "<<endl;
cin>>n;
int m;
cout<<"vendos nr e kolonave "<<endl;
cin>>m;
int A[n][m];
int p=0;
cout<<"vendos vlerat "<<endl;
for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		cin>>A[i][j];
		if(A[i][j]>0){
			cout<<A[i][j]<<" ";
			p++;
		}
	}
	int V[p];
	int l=0;
	cout<<"vlerat pozitive "<<endl;
	for(int i=0; i<l; i++){
		for(int j=0; j<m; j++){
		V[l]=A[i][j];
	}
		cout<<"vlerat pozitive jane "<<V[l]<<endl;
	}
}

//Jepet vektori V[n]. Të ndërtohet programi që afishon vektorin X me element që janë në pozicionet teke dhe vektorin Y me element që janë në pozicionet cifte.
int n;
cout<<"vendos sa vlera do "<<endl;
cin>>n;
int k=0;
int t=0;
	int V[n], X[k], Y[t];
cout<<"vendos vlerat "<<endl;
for(int i=0; i<n; i++){
cin>>V[i];
if(i%2==0){
	X[k]=V[i];
	k++;
}

if(i%2!=0){
	Y[t]=V[i];
	t++;
}
}
cout<<"pozicionet teket jane "<<endl;
for(int i=0; i<k; i++){
	cout<<X[i]<<" "<<endl;
}
cout<<"pozicionet cifte jane "<<endl;
for(int i=0; i<t; i++){
	cout<<Y[i]<<" "<<endl;
}
*/

	return 0;
}
