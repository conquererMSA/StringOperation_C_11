#include<stdio.h>
int main(){
    char c;
    int countArr[26]={0};
    //countArr=[0,0,0,0,...0]
    //countArr=[0,1,2,3,...25] index
    while(scanf("%c",&c)!=EOF){
        countArr[c-97]++;//countArr te index er value baranu hoiche. zokhon input charecter a asbe zar ascii value 97, tar theke 97 minus korle 0 hoy. Ekhane a/0 index er value 1 barunu hoyecehe. input theke zokhon charecter d asbe zae ascii value 100. 100 theke 97 minus korle 3 hoy. countArr er 3 index er value 1 baranu hoyeche
    }
    for(int i=0; i<26; i++){
        if(countArr[i]>0){
            printf("%c : %d\n",i+97,countArr[i]);
        }
    }
    return 0;
}