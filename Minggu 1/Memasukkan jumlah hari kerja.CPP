#include <iostream>
#include <conio>
#include <string>

using namespace std;

int main (){

int jumlahhari;
float jamkerja,totaljam,rata;

cout << "masukkan jumlah hari kerja  :";
cin  >> jumlahhari;

for (int i = 0; i <jumlahhari; i++) {
cout << "masukkan jam kerja ke-" <<i<<":";
cin >> jamkerja;
totaljam += jamkerja;
rata=totaljam/jumlahhari;
}

cout <<"\n total jam kerja:"<<totaljam <<"jam";
cout <<"\n total rata jam kerja:"<<rata <<"jam";

getche();
}




