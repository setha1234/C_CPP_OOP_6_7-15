/*
    * header file for use with string :  <string.h>
    string is a character/text 
    in other language is have dataType string 
    in c doesn't have string we use char 

*/
#include<stdio.h>
#include<string.h> // file header for use with string
int main(){
    // char str[] = "hello, world";   
    // int length = sizeof(str)/sizeof(str[0]);
    // // for(int i =0;i<12;i++){
    // //     printf("%c \t",str[i]);
    // // }
    // printf("\n");
    // printf("Length of string : %d\n", length);


    
    char str1[] = "Hello,";
    char str2[] = "World"; 
    char str3[20] = "";

    // strcat() is a function for combine string cat = concatenate
  

    // strcpy() is a function for copy string 
    // strcmp() is a function for compare string
    // strlen() is a function for length of string
    // strcat() is a function for combine string
    // strncat() is a function for combine string with limit
    // strcpy() is a function for copy string
    // strncpy() is a function for copy string with limit
    // strcmp() is a function for compare string
    // strncmp() is a function for compare string with limit
    // strlen() is a function for length of string
    // strchr() is a function for search character in string
    // strstr() is a function for search string in string
    // strpbrk() is a function for search character in string
    // strspn() is a function for search character in string
    // strcspn() is a function for search character in string
    // strrev() is a function for reverse string
    // strlwr() is a function for lower case string
    // strupr() is a function for upper case string
    // strset() is a function for set character in string
    // strnset() is a function for set character in string with limit
    // strset() is a function for set character in string

    

    
    
    

    // printf("Length of str1 : %d\n", sizeof(str1)/sizeof(str1[0]));
    // printf("Length of str2 : %d\n", length2);
    // printf("Length of str1 + str2 : %d\n", strlen(length3) );

    // printf("str1 : %s\n", str1);
    // printf("str2 : %s\n", str2);
    // printf("str3 : %s\n", str3);

    // strcat(str3, str1);
    // strcat(str3, str2);
    // printf("str3 : %s\n", str3);

    // strcpy(str3, str1);
    // printf("str3 : %s\n", str3);

    // printf("Compare str1 and str2 : %d\n", strcmp(str1, str2));
    // printf("Compare str1 and str3 : %d\n", strcmp(str1, str3));
    // printf("Compare str3 and str1 : %d\n", strcmp(str3, str1));

    // printf("Compare str1 and str2 : %d\n", strncmp(str1, str2, 3));
    // printf("Compare str1 and str3 : %d\n", strncmp(str1, str3, 3));
    // printf("Compare str3 and str1 : %d\n", strncmp(str3, str1, 3));

    // printf("Length of str1 : %d\n", strlen(str1));

    // printf("Search character 'l' in str1 : %s\n", strchr(str1, 'l'));

    // printf("Search string 'lo' in str1 : %s\n", strstr(str2, "lo"));

    // printf("Search character 'l' in str1 : %s\n", strpbrk(str1, "l"));

    // printf("Search character 'l' in str1 : %s\n", strspn(str1, "l"));

    // printf("Search character 'l' in str1 : %s\n", strcspn(str1, "l"));

    // printf("Reverse str1 : %s\n", strrev(str1));

    // printf("Lower case str1 : %s\n", strlwr(str1));

    // printf("Upper case str1 : %s\n", strupr(str1));

    // printf("Set character 'a' in str1 : %s\n", strset(str1, '#'));

    printf("Set character 'a' in str1 : %s\n", strnset(str1, '#', 3));

    return 0;
}
