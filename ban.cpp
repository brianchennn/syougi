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
#define RESET "\033[0m" 
#define BLACK "\033[30m" /* Black */ 
#define RED "\033[31m" /* Red */ 
#define GREEN "\033[32m" /* Green */ 
#define YELLOW "\033[33m" /* Yellow */ 
#define BLUE "\033[34m" /* Blue */ 
#define MAGENTA "\033[35m " /* Magenta */ 
#define CYAN "\033[36m" /* Cyan */ 
#define WHITE "\033[37m" /* White */ 
#define BOLDBLACK "\033[1m\033[30m" /* Bold Black */ 
#define BOLDRED "\033[1m\033[31m" /* Bold Red */ 
#define BOLDGREEN "\033[1m\033[32m"/* Bold Green */ 
#define BOLDYELLOW "\033[1m\033[33m" /* Bold Yellow */
#define BOLDBLUE "\033[1m\033[34m" /* Bold Blue */ 
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */ 
#define BOLDCYAN "\033[1m\033[36m " /* Bold Cyan */ 
#define BOLDWHITE "\033[1m\033[37m" /* Bold White */
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
    cout<<" ";
    for(int i=0;i<36;i++)cout<<"-";
    cout<<"\n";
    for(int i=0;i<9;i++){
        cout<<WHITE<<"|";
        for(int j=8;j>=0;j--){
            bool syo = koma[j][i].syoyusya;
            if(koma[j][i].nari == 0){
                if(koma[j][i].syoyusya == 0)
                    cout<<YELLOW<<koma[j][i].kanji;
                else 
                    cout<<BOLDRED<<koma[j][i].kanji;
            }else{
                
                if(koma[j][i].kanji == "桂")syo?cout<<BOLDRED<<"圭":cout<<YELLOW<<"圭";
                if(koma[j][i].kanji == "香")syo?cout<<BOLDRED<<"杏":cout<<YELLOW<<"杏";
                if(koma[j][i].kanji == "銀")syo?cout<<BOLDRED<<"全":cout<<YELLOW<<"全";
                if(koma[j][i].kanji == "歩")syo?cout<<BOLDRED<<"と":cout<<YELLOW<<"と";
                if(koma[j][i].kanji == "飛")syo?cout<<BOLDRED<<"竜":cout<<YELLOW<<"竜";
                if(koma[j][i].kanji == "角")syo?cout<<BOLDRED<<"馬":cout<<YELLOW<<"馬";
            }
            if(koma[j][i].name!="nasi"){
                if(koma[j][i].syoyusya==0) syo?cout<<BOLDRED<<"↑":cout<<YELLOW<<"↑";
                else syo?cout<<BOLDRED<<"↓":cout<<YELLOW<<"↓";
            }else{
                cout<<" ";
            }
            
            cout<<" ";
        }
        cout<<WHITE<<"|\n|";
        for(int j=0;j<36;j++)cout<<" ";
        cout<<WHITE<<"|\n";
    }
    cout<<' ';
    for(int i=0;i<36;i++)cout<<"-";
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
        cout<<"先手▲、指してください: ";
    }else{
        cout<<"後手△、指してください: ";
    }
    string str;
    getline(cin,str);
    if(str == "棋譜查閱" or str == "棋譜" or str == "kifu" or str == "Kifu"){
        kifu.Print();
        return;
    }else if( str == "盤面查閱" or str == "ban" or str == "盤面"){
        Print();
        return;
    }
    Itte itte(str, &kifu);
    if(itte.describe == "打"){
        if(koma[itte.suji][itte.dan].name != "nasi"){
            cout<<"打てない！\n";
        }else{
            if(tezu%2==1){
                int flag = 0;
                vector<Koma>::iterator it;
                for(int i=0;i<sente_komadai.size();i++){
                    if(itte.koma.name == sente_komadai[i].name){
                        it = sente_komadai.begin()+i;
                        flag = 1;break;
                    }
                }
                if(flag == 0){
                    cout<<"打てません！"<<endl;return;
                }
                else if(flag==1){
                    sente_komadai.erase(it);
                    koma[itte.suji][itte.dan] = Koma(itte.koma.name);
                    koma[itte.suji][itte.dan].syoyusya = 0;
                }
            }else{
                int flag = 0;
                vector<Koma>::iterator it;
                for(int i=0;i<gote_komadai.size();i++){
                    if(itte.koma.name == gote_komadai[i].name){
                        it = gote_komadai.begin()+i;
                        flag = 1;break;
                    }
                }
                if(flag == 0){
                    cout<<"打てません！"<<endl;return;
                }
                else if(flag==1){
                    gote_komadai.erase(it);
                    koma[itte.suji][itte.dan] = Koma(itte.koma.name);
                    koma[itte.suji][itte.dan].syoyusya = 1;
                }
            }
            
        }
        tezu++;
        return;
    }
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
        if(itte.describe == "成"){
            if(tezu%2 == 1){
                if( itte.dan == 0 || itte.dan == 1 || itte.dan == 2 
                    || ugokeru[0].second == 0 || ugokeru[0].second == 1 || ugokeru[0].second == 2){
                    koma[ugokeru[0].first][ugokeru[0].second].nari = 1;
                }else{
                    cout<<"なれません！";
                }
            }else{
                if( itte.dan == 6 || itte.dan == 7 || itte.dan == 8 
                    || ugokeru[0].second == 6 || ugokeru[0].second == 7 || ugokeru[0].second == 8){
                    koma[ugokeru[0].first][ugokeru[0].second].nari = 1;
                }else{
                    cout<<"なれません！";
                }
            }
        }
        kifu.Add(tezu,itte);
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
                //cout<<koma[j][i].kanji<<endl;
                vector<pair<int,int> > hani;
                vector<pair<int,int> >::iterator it;
                hani = koma[j][i].kougekihani(j,i,this);
            
                it = find(hani.begin(),hani.end(),pair<int,int>(suji,dan));
                if(it!=hani.end())vec.push_back(pair<int,int>(j,i));
            }
            
        }
    }
    return vec;
    
}