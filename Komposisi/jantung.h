#include <iostream>
#ifndef JANTUNG_H
#define JANTUNG_H

using namespace std;

class jantung {
public:
    jantung() {
        cout << "Jantung dihidupkan\n" << endl;
    }

    ~jantung() {
        cout << "Jantung dimatikan\n" << endl;
    }
};
#endif