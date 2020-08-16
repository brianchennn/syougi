#ifndef BAN
#define BAN
#include "koma.h"
#include<iostream>
#include<vector>
using namespace std;
class Ban{
public:
    Ban();
    Koma koma[9][9];
    vector<Koma> sente_komadai;
    vector<Koma> gote_komadai;
    void Print();
    int tezu; 
};

#endif