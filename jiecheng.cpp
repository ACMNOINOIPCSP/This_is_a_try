#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n,s,len = 1,a[10001];
int main(){
    scanf("%d",&n);
    a[1] = 1;
    for(int k = 1;k<=n;++k){
        for(int i = 1;i<=len;++i) a[i]*=k;
        for(int i = 1;i<=len;++i) {
            s = 0;
            if(a[i] > 9){
                a[i + 1] += a[i] / 10;
                a[i] %= 10;
                s = max(s,i + 1);
            }
        }
        len = max(len,s);
    }
    for(int i = len;i>=1;i--) printf("%d",a[i]);
    return 0;
}