#include"ban.h"


#include<iostream>
using namespace std;

Ban::Ban(){
    koma[0][0] = Koma("gyousya");
    koma[1][0] = Koma("keima");
    koma[2][0] = Koma("gin");
    koma[3][0] = Koma("kin");
    koma[4][0] = Koma("tama");
    koma[5][0] = Koma("kin");
    koma[6][0] = Koma("gin");
    koma[7][0] = Koma("keima");
    koma[8][0] = Koma("gyousya");
    koma[0][2] = Koma("fu");
    koma[1][2] = Koma("fu");
    koma[2][2] = Koma("fu");
    koma[3][2] = Koma("fu");
    koma[4][2] = Koma("fu");
    koma[5][2] = Koma("fu");
    koma[6][2] = Koma("fu");
    koma[7][2] = Koma("fu");
    koma[8][2] = Koma("fu");
    koma[7][1] = Koma("hisya");
    koma[1][1] = Koma("kaku");

    koma[0][0].syoyusya = 1;
    koma[1][0].syoyusya = 1;
    koma[2][0].syoyusya = 1;
    koma[3][0].syoyusya = 1;
    koma[4][0].syoyusya = 1;
    koma[5][0].syoyusya = 1;
    koma[6][0].syoyusya = 1;
    koma[7][0].syoyusya = 1;
    koma[8][0].syoyusya = 1;
    koma[0][2].syoyusya = 1;
    koma[1][2].syoyusya = 1;
    koma[2][2].syoyusya = 1;
    koma[3][2].syoyusya = 1;
    koma[4][2].syoyusya = 1;
    koma[5][2].syoyusya = 1;
    koma[6][2].syoyusya = 1;
    koma[7][2].syoyusya = 1;
    koma[8][2].syoyusya = 1;
    koma[1][1].syoyusya = 1;
    koma[7][1].syoyusya = 1; 
    
    koma[0][8] = Koma("gyousya");
    koma[1][8] = Koma("keima");
    koma[2][8] = Koma("gin");
    koma[3][8] = Koma("kin");
    koma[4][8] = Koma("tama");
    koma[5][8] = Koma("kin");
    koma[6][8] = Koma("gin");
    koma[7][8] = Koma("keima");
    koma[8][8] = Koma("gyousya");
    koma[0][6] = Koma("fu");
    koma[1][6] = Koma("fu");
    koma[2][6] = Koma("fu");
    koma[3][6] = Koma("fu");
    koma[4][6] = Koma("fu");
    koma[5][6] = Koma("fu");
    koma[6][6] = Koma("fu");
    koma[7][6] = Koma("fu");
    koma[8][6] = Koma("fu");
    koma[7][7] = Koma("kaku");
    koma[1][7] = Koma("hisya");
    koma[0][8].syoyusya = 0;
    koma[1][8].syoyusya = 0;
    koma[2][8].syoyusya = 0;
    koma[3][8].syoyusya = 0;
    koma[4][8].syoyusya = 0;
    koma[5][8].syoyusya = 0;
    koma[6][8].syoyusya = 0;
    koma[7][8].syoyusya = 0;
    koma[8][8].syoyusya = 0;
    koma[0][6].syoyusya = 0;
    koma[1][6].syoyusya = 0;
    koma[2][6].syoyusya = 0;
    koma[3][6].syoyusya = 0;
    koma[4][6].syoyusya = 0;
    koma[5][6].syoyusya = 0;
    koma[6][6].syoyusya = 0;
    koma[7][6].syoyusya = 0;
    koma[8][6].syoyusya = 0;
    koma[7][7].syoyusya = 0;
    koma[1][7].syoyusya = 0;
    for(int i=3;i<6;i++){
        for(int j=0;j<9;j++){
            koma[j][i] = Koma("nasi");
        }
    }
    koma[0][1] = Koma("nasi");
    koma[2][1] = Koma("nasi");
    koma[3][1] = Koma("nasi");
    koma[4][1] = Koma("nasi");
    koma[5][1] = Koma("nasi");
    koma[6][1] = Koma("nasi");
    koma[8][1] = Koma("nasi");
    koma[0][7] = Koma("nasi");
    koma[2][7] = Koma("nasi");
    koma[3][7] = Koma("nasi");
    koma[4][7] = Koma("nasi");
    koma[5][7] = Koma("nasi");
    koma[6][7] = Koma("nasi");
    koma[8][7] = Koma("nasi");

    sente_komadai.clear();
    gote_komadai.clear();
    tezu=1;
}
void Ban::Print(){
    int count = 0;
    cout<<"後手"<<endl;
    for(int i=0;i < gote_komadai.size();i++){
        cout<<gote_komadai[i].kanji;
        count++;
        if(count>8)cout<<endl;
    }
    cout<<endl;
    if(count==0)cout<<endl;
    for(int i=0;i<9;i++){
        for(int j=8;j>=0;j--){
            cout<<koma[j][i].kanji;
        }
        cout<<endl;
    }

    count = 0;
    for(int i=0;i < sente_komadai.size();i++){
        cout<<sente_komadai[i].kanji;
        count++;
        if(count>8)cout<<endl;
    }
    if(count==0)cout<<endl;
    cout<<"\n先手\n"<<endl;
}

