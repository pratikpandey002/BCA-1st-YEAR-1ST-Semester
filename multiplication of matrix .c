#include<stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2],i,j,k,multiply;
    printf("first matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("second matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
              multiply= multiply + arr1[i][k]*arr2[k][j];
            }
            printf("%d \t",multiply);
            multiply = 0;
        }
        printf("\n");
    }
    return 0;
}
    