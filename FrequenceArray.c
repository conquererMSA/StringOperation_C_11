#include<stdio.h>
int main(){
    int lenOfArray;
    scanf("%d",&lenOfArray);
    int arr[lenOfArray];
    for(int i=0; i<lenOfArray; i++){
        scanf("%d",&arr[i]);
    }
    int countArr[101]={0};
    //countArr=[0,0,0]
    for(int i=0; i<lenOfArray; i++){
       int value=arr[i];
       countArr[value]++;
    }
    for(int i=0; i<=100; i++){
       printf("%d\n",countArr[i]);
    }
    return 0;
}