#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    char a[200], b[100];
    scanf("%s %s",a,b);
    int lenOfA=strlen(a);
    int j=lenOfA;
    for(int i=0; i<=strlen(b); i++){
        a[j]=b[i];
        j++;
    }
    printf("A- %s",a);
    return 0;
}