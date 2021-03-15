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
        vector<int> stdph;
        void insst(){
            string a,b;
            int c;
            cin >>a >>b >>c;
            stdfn.push_back(a);
            stdln.push_back(b);
            stdph.push_back(c);
        };
        void delst(){
            int i = 0;
            string a,b;
            int c;
            cin >>a >>b >>c;
            while(i<stdfn.size()){
                if(stdfn[i]!=a) break;
                stdfn.erase(i);
                stdln.erase(i);
                stdph.erase(i);
                ++i;
            }
        };
        void schst(){
            string a,b;
            int c;
            int i = 0;
            cin >>a >>b >>c;
            while(i<stdfn.size()){
                if(stdfn[i]!=a) break;
                cout<< i<< endl;
                ++i;
            }

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
        cout << "well function";
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