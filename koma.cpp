#include"koma.h"
#include<iostream>
Koma::Koma(){
    name = "nasi";
    syoyusya = false;
    nari = false;
}

Koma::Koma(string str){
    name = str;
    if(str == "gyousya" or str == "g" or str == "香"){
        name = "gyousya";
        code = 'g';
        kanji = "香";
    }else if (str == "keima" or str == "k" or str == "桂"){
        name = "keima";
        code = 'k';
        kanji = "桂";
    }else if (str == "gin" or str == "G" or str == "銀"){
        name = "gin";
        code = 'G';
        kanji = "銀";
    }else if (str == "kin" or str == "K" or str == "金"){
        name = "keima";
        code = 'K';
        kanji = "金";
    }else if (str == "tama" or str == "T" or str == "玉"){
        name = "tama";
        code = 'T';
        kanji = "玉";
    }else if (str == "fu" or str == "f" or str == "步"){
        name = "fu";
        code = 'f';
        kanji = "步";
    }else if(str == "nasi" or str == "n" or str == "_"){
        name = "nasi";
        code = 'n';
        kanji = "  ";
    }else if(str == "hisya" or str == "h" or str == "飛"){
        name = "hihsya";
        code = 'h';
        kanji = "飛";
    }else if(str == "kaku" or str == "k" or str == "角"){
        name = "kaku";
        code = 'k';
        kanji = "角";
    }
    nari = false;
    syoyusya = false;
}

Koma::Koma(string str, bool syo){
    name = str;
    syoyusya = syo;
}
vector<pair<int,int> > Koma::kougekihani(int suji, int dan){
    vector<pair<int,int> > hani;
    if(name == "fu"){
        if(syoyusya == 0){
            if(nari == 0){
                if(dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
            }else if(nari == 1){
                if(suji+1 <= 8 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }else{
            if(nari == 0){
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }else if(nari == 1){
                if(suji+1 <= 8 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan+1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji-1,dan+1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }
    }else if(name == "keima"){
        if(syoyusya == 0){
            if(nari == 0){
                if(suji-1 >= 0 && dan-2 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-2));
                }
                if(suji+1 <= 8 && dan-2 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-2));
                }
            }else if(nari == 1){
                if(suji+1 <= 8 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }else{
            if(nari == 0){
                if(suji+1 <=8 && dan+2 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan+2));
                }
                if(suji-1 <=8 && dan+2 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan+2));
                }
            }else if(nari == 1){
                if(suji+1 <= 8 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan+1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji-1,dan+1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }
    }else if(name == "gyousya"){
        if(syoyusya == 0){
            if(nari == 0){
                for(int i = dan-1 ; i>=0; i--){
                    hani.push_back(pair<int,int>(suji,i));
                }
            }else if(nari == 1){
                if(suji+1 <= 8 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }else{
            if(nari == 0){
                for(int i = dan+1 ; i<=80; i++){
                    hani.push_back(pair<int,int>(suji,i));
                }
            }else if(nari == 1){
                if(suji+1 <= 8 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan+1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji-1,dan+1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }
    }else if(name == "gin"){
        if(syoyusya == 0){
            if(nari == 0){
                if(suji-1 >= 0 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-1));
                }
                if(dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji+1 <= 8 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-1));
                }
                if(suji-1 >= 0 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji-1,dan+1));
                }
                if(suji+1 <= 8 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan+1));
                }
            }else if(nari == 1){
                if(suji+1 <= 8 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }else{
            if(nari == 0){
                if(suji-1 >= 0 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-1));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
                if(suji+1 <= 8 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-1));
                }
                if(suji-1 >= 0 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji-1,dan+1));
                }
                if(suji+1 <= 8 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan+1));
                }
            }else if(nari == 1){
                if(suji+1 <= 8 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan+1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji-1,dan+1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }
    }else if(name == "gin"){
        if(syoyusya == 0){
            {
                if(suji+1 <= 8 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }else{
            {
                if(suji+1 <= 8 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan+1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji-1,dan+1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
            }
        }
    }else if(name == "tama"){
        {
            {
                if(suji+1 <= 8 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-1));
                }
                if(dan-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-1));
                }
                if(suji+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if(suji-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(suji+1 <= 8 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan+1));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
                if(suji-1 >= 0 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji-1,dan+1));
                }
            }
        }
    }else if(name == "hisya"){
        
            if(nari == 0){
                for(int i = dan-1 ; i>=0; i--){
                    hani.push_back(pair<int,int>(suji,i));
                }
                for(int i = dan+1 ; i<=8; i++){
                    hani.push_back(pair<int,int>(suji,i));
                }
                for(int i = suji-1 ; i>=0; i--){
                    hani.push_back(pair<int,int>(i,dan));
                }
                for(int i = suji+1 ; i<=8; i++){
                    hani.push_back(pair<int,int>(i,dan));
                }
            }
            if(nari == 1){
                if(suji+1 <= 8 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji+1,dan-1));
                }
                if(suji-1 >= 0 && dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji-1,dan-1));
                }
                if(suji-1 >= 0 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji-1,dan+1));
                }
                if(suji+1 <= 8 && dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji+1,dan+1));
                }
                
            }
        
        
    }else if(name == "kaku"){
        cout<<"我在這\n"<<endl;
            if(nari == 0){
                for(int i = dan-1,j= suji -1; i>=0&&j>=0 ; i--,j--){
                    hani.push_back(pair<int,int>(j,i));
                }
                for(int i = dan+1,j= suji -1; i<=8 && j>=0 ; i++,j--){
                    hani.push_back(pair<int,int>(j,i));
                }
                for(int i = dan+1,j= suji +1; i<=8&&j<=8 ; i++,j++){
                    hani.push_back(pair<int,int>(j,i));
                }
                for(int i = dan-1,j= suji +1; i>=0 && j<=8 ; i--,j--){
                    hani.push_back(pair<int,int>(j,i));
                }
            }
            if(nari == 1){
                if(suji+1 <= 8 ){
                    hani.push_back(pair<int,int>(suji+1,dan));
                }
                if( dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji,dan-1));
                }
                if(suji-1 >= 0 ){
                    hani.push_back(pair<int,int>(suji-1,dan));
                }
                if(dan+1 <= 8){
                    hani.push_back(pair<int,int>(suji,dan+1));
                }
                
            }
        
        
    }
    return hani;
}