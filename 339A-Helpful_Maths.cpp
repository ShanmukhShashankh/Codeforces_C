#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    string s,final_s;
    cin >> s;
    for(int i=0; i<s.size(); i=i+2){
        final_s.push_back(s[i]);
    }

    sort(final_s.begin(),final_s.end());

    cout << final_s[0];
    for(int i=1; i<final_s.size();i++){
        cout << "+" << final_s[i];
    }
    cout << endl;
    return 0;
}