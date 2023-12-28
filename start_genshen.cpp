#include <stdio.h>
#include <unistd.h>
char str_ID[255];
char str_pwd[255];

int main(void){
    printf("Ready to start Genshen Impoert\n");
    usleep(100000);
    printf("Print your ID:");
    int i = 0;
    scanf("%s %d", str_ID, &i);
    printf("Print your Password:");
    i = 0;
    scanf("%s %d", str_pwd, &i);
    printf("Loading:\n");
    int count = 10;
    while(count --){
        printf(".");
    }
    printf("\n Worring Please check your internetI \n");
    return 0;
}