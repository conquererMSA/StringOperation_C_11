#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s %s",a,b);
    int i=0;
    while(1){
        //check kunta age shesh hoiche
        if(a[i]=='\0'&&b[i]=='\0'){
            printf("Both are same");
            break;
        }
        else if(a[i]=='\0'){
            printf("A is smaller");
            break;
        }
        else if(b[i]=='\0'){
            printf("B is smaller");
            break;
        }
        //check  different
        if(a[i]==b[i]){
            i++;
        }
        else if(a[i]>b[i]){
            printf("B is smaller");
            break;
        }else{
            printf("A is smaller");
            break;
        }
    }
    return 0;
}















// int main(){
//     char a[100], b[100];
//     scanf("%s %s",a,b);
//     int i=0;
//     while(1){
//         //null checking
//         if(a[i]=='\0'&& b[i]=='\0'){
//             printf("Both are same");
//             break;
//         }
//         else if(a[i]='\0'){
//             printf("A is smaller");
//             break;
//         }
//         else if(b[i]=='\0'){
//             printf("B is smaller");
//             break;
//         }
//         if(a[i]==b[i]){
//             i++;
//         }else if(a[i]>b[i]){
//             printf("B is smaller");
//             break;
//         }
//         else{
//             printf("A is smaller");
//             break;
//         }
//     }
//     return 0;
// }