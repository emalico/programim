#include<iostream>
using namespace std;
//klasa ska tip te dhena por e krijojme ne(tipin e saj te te dhenave)
	//objekti eshte nje insantac e klases
	
class Makina{
	public:
	string ngjyra;
	string marka;
	int vitprodhim;
	int kuajfuqi;
};
int main(){
	Makina m1;
	cout<<"vendos ngjyren"<<endl;
	cin>>m1.ngjyra;
	cout<<"vendos marken"<<endl;
	cin>>m1.marka;
	cout<<"vendos vitin e prodhimit"<<endl;	
	cin>>m1.vitprodhim;
	cout<<"vendos kuajfuqi"<<endl;
	cin>>m1.kuajfuqi;
	cout<<"te dhenat e makines jane: 1)ngjyra= "<<m1.ngjyra<<" 2)marka= "<<m1.marka<<" 3)viti i prodhimit = "<<m1.vitprodhim<<" 4) kuaj fuqi= "<<m1.kuajfuqi<<endl;
	 
	 Makina mercedes_benz;
	 
	return 0;
}
