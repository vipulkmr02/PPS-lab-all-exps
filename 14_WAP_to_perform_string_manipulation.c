#include<stdio.h>
#include<string.h>

int main(){
    // declaring the character array
    char array[20];

    // taking input of the string
    gets(array);

    // strlen gives the length of the string
    int len = strlen(array);
    printf("the length: %d\n", len);
    
    // strcmp tells whether two strings are of
    // the same length or not 
    // return_value -   result
    //       =0      -   both are equal
    //       >0      -   str1 > str2
    //       <0      -   str1 < str2
    

    // strcat is short for "string concatenate";
    // concatenate is a fancy word that means to add to 
    // the end, or append. It adds the second string to 
    // the first string. It returns a pointer to the 
    // concatenated string. Beware this function;
    // IMPORTATNT:
    // it assumes that dest is large enough to hold the 
    // entire contents of src as well as its own contents.
    // if the length of the first string < length of the second string. This function won't run properly

    char str1[] = " string", str2[] =  "concatenated";
    puts(strcat(str2, str1));


    // printing the array 
    // puts(array);


    return 0;
    }
