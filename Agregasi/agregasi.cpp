#include <iostream>
#include <vector>
using namespace std;

#include "anak.H"
#include "ibu.H"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu("novi");
    anak* varAnak1 = new anak("fadhil");
    anak* varAnak2 = new anak("sultan");
    anak* varAnak3 = new anak("faiz");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);
};