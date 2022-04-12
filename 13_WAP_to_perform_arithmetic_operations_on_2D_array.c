#include<stdio.h>

int main(){
    int array[2][2] = {{1,2},{3,4}};
    // visualization
    // +-------+
    // | 1 | 2 |
    // +-------+
    // | 3 | 4 |
    // +-------+

    int product_of_all_elements = array[0][0] * array[0][1] * array[1][0] * array[1][1];
    int sum_of_all_elements = array[0][0] + array[0][1] + array[1][0] + array[1][1];

    // printing the output
    printf("SUM of all elements: %d", sum_of_all_elements);
    printf("PRODUCT of all elements: %d", product_of_all_elements);
    return 0;
    }
