#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s %s",&a,&b);
    // printf("%d",strlen(b)); //6 without null \ \o
    // printf("%s %s",a,b);
    for(int i=0; i<=strlen(b); i++){
        a[i]=b[i];
    }
    printf("%s %s",a,b);
    return 0;
}
//input: apple orange
//output: orangea orange