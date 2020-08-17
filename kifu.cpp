#include"kifu.h"
#include<iostream>
using namespace std;

Kifu::Kifu(){
    kifu_map.clear();
}

void Kifu::Add(int tezu, Itte itte){
    int tezuu = tezu;
    kifu_map.insert(pair<int,Itte>(tezuu,itte));
}
void Kifu::Print(){
    if(kifu_map.size()==0){
        cout<<"還沒下第一手喔!^ ^\n";
    }
    for(int i=0;i<kifu_map.size();i++){
        cout<<"(第"<<i<<"手) "<< kifu_map[i].suji<<" "<<kifu_map[i].dan
            <<" "<<kifu_map[i].koma.name<<" "<<kifu_map[i].describe<<endl;
    }
}