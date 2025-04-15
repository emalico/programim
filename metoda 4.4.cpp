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
    // Konstruktor pa parametra që merr të dhënat nga përdoruesi
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

    // Metoda për të llogaritur pagën
    double llogaritPaga() {
        return orePune * lekePerOre;
    }

    // Metoda për të afishuar të dhënat
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
    p.afisho();   // Afishohet gjithçka

    return 0;
}

