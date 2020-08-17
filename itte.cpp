#include"itte.h"
#include"koma.h"
#include<iostream>
#include<sstream>
using namespace std;
int kanji_to_int(string ch){
    if(ch == "一"){
        return 1;
    }else if(ch == "二"){
        return 2;
    }else if(ch == "三"){
        return 3;
    }else if(ch == "四"){
        return 4;
    }else if(ch == "五"){
        return 5;
    }else if(ch == "六"){
        return 6;
    }else if(ch == "七"){
        return 7;
    }else if(ch == "八"){
        return 8;
    }else if(ch == "九"){
        return 9;
    }else if(ch == "十"){
        return 10;
    }else if(ch == "零"){
        return 0;
    }
    return 0;
}
Itte::Itte(){
    cout<<"輸入此手資訊 格式：[手數][筋][段][駒][額外訊息]\n";
    string str;
    getline(cin,str);
    stringstream sl;
    sl.str("");
    sl.clear();
    sl << str;
    int num;
    string tmp;
    sl>>num;
    suji = num-1;
    
    sl>>num;
    dan = num-1;
    
    sl>>tmp;
    Koma k(tmp);
    koma = k;

    sl>>tmp;
    if(!sl.fail())describe = tmp;
}
Itte::Itte(string str){
    stringstream sl;
    sl.str("");
    sl.clear();
    sl << str;
    int num;
    string tmp;

    sl>>num;
    suji = num-1;

    sl>>num;
    dan = num-1;
    
    sl>>tmp;
    Koma k(tmp);
    koma = k;
    sl>>tmp;
    if(!sl.fail()) describe = tmp;
}
