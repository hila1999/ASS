#include <stdio.h>

#include "my_mat.h"

int main (){
    char select;
    int *returnArray;
    int *p;
    int i;
    int j;
    boolean ans;
     printf("print char for do action: ");
     scanf("%c",select);
    if(select=='D')
    {
    return 0;
    }
  
    while(select!='D'){
     if(select=='A')
        int returnArray = buildArr();
       printf("Enter two integers i andj: ");
       scanf("%d %d", &i, &j);
      ans= ifPathIsExists(i,j,returnArray);
      return ans
    }
   

}