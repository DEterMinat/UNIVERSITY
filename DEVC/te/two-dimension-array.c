#include <stdio.h>

int arr1[2][5] = {
    {1, 2, 3, 4, 5}, 
    {6, 7, 8, 9, 10}
};
int arr2[2][5] = {
    {11, 12, 13, 14, 15}, 
    {16, 17, 18, 19, 20}
};
int sum[2][5];
int diff[2][5];

void sumTwoArrays();
void print2DAray();
void diffTwoArrays();

void main()
{
    sumTwoArrays();
    printf("\n::Result of sum array::\n");
    print2DAray(sum);

    diffTwoArrays();
    printf("\n::Result of diff array::\n");
    print2DAray(diff);
}

void print2DAray(int arr[][5])
{
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void sumTwoArrays()
{
    for(int i = 0; i < 2; i++){
        for(int j = 0 ; j < 5; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void diffTwoArrays()
{
   for(int i = 0; i < 2; i++){
        for(int j = 0 ; j < 5; j++){
            diff[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}