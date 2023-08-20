#include <iostream>
using namespace std;
int main(){
    int bef = 0;
    int now = 0;
    int days = 0;
    cin >> days;
    // cout << "cin1[" << endl;
    for(int i=0; i<=days-1; i++) {
        cin >> now;
        // cout << "cin12:" << now << endl;
        // cout << "i:" << i << endl;
        if(i==0){
            bef = now;
            // cout << "continue" << endl;
            continue;
        }else{
            // cout << "loop1" << endl;
            if(bef==now){
                cout << "stay" << endl;
                // cout << "if" << endl;
            }else if(bef>now){
                cout << "down[" << bef-now << "]" << endl;
                // cout << "else if" << endl;
            }else{
                cout << "up[" << now-bef << "]" << endl;
                // cout << "else" << endl;
            };
            bef = now;
        };
        // cout << "loop[" << i << "]" << endl;
    };
};
