#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",&s);
    int cnt[26]={0};
    for(int i=0; i<strlen(s); i++){
        // printf("%d ",s[i]-97);
        int value=s[i]-97;//a=97-97=0 b=98-97=1
        cnt[value]++;//0++ /1++ ...26++
    }
    for(int i=0; i<strlen(s);i++){
        int value=s[i]-97;
        if(cnt[value]!=0){
            printf("%c - %d\n",value+'a',cnt[value]);
        }
        cnt[value]=0;
    }
}