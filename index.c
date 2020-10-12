#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main(){
    int a,b,t;
    while(scanf("%d%d",&a,&b)!=EOF){
        while(b!=0){
            t = b;
            b = a%b;
            a = t;
        }
        printf("%d\n",a);
    }
    return 0;
}