#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int a[101],c[101];
int main(){
    char a1[1001],b1[1001];
    gets(a1);
    int lena,x = 0,lenc,b;
    b = 13;
    lena = strlen(a1);
    for(int i = 0;i<=lena - 1;++i)
        a[i + 1] = a1[i] - 48;
    for(int i = 1;i<=lena;++i)
    {
        c[i] = (x * 10 + a[i]) / b;
        x = (x * 10 + a[i])%b;
    }
    lenc = 1;
    while(c[lenc] == 0 && lenc < lena) lenc++;
    for(int i = lenc;i<=lena;++i) cout << c[i];
    cout << endl;
    cout << x;
    return 0;
}