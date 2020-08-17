#ifndef ITTE
#define ITTE
#include"koma.h"
#include<vector>
#include<map>
#include<cstring>
class Itte{
public:
    Itte();
    Itte(int t);
    Itte(int t, int s, int d);
    Itte(string str);
    int tezu;
    int suji;
    int dan;
    Koma koma;
    string describe;
    
};
#endif