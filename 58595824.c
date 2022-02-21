#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);

    while(Testcases--)
    {
        int x;
        scanf("%d\n",&x);
        int arr[x][x];
        
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<=i;j++)
            {
                scanf("%d\n",&arr[i][j]);
            }
        }
        
        for(int i=x-1;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                if(arr[i][j]>=arr[i][j+1])
                {
                    arr[i-1][j] = arr[i-1][j]+arr[i][j];
                }
                else
                {
                    arr[i-1][j] = arr[i-1][j]+arr[i][j+1];
                }
            }
        }
        
        printf("%d\n",arr[0][0]);
        
    }
}
//code by bhumika nayak