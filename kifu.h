#ifndef KIFU
#define KIFU
#include"koma.h"
#include"itte.h"
#include<vector>
#include<map>
#include<cstring>
class Kifu{
public:
    Kifu();
    void Sort();
    void Search();
    void Print();
    void Add(int tezu,Itte itte);
    vector<pair<int,Itte> > kifu;
    
};
#endif