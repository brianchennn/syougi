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
    koma[0][1] = Koma("fu");
    koma[1][1] = Koma("fu");
    koma[2][1] = Koma("fu");
    koma[3][1] = Koma("fu");
    koma[4][1] = Koma("fu");
    koma[5][1] = Koma("fu");
    koma[6][1] = Koma("fu");
    koma[7][1] = Koma("fu");
    koma[8][1] = Koma("fu");
    koma[0][8] = Koma("gyousya");
    koma[1][8] = Koma("keima");
    koma[2][8] = Koma("gin");
    koma[3][8] = Koma("kin");
    koma[4][8] = Koma("tama");
    koma[5][8] = Koma("kin");
    koma[6][8] = Koma("gin");
    koma[7][8] = Koma("keima");
    koma[8][8] = Koma("gyousya");
    koma[0][7] = Koma("fu");
    koma[1][7] = Koma("fu");
    koma[2][7] = Koma("fu");
    koma[3][7] = Koma("fu");
    koma[4][7] = Koma("fu");
    koma[5][7] = Koma("fu");
    koma[6][7] = Koma("fu");
    koma[7][7] = Koma("fu");
    koma[8][7] = Koma("fu");
    for(int i=2;i<7;i++){
        for(int j=0;j<9;j++){
            koma[j][i] = Koma("nasi");
        }
    }
    sente_komadai.clear();
    gote_komadai.clear();
}
void Ban::Print(){
    int count = 0;
    cout<<"後手"<<endl;
    for(int i=0;i < gote_komadai.size();i++){
        cout<<gote_komadai[i].kanji;
        count++;
        if(count>8)cout<<endl;
    }
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
    cout<<"先手"<<endl;
}