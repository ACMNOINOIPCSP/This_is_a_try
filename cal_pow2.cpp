#include <bits/stdc++.h>
using namespace std;
int a[10000];
int main(){
    int n,x,len = 1,index;
    cin >> n >> index;
    a[1] = 1;
    for(int i = 1;i<=n;i++){
        x = 0;
        for(int j = 1;j<=len;j++){
            a[j] = a[j] * index + x;
            x = a[j] / 10;
            a[j] %= 10;
            if(x != 0 && j == len) len++;
        }
    }
    for(int i = len;i>=1;i--){
        cout << a[i];
    }
    return 0;
}