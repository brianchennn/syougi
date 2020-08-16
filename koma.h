#ifndef KOMA
#define KOMA
#include<string>
using namespace std;
class Koma{
public:
    Koma();
    Koma(string str);
    Koma(string str, bool syo);
    bool nari;
    string name;
    char code;
    string kanji;
    bool syoyusya; //0:senti , 1:gote
};

#endif