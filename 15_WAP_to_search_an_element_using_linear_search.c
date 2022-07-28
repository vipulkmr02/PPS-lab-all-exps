#include<stdio.h>
#include<string.h>

int main(){
    // array decalred
    int array[10] = {2, 8, 27, 22, 31, 9, 10, 17, 0, 3};
    int i;
    
    // asking the user for the array
   	int tbs;
	scanf("%d", &tbs);

    // linear search 
    // in this algo we match every element in
    // list which we want to find
    for(i = 0; i < 10; i++)
	{
        if (tbs == array[i])
		{
            printf("index: %d\n", i);
			return 0;
        }
    }
	

    return 0;
}
