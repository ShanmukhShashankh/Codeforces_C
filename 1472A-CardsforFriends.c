#include<stdio.h>
int main(){
    int t,w,h,n,sheets;
    scanf("%d", &t);
    while(t!=0){
        sheets = 1;
        scanf("%d %d %d",&w, &h, &n);
        while(w%2==0 || h%2==0){
            if(w%2==0 && h%2==0){
            w = w/2;
            h = h/2;
            sheets = sheets*4;
            }
            else if(w%2 == 0){
            w = w/2;
            sheets = sheets*2;
            }
            else if(h%2==0){
            h = h/2;
            sheets = sheets*2;
            }
        }
    if(sheets>=n){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    t-=1;
}
    return 0; 
}
