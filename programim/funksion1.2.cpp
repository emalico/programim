#include<iostream>
using namespace std;
/*//me pa parameter me vlere
int fuqia( ) {
	int a;
	cout<<"jepni vleren : "<<endl;
	cin>>a;
	return a*a;
}

int main(){
	//cout<<" fuqia eshte "<<fuqia( )<<endl;//fuqia pa kllapat do afishonte vlera e nje variabli
	
	return 0;
}
*/
//me parameter me vlere
#include <iostream>
using namespace std;

// Funksioni që llogarit shumën e numrave nga 1 deri në n
int shuma(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) { //loop i cili do perseri per shumen dhe fillon nga 1
        sum += i;
    }
    return sum;
}

int main() {
    int a;
    cout << "Vendos nje numer: ";
    cin >> a;
    
    cout << "Shuma e numrave nga 1 deri ne " << a << " eshte: " << shuma(a) << endl;
    
    return 0;
}

