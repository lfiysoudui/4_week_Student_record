#include <iostream>  //cin cout
#include <cmath>     //數學類
#include <vector>    //Vector
#include <string>    //String
#include <iomanip>   //輸出整理版面
#include <algorithm> //sort
using namespace std; //使用library中的標準命名空間


class strec{
    public:
        vector<string> stdfn;
        vector<string> stdln;
        vector<string> stdph;
        void insst(){
            string a,b,c;
            int i=0;
            cin >>a >>b >>c;
            if(a.length()>25||b.length()>30||c.length()>15||!isNum(c)){
                cout<< "input error"<< endl;
                return;
            }
             while(i<stdfn.size()){
                if(stdfn[i]==a){
                    cout<< "input error"<< endl;
                    return;
                    }
                ++i;
            }
            stdfn.push_back(a);
            stdln.push_back(b);
            stdph.push_back(c);
        };
        bool isNum(string x){
            for(int i=0;i<x.length();i++){
                if(x.at(i)<48 && x.at(i)>57)return false;
            }
            return true;
        }
        void delst(){
            int i = 0;
            string a,b,c;
            cin >>a >>b >>c;
            while(i<stdfn.size()){
                if(stdfn[i]==a){
                    stdfn.erase(stdfn.begin()+i);
                    stdln.erase(stdln.begin()+i);
                    stdph.erase(stdph.begin()+i);
                }
                ++i;
            }
        };
        void schst(){
            string a,b,c;
            int i = 0;
            cin >>a >>b >>c;
            while(i<stdfn.size()){
                if(stdfn[i]==a){
                    cout<< i<< endl;
                    return;
                    }
                ++i;
            }
            cout<< "search error"<< endl;
        };
        void print(int i){
            cout<< stdfn[i]<< " "<< stdln[i]<< " "<< stdph[i]<< endl;
        };
};



int main(){
    int i = 0;
    string inp,sch;
    strec asr;
    while(true){
        int i = 0;
        cin >>inp;
        if(inp == "insert"){
            asr.insst();
        }
        else if(inp == "delete"){
            asr.delst();
        }
        else if(inp == "search"){
            asr.schst();
        }
        else if(inp == "print"){
            if(asr.stdfn.size() == 0){
                cout <<"print error"<< endl;
            }
            else{
                while(i < asr.stdfn.size()){
                    asr.print(i);
                    ++i;
                }
            }
        }
        else cout << "input error"<< endl;
    }
}