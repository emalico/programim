#include <iostream>
using namespace std;
class person{
	public:
		string emer;
		int id;
		person(string emer1, int id1){
			emer=emer1;
			id=id1;
			cout<<"une jame "<<emer<<"dhe id ime personale qe s duhet treguar por skagje se s eshte me verte eshte "<<id<<endl;
		}
		//funksione per shfaqe
		void tedhenat( ){             //pasi nuk do kthejm gje
	cout<<"quhem "<<emer<<" dhe id "<<id<<endl;
	}
};
int main(){
	person pe1("ema",89);
	person pe2("david",67);
	pe1.tedhenat();
	pe2.tedhenat();
	
	return 0;
}
