#ifndef KOMA
#define KOMA
#include<string>
#include<vector>
#include<map>

using namespace std;
class Ban;
class Koma{
public:
    Koma();
    Koma(string str);
    Koma(string str, bool syo);
    vector<pair<int,int> > kougekihani(int suji, int dan,Ban *ban);
    bool nari;
    string name;
    char code;
    string kanji;
    map<int,int> ichi;
    bool syoyusya; //0:senti , 1:gote
};

#endif