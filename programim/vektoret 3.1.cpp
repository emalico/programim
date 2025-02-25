#include<iostream>
using namespace std;
int main(){
	/*
	//u1 jepet vektori a[n] te ndertohet nje program qe krijon nje vektore te ri b[n]i barabarte 3*A[i]
int n;
cout<<"sa vlera do "<<endl;
cin>>n;
int A[n], B[n];
cout<<"vendos vlerat "<<endl;
for(int i =0; i<n; i++){
	cin>>A[i];
}
for(int i=0; i<n; i++){
	B[i]= 3*A[i];
}
for(int i=0; i<n; i++){
	cout<<B[i]<<" "<<endl;// duhet b[i]
}
cout<<endl;



	//jepet vektori b[n] me elementet shumefishat e 5, formoni v1 me to
		int n;
		cout<<"sa vlera do "<<endl;
		cin>>n;
		int B[n];
		int k;// ka ne fillim permasen 0 dhe e perdorim si indeks jo me inteksin i
		int V1[k];
		cout<<"vendos vlerat "<<endl;
		for(int i=0; i<n; i++){
			cin>>B[i];
			}
			for(int i=0; i<n; i++){
		if(B[i]%5==0){
			V1[k]=B[i];
			k++;
		}
			}
			cout<<"shumefishat jane "<<endl;
			for(int i=0; i<k; i++){
	cout<<V1[i]<<" ";
	}

	
	//jepet vektori Numer[n] i cili ruan numra te plote, nese ne vektore ka nje element te barabarte me Numer[a] ai te hiqet 
    int n;
    cout << "Jepni numrin e elementeve te vektorit ";
    cin >> n;
    int Numer[n];
    cout << "Jepni elementet e vektorit ";
    for (int i = 0; i < n; i++) {
        cin >> Numer[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (Numer[i] == Numer[j]) {
               
                for (int k = j; k < n - 1; k++) {
                    Numer[k] = Numer[k + 1];
                }
                n--;
                j--; 
            }
        }
    }
    cout << "Vektori ";
    for (int i = 0; i < n; i++) {
        cout << Numer[i] << " ";
    }
    cout << endl;               */
 
	//jepet vektori Max[n] te ndertohet nje program qe gjen sa here ndeshet vlera maximale.
         
		 int n;
		 cout<<"vendos vlerat "<<endl;
		 cin>>n;
		 int Max[n];
		 cout<<"vlerat jane "<<endl;
		 for(int i =0; i<n; i++){
		 	cin>>Max[i];
		 }
		 int MaxValue = Max[0], count =0;//count fillon numerimin
		 for(int i=0; i<n; i++){
		 	if(Max[i]>MaxValue){  
            MaxValue = Max[i];
            count = 1;
            
        } else if (Max[i] == MaxValue) {
            count++;
        }
    }

    cout << "Vlera maksimale eshte: " << MaxValue << endl;
    cout << "Ajo ndeshet: " << count << " here" << endl;   
	/*		 
	//jepet vektori V[50] numra te plote. kontrollo nese ekziston nje numer qe te jete i barabarte me mesataren e tij.nese po te jepet pozicioni i ketij elementin.
    int V[50], n;
    cout << "Jepni numrin e elementeve te vektorit (max 50): ";
    cin >> n;

    
    cout << "sa vlera do ";
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    // Llogaritja e mesatares
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += V[i];
    }
    float average = (float)sum / n;

    // Kontrollojmë nëse ndonjë element është i barabartë me mesataren
    for (int i = 0; i < n; i++) {
        if (V[i] == average) {
            cout << "Numeri " << V[i] << " eshte i barabarte me mesataren ne pozicionin: " << i << endl;
            return 0;
        }
    }

    cout << "Nuk ekziston asnje numer i barabarte me mesataren." << endl;
    


	//jepet  vektori A[n] ndertoni programin qe vlerat e  vektorit A te ndodhura ne pozicionit tek ti kalojne vektorit T dhe cift C. te afishohet vektori.	//

    int n;
    cout << "sa vlera do: ";
    cin >> n;

    int A[n];
    int  T[n], C[n];

  
    cout << "Jepni elementet : ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Kalimi i elementeve në vektorët T dhe C
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            C.push_back(A[i]); // Elementet në pozita çift
        } else {
            T.push_back(A[i]); // Elementet në pozita tek
        }
    }

   
    cout << "Vektori C  ";
    for (int i = 0; i < C.size(); i++) {
        cout << C[i] << " ";
    }

    cout << "Vektori T : ";
    for (int i = 0; i < T.size(); i++) {
        cout << T[i] << " ";
    }

    cout << endl;
*/
    return 0;
}

