#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strrev(char* str) { // for reversing a string
    int start = 0;        //starting index
    long int end = strlen(str) - 1;  //ending index-1 because ,index starts from 0..

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main(void)
{
    char string[100];// declare string
    char rev_String[100];//declare rev_String for storing reverse of the original string..
    scanf("%s",string);
    int flag;  //to know palindrome or not
    strrev(string);  //reverse the string and store in string
    strcpy(rev_String,string);//copy the reversed string(string) to rev_String..
    strrev(string);// again reverse the string to make it original(reverse(reverse(str))=original_Str)
    flag=strcmp(rev_String,(string));//compare two string return (0) -if palindrome,otherwise ot palindrome..
    if(flag==0){
        printf("It is palindrome ....");
    }
    else{
        printf("It is not palindrome ....");
    }
return 0; //follow me in github for more❤️ ✅
}
