#ifndef _MY_MAT_H
#define _MY_MAT_H
#define V 10
#define MATRIX_SIZE 10
#define INT_MAX 2147483647
#define LEN 5
#define W 20
#define CHAR_MAX 20
//1
void getMatFromUser(int**,int);
//2
int isPath(int**,int,int,int);

int findShortestPath(int **,int,int,int);
void setItems(char* items,int* value,int* weight, int len);
int knapSack( int weights[], int values[] , int selected_bool[]);
#endif
