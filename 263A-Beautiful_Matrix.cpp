#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int row, col,count;

    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int n;
            cin >> n;
            matrix[i][j] = n;
        }
    }

    for(int k=0;k<5;k++){
        for(int l=0;l<5;l++){
            if(matrix[k][l]==1){
                row = k;
                col = l;
                break;
            }
        }
    }

    count = abs(row-2) + abs(col-2);

    cout << count << endl;

    return 0;
}