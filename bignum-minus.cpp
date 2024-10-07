#include <bits/stdc++.h>
using namespace std;
char al[1000],bl[1000],cl[1000];
int a[1000],b[1000],c[1000];
int main(){
    int lena,lenb,lenc;
    scanf("%s %s",&al,&bl);
    lena = strlen(al);lenb = strlen(bl);
    for(int i = 0;i<=lena - 1;i++){
        a[lena - i] = int(al[i] - '0');
    }
    for(int i = 0;i<=lenb -1;i++){
        b[lenb - i] = int(bl[i] - '0');
    }
    for(int i = 1;i<=lena;i++){
        if(a[i] < b[i]){
            a[i] += 10;
            a[i + 1]--;
        }
        c[i] = a[i] - b[i];
    }
    lenc = lena;
    while(c[lenc] == 0 && lenc > 1) lenc--;
    for(int i = lenc;i>=1;i--){
        cout << c[i];
    }
    cout << endl;
}