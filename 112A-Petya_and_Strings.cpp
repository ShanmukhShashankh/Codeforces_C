#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    bool lmao=true;

    cin >> a;
    cin >> b;

    for(int i = 0;i < a.size(); i++){
        a[i] = towlower(a[i]);
    }
    for(int i = 0;i < b.size(); i++){
        b[i] = towlower(b[i]);
    }

    for(int i = 0;i < a.size(); i++){
        if(a[i]>b[i]){
            cout << 1 << endl;
            lmao = false;
            break;
        }
        else if(a[i]<b[i]){
            cout << -1 << endl;
            lmao = false;
            break;
        }
    }

    if(lmao){
        cout << 0 << endl;
    }

    return 0;
}