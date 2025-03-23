#include<iostream>
using namespace std;


  /*  string em[7] = {"Alban", "Arben", "Edlira", "Ermal", "Gerald", "Skerdi", "Monika"};
    string proj[5] = {"Proj1", "Proj2", "Proj3", "Proj4", "Proj5"};
    
    int fit[7][5] = {
        {500, 200, 200, 400, 170},
        {200, 300, 370, 700, 150},
        {550, 200, 250, 450, 300},
        {600, 650, 470, 850, 200},
        {300, 150, 150, 700, 220},
        {150, 200, 340, 550, 130},
        {400, 100, 100, 250, 200}
    };

    int min = 9999999; 
    string nxmult;

   
    for(int i = 0; i < 7; i++) {
        int totali = 0;
        for(int j = 0; j < 5; j++) {
            totali += fit[i][j]; 
        }

       
        if (totali < min) {
            min = totali;
            nxmult = em[i]; 
        }
    }

   
    cout << "nxenesi " << nxmult << " eshte " << min << endl;
*/
int main(){
    string Nxenes[5] = { "Nx1", "Nx2", "Nx3", "Nx4", "Nx5"};
    double Te_dhenat[5][4] = {
        {10, 8, 9, 10},
        {10, 10, 10, 10},
        {9, 8, 8, 9},
        {9, 10, 10, 9},
        {7, 7, 8, 8}
    };
    
    string nxenesiMeEulote = "", nxenesiMeLarte = "";
    double mesatarjaMeEulote = 100, mesatarjaMeLarte = 0; 
    for (int i = 0; i < 5; i++) {
        double shuma = 0;
        
        
        for (int j = 0; j < 4; j++) {
            shuma += Te_dhenat[i][j];
        }
        
       
        double mesatarja = shuma / 4;
        
        
        if (mesatarja < mesatarjaMeEulote) {
            mesatarjaMeEulote = mesatarja;
            nxenesiMeEulote = Nxenes[i];
        }
        
       
        if (mesatarja > mesatarjaMeLarte) {
            mesatarjaMeLarte = mesatarja;
            nxenesiMeLarte = Nxenes[i];
        }
    }
    
    cout << "Nxenesi me mesataren me te ulet " << nxenesiMeEulote << " me mesataren: " << mesatarjaMeEulote << endl;
    cout << "Nxenesi me mesataren me te lart " << nxenesiMeLarte << " me mesataren: " << mesatarjaMeLarte << endl;

    return 0;
}
    
