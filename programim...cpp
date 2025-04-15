#include<iostream>
using namespace std;
/*//ush ndertoni programin ne c++ i cili krijon klasen punonjes. te ndertohet nje konstruktor i cili do mar si parameter dy atribute emri dhe sa oret e punes. 
//te ndertohet nje metod llogarit paga e cila merr 
//si parameter sa paguhet punonjesi per ore dhe kthen si rez pagen e tij. dhe te ndertohet nje metode e cila afishon te dhenat, te krijohen dy objekte s1,s2.
#include <iostream>
using namespace std;

class punonjes {
public:
    int oraPunes;
    string emri;
    //konstruktori
    punonjes(string emeri, int oraPPunes) {
        emri = emeri;
        oraPunes = oraPPunes;
    }
//metoda
    double llogaritpagen(int pagaPerOre) {
        return oraPunes * pagaPerOre;
    }
    //metoda
    void afishimi(int pagaPerOre) {
        cout << "emri " << emri << endl;
        cout << "ora e punes " << oraPunes << endl;
        cout << "paga per ore " << pagaPerOre << endl;
        cout << "paga totale " << llogaritpagen(pagaPerOre) << endl;
    }
};

int main() {
    string emri1, emri2;
    int ore1, ore2, paga1, paga2;

    cout << "vendos te dhenat per punonjesin e pare (emri, ora pune, paga per ore) ";
    cin >> emri1 >> ore1 >> paga1;

    cout << "vendos te dhenat per punonjesin e dyte (emri, ora pune, paga per ore) ";
    cin >> emri2 >> ore2 >> paga2;

    punonjes s1(emri1, ore1);
    punonjes s2(emri2, ore2);

    cout << "te dhenat e punonjesit 1 " << endl;
    s1.afishimi(paga1);

    cout << "te dhenat e punonjesit 2 " << endl;
    s2.afishimi(paga2);

    return 0;
}
*/


//ush te ndertohoet programi i cili krijon klasen farmaci te ruhen brenda furnitoret emrat e ilaceeve nr i stokut te ilaceve dhe emrimenaxherit. 
//ilacet te ruhen ne nje vektor te quajtur ilace. te kontrollohet nese gjendet ne ne farmaci ilaci me emrin paracetamol. 
//te afishohen rezultate dhe te krijohet nje metode e cila te bej afishimin e te dhenave.


class farmaci {
public:
    string furnitore;
    string emriIlaceve[6];  // Përdorim emrin e duhur për ilaçet
    int stokuIaceve;
    string Emrimenaxherit;

    // Konstruktor i cili inicializon të dhënat
    farmaci(string f, string ilacet[], int stoku, string emrim) {
        furnitore = f;
        stokuIaceve = stoku;
        Emrimenaxherit = emrim;
        for (int i = 0; i < 6; i++) {
            emriIlaceve[i] = ilacet[i];
        }
    }

    // Kontrollon nëse ekziston "paracetamol" në ilaçet
    bool kontroll() {
        for (int i = 0; i < 6; i++) {  // Kontrollojmë që indeksi të fillojë nga 0
            if (emriIlaceve[i] == "paracetamol") {
                return true;
            }
        }
        return false;
    }

    // Metoda që afishon të dhënat e farmaceutikës
    void afishim() {
        cout << "Furnitori: " << furnitore << endl;
        cout << "Emri i Menaxherit: " << Emrimenaxherit << endl;
        cout << "Stoku i Ilaçeve: " << stokuIaceve << endl;
        cout << "Ilacet: ";
        for (int i = 0; i < 6; i++) {
            cout << emriIlaceve[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Lista e ilaçeve
    string ilacet[] = {"paracetamol", "aspirin", "ibuprofen", "shurup", "tajlohot", "antitrup"};
    
    // Krijimi i objektit f me vlerat e dhëna
    farmaci f("Farmaci", ilacet, 100, "Ali Baba");

    // Afishimi i të dhënave të farmaceutikës
    f.afishim();

    // Kontrolli nëse ka "paracetamol"
    if (f.kontroll()) {
        cout << "Ka paracetamol dhe kushton 600 lek." << endl;
    } else {
        cout << "S'ka paracetamol." << endl;
    }

    return 0;
}
