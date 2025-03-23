#include<iostream>
using namespace std;
//ush ndertoni klasen laptop me 3 atribute ndertoni dy objekte dhe therrisni nga nje atribut per secilin objekt
/*class laptop{
string ngjyra="red";
string marka="hp";
int vitProdhimi=2025;
};
int main(){
	laptop lap1,lap2;
	lap1.ngjyra;
	lap2.marka;
}

//krijoni klasen liber me atributet publike titull dhe vit botimi te krijohenm dy objekte iber 1 dhe liber 2 dhe ti jepen vlere variablave nga ne dhe te afishohen.
class Liber {
public:
    string titull;
    int vitBotimi;
};
int main() {
    Liber liber1, liber2;

    liber1.titull = "histori ";
    liber1.vitBotimi = 2005;

    liber2.titull = "tom sojeri";
    liber2.vitBotimi = 2021;

    cout << " librin 1" << endl;
    cout << "Titulli: " << liber1.titull << ", viti i botimit " << liber1.vitBotimi << endl;

    cout << " librin 2" << endl;
    cout << "titulli " << liber2.titull << ", viti i botimit " << liber2.vitBotimi << endl;

    return 0;
}
*/
//modifikimi nga useri
using namespace std;

class Liber {
public:
    string titull;
    int vitBotimi;
};

int main() {
    Liber liber1, liber2;

    cout << "librit 1 ";
    cin >> liber1.titull;
    cout << "jep vit botimin ";
    cin >> liber1.vitBotimi;

    cout << "librit 2 ";
    cin >> liber2.titull;
    cout << "jep vit botimin ";
    cin >> liber2.vitBotimi;

    cout << "Libri 1: " << liber1.titull << ", " << liber1.vitBotimi << endl;
    cout << "Libri 2: " << liber2.titull << ", " << liber2.vitBotimi << endl;

    return 0;
}

