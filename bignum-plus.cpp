#include <bits/stdc++.h>
using namespace std;
int a[1000],b[1000],c[1000];
char al[1000],bl[1000];
int main(){
    int la,lb,lc,x = 0;
    gets(al);gets(bl);
    la = strlen(al),lb =strlen(bl);
    for(int i = 0;i<=la - 1;i++) a[la - i] = al[i] - 48;
    for(int i = 0;i<=lb - 1;i++) b[lb - i] = bl[i] - 48;

    lc = 1;
    while(lc <= la || lc <= lb){
        c[lc] = a[lc] + b[lc] + x;
        x = c[lc] / 10;
        c[lc] %= 10;
        lc++;
    }

    c[lc] = x;
    while(c[lc] == 0 && lc > 1) lc--;
    for(int i = lc;i>=1;--i) cout << c[i];
    cout << endl;
    return 0;
}