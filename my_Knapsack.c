#include "my_mat.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "my_mat.c"
    int val[] = {35, 60, 100, 120, 130};
    int wt[] = {2, 5, 6, 9,10};
    
    int n = sizeof(val) / sizeof(val[0]);

int main() {
   
    char* items =  (char*) malloc(LEN * sizeof(char));
    int* value =  (int*) malloc(LEN * sizeof(int));
    int* weight =  (int*) malloc(LEN * sizeof(int));
    setItems(items,value,weight,LEN);
    int result[CHAR_MAX] = {0};
    int res = knapSack( weight, value, result);
    printf("Maximum profit: %d\n", res);

    printf("Selected items:");
    for(int j = 0; j<5; j++){
        
            if(result[j]){
       
         printf(" %c",items[j]);}
        

    }
   
    free(items);
    free(value);
    free(weight);

return 0;

}
