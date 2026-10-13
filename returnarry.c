#include <stdio.h>
int giveme(int arry[2][2])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("[%d]", arry[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arry[2][2] = {{2, 5}, {4, 5}};
    giveme(arry);
    return 0;
}