#include"itte.h"
#include"kifu.h"

void Ban::sasu(){
    cout<<"(第"<<tezu<<"手) ";
    if(tezu%2 == 1){
        cout<<"先手、指してください: ";
    }else{
        cout<<"後手、指してください: ";
    }
    string str;
    getline(cin,str);
    if(str == "棋譜查閱"){
        kifu.Print();
        return;
    }else if( str == "盤面查閱"){
        Print();
        return;
    }
    Itte itte(str);
    kifu.Add(tezu,itte);
    vector<pair<int,int> > ugokeru;
    ugokeru = ugokerukoma(itte.koma, itte.suji, itte.dan);
    if(ugokeru.size()==0){
        cout<<"無効の手\n";
        return;
    }else if(ugokeru.size() >= 2){
        string des = itte.describe;
        if(des == "" or des == " "){
            cout<<"無効の手 衝突\n";
            return;
        }else if(des =="左"){
            cout<<"rew"<<endl;
            //這部分因為太複雜 還沒完成
        }
    }else if(ugokeru.size() == 1){
        Koma tmp = koma[itte.suji][itte.dan];
        if(tmp.name != "nasi"){
            if(tezu%2 == 1){
                if(tmp.syoyusya == 0){
                    cout<<"自分の駒を食っちゃダメよ！"<<endl;return;
                }else{
                    cout<<"吃"<<endl;
                    sente_komadai.push_back(tmp);

                }
            }else{
                if(tmp.syoyusya == 1){
                    cout<<"自分の駒を食っちゃダメよ！"<<endl;return;
                }else{
                    gote_komadai.push_back(tmp);

                }
            }
        }
        koma[itte.suji][itte.dan] = koma[ugokeru[0].first][ugokeru[0].second];
        Koma kkk("nasi");
        koma[ugokeru[0].first][ugokeru[0].second] = kkk;
    }
        /*if(des == "成"){
            if(tezu%2==1 && itte.dan!=0 && itte.dan!=1 && itte.dan!=2){
                cout<<"なれません！\n";
            }
        }*/

    tezu++;
}

vector<pair<int,int> > Ban::ugokerukoma(Koma k,int suji, int dan){// suji, dan是移動後的格子 j, i 是移動前的
    vector<pair<int,int> > vec;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(koma[j][i].name == k.name && 
              (koma[j][i].nari == k.nari || k.nari == 1) && 
               tezu%2 == !(koma[j][i].syoyusya) ){

                vector<pair<int,int> > hani;
                vector<pair<int,int> >::iterator it;
                hani = koma[j][i].kougekihani(j,i);
            
                it = find(hani.begin(),hani.end(),pair<int,int>(suji,dan));
                if(it!=hani.end())vec.push_back(pair<int,int>(j,i));
            }
            
        }
    }
    return vec;
    
}