#include <iostream>
using namespace std;
class Student {
public:
    int id;
    string emri;
};

int main() {
    Student studenti;
    studenti.id = 2;
    studenti.emri = "Xhon";

    cout << "ID eshte " << studenti.id << ", Emri eshte " << studenti.emri <<endl;

    return 0;
}

