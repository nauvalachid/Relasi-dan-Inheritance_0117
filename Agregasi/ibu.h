#include <iostream> 
#include <vector>
#include "anak.h"
#include <string>
#ifndef IBU_H
#define IBU_H
using namespace std;


class ibu {
    public:
    string nama;
    vector<anak*>  daftar_anak;

    ibu(string pNama) : nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada \n";
    }

    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
    void tambahAnak(anak*);
    void cetakAnak();
};
void ibu::cetakAnak() {
    cout << "Daftar Anak dari Ibu \"" <<
    this->nama << "\":\n";
    for (int i = 0; i < daftar_anak.size(); i++) {
        cout << daftar_anak[i]->nama << "\n";
    }
    cout << endl;
}
#endif