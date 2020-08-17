#ifndef BAN
#define BAN
#include "koma.h"
#include "kifu.h"
#include "itte.h"
#include<iostream>
#include<vector>
using namespace std;
class Ban{

public:
    Ban();
    Koma koma[9][9];
    vector<Koma> sente_komadai;
    vector<Koma> gote_komadai;
    void sasu();
    void Print();
    vector<pair<int,int> > ugokerukoma(Koma koma,int suji,int dan);
    int tezu ; 
    Kifu kifu;
};

#endif