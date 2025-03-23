#include <iostream>
using namespace std;
//rijoni nje klas te quajtur student qe ruan nje variabel string emer dhe nje variabel te plote id 
//cakto vleren e id =2; dhe ate te emrit =john duke krijuar nje objekt te klases student caktoni 
//vleren dhe afishoni id nr tel dhe adresen e dy nxenesve me emer john dhe anna perkatesisht 
//duke krijuar 2 objekte te klasa student 
class Student {
public:
    int id;
    string emer, nrTel, adresa;

    Student(int i, string e, string n, string a) : id(i), emer(e), nrTel(n), adresa(a) {}

    void afisho() {
        cout << id << ", " << emer << ", " << nrTel << ", " << adresa << "\n";
    }
};
int main() {
    Student studenti1(2, "John", "0681234567", "Rruga A, Tirane");
    Student studenti2(3, "Anna", "0699876543", "Rruga B, Durres");
    
    studenti1.afisho();
    studenti2.afisho();
    
    return 0;
}
//beje qe te ket 3 atribute dhe 2 objekte ku te afishohet nje atribut per secilin objekt
class Makina {
public:
    string ngjyra;
    string marka;
    int vitprodhim;
};

int main() {
    Makina m1, m2;
    
    m1.ngjyra = "E kuqe";
    m1.marka = "BMW";
    m1.vitprodhim = 2020;
    
    m2.ngjyra = "E zeze";
    m2.marka = "Audi";
    m2.vitprodhim = 2018;
    
    cout << "Ngjyra e makines 1: " << m1.ngjyra << endl;
    cout << "Marka e makines 2: " << m2.marka << endl;
    
    return 0;
}

