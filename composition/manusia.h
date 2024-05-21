#ifndef MANUSIA_H
#define MANUSIusia_H
using namespace std;

class manusia {
public
    string name;
    jantung varjantung;

    manusia(string pNama) : name(pName) {

    }
    ~manusia() {
    cout << name << " mati\n";
    }
};
#endif