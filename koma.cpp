#include"koma.h"
#include<iostream>
Koma::Koma(){
    name = "nasi";
    syoyusya = false;
}

Koma::Koma(string str){
    name = str;
    if(str == "gyousya" or str == "g"){
        name = "gyousya";
        code = 'g';
        kanji = "香";
    }else if (str == "keima" or str == "k"){
        name = "keima";
        code = 'k';
        kanji = "桂";
    }else if (str == "gin" or str == "G"){
        name = "gin";
        code = 'G';
        kanji = "銀";
    }else if (str == "kin" or str == "K"){
        name = "keima";
        code = 'K';
        kanji = "金";
    }else if (str == "tama" or str == "T"){
        name = "tama";
        code = 'T';
        kanji = "玉";
    }else if (str == "fu" or str == "f"){
        name = "fu";
        code = 'f';
        kanji = "步";
    }else if(str == "nasi" or str == "n"){
        name = "nasi";
        code = 'n';
        kanji = "_ ";
    }

    nari = false;
    syoyusya = false;
}

Koma::Koma(string str, bool syo){
    name = str;
    syoyusya = syo;
}