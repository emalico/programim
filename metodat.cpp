#include <iostream>
using namespace std;

class Student {
public:
    string emer;
    int id;

    // Konstruktori i klas�s Student
    Student(string emer_in, int id_in) {
        emer = emer_in;
        id = id_in;
        cout << "Emri im eshte " << emer << " dhe ID ime eshte " << id << endl;
    }

    // Funksioni p�r t� shfaqur informacionin
    void shfaqinfo() {
        cout << "Une jam " << emer << " dhe ID ime eshte " << id << endl;
    }
};

int main() {
    // Krijojm� dy objekte t� klas�s Student dhe inicializojm� ato
    Student s1("Ardit", 101);
    Student s2("Lira", 102);

    // Shfaqim informacionin p�r secilin student
    s1.shfaqinfo();
    s2.shfaqinfo();

    return 0;
}

