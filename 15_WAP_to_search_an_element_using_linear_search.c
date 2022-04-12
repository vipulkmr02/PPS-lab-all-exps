#include<stdio.h>
// #include<stdlib.h>
#include<string.h>

int main(){
    // array decalred
    char array[12] = {'A','B','C','D','E','F','G','H','I','J','K','L'};
    int i;
    
    // asking the user for the array
    printf("Enter the elment you wanna search: ");
    char tbs = getchar();

    // linear search 
    // in this algo we match every element in
    // list which we want to find

    for(i = 0; i<12; i++){
        if (tbs == array[i]){
            printf("The index of the %c is %d\n",tbs, i);
            return 0;   /* If the element is found, this line will quit the main function */
        }
    }

    printf("Element not found\n");
    return 0;
    }
