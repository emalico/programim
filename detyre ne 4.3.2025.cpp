//ndertoni funksionin i cili lexon nga 1-n numra nga useri dhe perdor funksionet per te gjetur  dhe afishuar shumen dhe prodhimin
#include <iostream>
using namespace std;

int shuma(int n) {
    int shuma = 0;
    for (int i = 0; i <= n; i++) { 
        shuma += i;
    }
    return shuma;
}

int prodhimi(int n) {
    int prodhimi = 1;
    for (int i = 1; i <= n; i++) { 
        prodhimi *= i;
    }
    return prodhimi;
}

int main() {
    int x;
    cout << "Vendosni nje numer ";
    cin >> x;

    cout << "Shuma e numrave deri ne " << x << " eshte " << shuma(x) << endl;
    cout << "Prodhimi i numrave deri ne " << x << " eshte " << prodhimi(x) << endl;

    return 0;
}

