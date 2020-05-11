#include <stdio.h>
void main()
{


    char ch,*ptr;
    printf("Enter character  ");
    scanf("%c",&ch);
    ptr=&ch;


        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u'){
            printf("Entered character '%c' is vowel",*ptr);
        }
        else{
            printf("Entered character '%c' is consonant",*ptr);
        }

}
