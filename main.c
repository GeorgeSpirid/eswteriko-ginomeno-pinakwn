#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1,r2,c1,c2,i,j;
    scanf("%d %d",&r1,&c1);
    int P1[r1][c1];
    for (i=0;i<r1;i++)
        for (j=0;j<c1;j++)
            scanf("%d",&P1[i][j]);
    scanf("%d %d",&r2,&c2);
    int P2[r2][c2];
    for (i=0;i<r2;i++)
        for (j=0;j<c2;j++)
            scanf("%d",&P2[i][j]);
    if (r1>100||r1<1||c1>100||c1<1||r2>100||r2<1||c2>100||c2<1||c1!=r2)
        printf("Wrong Input");
    else
    {
        int RS[r1][c2],n;
        for (i=0;i<r1;i++)
            for (j=0;j<c2;j++)
            {
                RS[i][j]=0;
                for (n=0;n<c1;n++)
                    RS[i][j]+=(P1[i][n]*P2[n][j]);
            }
        for (i=0;i<r1-1;i++)
        {
            for (j=0;j<c2-1;j++)
                printf("%d ",RS[i][j]);
            printf("%d",RS[i][j]);
            printf("\n");
        }
        for (j=0;j<c2-1;j++)
            printf("%d ",RS[i][j]);
        printf("%d",RS[i][j]);
    }
    return 0;
}
