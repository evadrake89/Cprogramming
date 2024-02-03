// #include <cs50.h>
#include <stdio.h>
#include <string.h>
void get_string(char* s,char* answer){
    printf("%s",s);
    scanf("%s", answer);
}
int main(){
    char* answer;
    get_string("What's your name? ",answer);
    printf("Hello, %s\n",answer);
    return 0;
}