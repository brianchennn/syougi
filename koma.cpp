#include"koma.h"
#include"ban.h"
#include<iostream>
Koma::Koma(){
    name = "nasi";
    syoyusya = false;
    nari = false;
}

Koma::Koma(string str){
    name = str;
    if(str == "gyousya" or str == "g" or str == "香" or str == "香"){
        name = "gyousya";
        code = 'g';
        kanji = "香";
    }else if (str == "keima" or str == "k" or str == "桂" or str == "桂"){
        name = "keima";
        code = 'k';
        kanji = "桂";
    }else if (str == "gin" or str == "G" or str == "銀" or str == "銀"){
        name = "gin";
        code = 'G';
        kanji = "銀";
    }else if (str == "kin" or str == "K" or str == "金" or str == "金"){
        name = "kin";
        code = 'K';
        kanji = "金";
    }else if (str == "tama" or str == "T" or str == "玉" or str == "玉"){
        name = "tama";
        code = 'T';
        kanji = "玉";
    }else if (str == "fu" or str == "f" or str == "步" or str == "歩"){
        name = "fu";
        code = 'f';
        kanji = "歩";
    }else if(str == "nasi" or str == "n" or str == "_"){
        name = "nasi";
        code = 'n';
        kanji = "  ";
    }else if(str == "hisya" or str == "h" or str == "飛" or str == "飛"){
        name = "hisya";
        code = 'h';
        kanji = "飛";
    }else if(str == "kaku" or str == "k" or str == "角" or str == "角"){
        name = "kaku";
        code = 'k';
        kanji = "角";
    }else{
        cout<<"そんな駒がない！"<<endl;
        name = "error";
        code = 'E';
        kanji = "誤";
    }
    nari = 0;
    syoyusya = 0;
}

Koma::Koma(string str, bool syo){
    syoyusya = syo;
}
vector<pair<int,int> > Koma::kougekihani(int suji, int dan, Ban *ban){
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
                    if(ban->koma[suji][i].name!="nasi")break;
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
                    if(ban->koma[suji][i].name!="nasi")break;
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
    }else if(name == "kin"){
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
                if(dan+1 <= 8 ){
                    hani.push_back(pair<int,int>(suji,dan+1));
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
                if(dan-1 >= 0){
                    hani.push_back(pair<int,int>(suji,dan-1));
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
                    if(ban->koma[suji][i].name!="nasi")break;
                }
                for(int i = dan+1 ; i<=8; i++){
                    hani.push_back(pair<int,int>(suji,i));
                    if(ban->koma[suji][i].name!="nasi")break;
                }
                for(int i = suji-1 ; i>=0; i--){
                    hani.push_back(pair<int,int>(i,dan));
                    if(ban->koma[i][dan].name!="nasi")break;
                }
                for(int i = suji+1 ; i<=8; i++){
                    hani.push_back(pair<int,int>(i,dan));
                    if(ban->koma[i][dan].name!="nasi")break;
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
            if(nari == 0){
                for(int i = dan-1,j= suji -1; i>=0&&j>=0 ; i--,j--){
                    hani.push_back(pair<int,int>(j,i));
                    if(ban->koma[j][i].name!="nasi")break;
                }
                for(int i = dan+1,j= suji -1; i<=8 && j>=0 ; i++,j--){
                    hani.push_back(pair<int,int>(j,i));
                    if(ban->koma[j][i].name!="nasi")break;
                }
                for(int i = dan+1,j= suji +1; i<=8&&j<=8 ; i++,j++){
                    hani.push_back(pair<int,int>(j,i));
                    if(ban->koma[j][i].name!="nasi")break;
                }
                for(int i = dan-1,j= suji +1; i>=0 && j<=8 ; i--,j--){
                    hani.push_back(pair<int,int>(j,i));
                    if(ban->koma[j][i].name!="nasi")break;
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