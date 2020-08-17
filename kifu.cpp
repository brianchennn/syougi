#include"kifu.h"
#include<iostream>
using namespace std;

Kifu::Kifu(){
    kifu.clear();
}

void Kifu::Add(int tezu, Itte itte){
    int tezuu = tezu;
    kifu.push_back(pair<int,Itte>(tezuu,itte));
}
void Kifu::Print(){
    if(kifu.size()==0){
        cout<<"還沒下第一手喔!^ ^\n";
    }
    for(int i=0;i<kifu.size();i++){
        cout<<i+1;
        if(i%2==0)cout<<"▲ ";
        else cout<<"△ ";
        cout<<kifu[i].second.suji+1<<" "<<kifu[i].second.dan+1
            <<" "<<kifu[i].second.koma.kanji<<" "<<kifu[i].second.describe<<endl;
    }
}