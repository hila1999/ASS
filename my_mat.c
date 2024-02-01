#include "my_mat.h"

int * buildArr(){
    int static arr[10][10];

      for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
             printf("Enter arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    return arr;
}


boolean ifPathIsExists(int i,int j,arr[][10]){
&arr[i][j]=&arr[0][0] +10*i+j;
if(&arr[i][j]!=0)
return true;
else return false;
}

int shortPath(int i,int j){

}

void selectItems(float weights[], float values[], char *strings[], int numStrings){

}