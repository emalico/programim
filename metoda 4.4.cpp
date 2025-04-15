#include <iostream>
using namespace std;

class Punonjes {
    int id;
    string emer;
    string mbiemer;
    int vjetersiNePune;
    int orePune;
    double lekePerOre;

public:
    // Konstruktor pa parametra q� merr t� dh�nat nga p�rdoruesi
    Punonjes() {
        cout << "Jep ID: ";
        cin >> id;
        cout << "Jep emrin: ";
        cin >> emer;
        cout << "Jep mbiemrin: ";
        cin >> mbiemer;
        cout << "Jep vjetersine ne pune (vite): ";
        cin >> vjetersiNePune;
        cout << "Jep oret e punes: ";
        cin >> orePune;
        cout << "Jep pagesen per ore (leke): ";
        cin >> lekePerOre;
    }

    // Metoda p�r t� llogaritur pag�n
    double llogaritPaga() {
        return orePune * lekePerOre;
    }

    // Metoda p�r t� afishuar t� dh�nat
    void afisho() {
        cout << "\n--- Te dhenat e punonjesit ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Emri: " << emer << " " << mbiemer << endl;
        cout << "Vjetersi ne pune: " << vjetersiNePune << " vite" << endl;
        cout << "Ore pune: " << orePune << endl;
        cout << "Pagesa per ore: " << lekePerOre << " leke" << endl;
        cout << "Paga totale: " << llogaritPaga() << " leke" << endl;
    }
};

int main() {
    Punonjes p;   // Krijohet objekti dhe merr te dhenat direkt
    p.afisho();   // Afishohet gjith�ka

    return 0;
}

