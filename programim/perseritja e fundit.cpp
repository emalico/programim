#include<iostream>
using namespace std;
int main(){
	/*int i=1;
	int sh=0;
	while(i<=10){
		sh+=i;
		i++;
	}
	cout<<"shuma eshte "<< sh<<endl;//sakte
	
	
	int sh=0;
	for(int i=1; i<=10; i++){
		sh+=i;
	}
	cout<<"shuma eshte"<<sh;//sakte
	int sh=0;
	int i=1;
	do{
		sh+=i;
		i++;
	}
	while(i<=10);
		cout<<"shuma eshte"<<sh<<endl;//sakte
	return 0;
	
	
	int p;
	cout<<"vendos permasat"<<endl;
	cin>>p;
	for(int i=1; i<p; i++){//cikli i pare kontrollon rreshta nga 1 deri te p
		for(int e=0; e<i; e++){//cikli i dyte vendos hapsirat boshte qe piramida te rrije ne qender
			cout<<" ";
		}
		for(int h=0; h<(p-i); h++){//formohet piramida
			cout<<"* ";
		}
		cout<<endl;//mos harro enld te for i dyte sepse mbyll rreshtat
}
	}
	*/
#include <iostream>
using namespace std;

int main() {
    int n;

    // K�rko nga p�rdoruesi numrin e rreshtave
    cout << "Jep numrin e rreshtave: ";
    cin >> n;

    // Cikli p�r t� printuar rreshtat
    for (int i = 0; i < n; ++i) {
        // Printo hap�sirat bosh n� fillim
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }

        // Printo yjet dhe hap�sirat bosh n� mes
        for (int j = i; j < n; ++j) {
            if (j == i || j == n - 1 || i == 0) {
                cout << "*"; // Printo yje n� skaje dhe rreshtin e par�
            } else {
                cout << " "; // Printo hap�sira bosh n� mes
            }
        }

        // Kalimi n� rreshtin tjet�r
        cout << endl;
    }

    return 0;
}

/*
int z;//(zgjedhja)
cout<<"zgjedhja e pare eshte drejtekendesh"<<endl;
cout<<"zgjedhja e dyte eshte trekendesh"<<endl;
cin>>z;
switch(z){
	case 1:{
		double a,b;
		cout<<"vendos a";
		cin>>a;
		cout<<"vendos b";
		cin>>b;
		
		double p= 2*a+2*b;
		double s= a*b;
		cout<<"siperfaqja dhe perimetri jane"<<s<<" "<<p<<endl;
		break;
	}
	case 2:{
		double a,b,c,h;
		cout<<"vendos a";
		cin>>a;
		cout<<"vendos b";
		cin>>b;
		cout<<"vendos lartesine";
		cin>>h;
		cout<<"vendos c";
		cin>>c;
		double s = ((b + a) * h) / 2;
          double p= a + b + c;
		cout<<"siperfaqja dhe perimetri jane"<<s<<" "<<p<<endl;
		break;
	}
	default:
            cout << "Zgjedhje e pavlefshme!" << endl;
            break;
     }
     return 0;
}*/
