#include<stdio.h>
 main()
{
	int i,j,m,n,a[10][10];
	printf("Enter the row and columns");
	scanf("%d%d",&m,&n);


        for(i=0;i<=m-1;i++)
        {
            for(j=0;j<=n-1;j++)
            {
                printf("enter the value");
                scanf("%d",a[i][j]);

            }

        }printf("enterd matrix is\n");
        
        for(i=0;i<=m-1;i++)
        {
            for(j=0;j<=n-1;j++)
            {
                printf("%d\t",a[i][j]);
                
                
            }printf("\n");
            
        }



}

