#include<stdio.h>
int main()
{int i,j,n,limit,ch;
int a[50][50];
printf("Enter the number=");
scanf("%d",&n);
printf("Enter the limit=");
scanf("%d",&limit);
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        a[i][j]=rand()%limit;

        printf("%d",a[i][j]);
    }
    printf("\n");
}do{
printf("1.continue to remove:\n");
printf("2.Exit:\n");
printf("Enter your choice:");
scanf("%d",&ch);
int s,t,x;



switch(ch)
{
    case 1:
    printf("Enter the position:");
    scanf("%d%d",&s,&t);


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s>0&&a[s+1][t]==a[s][t] )
            {
                a[s][t]=rand()%limit;
            }
            else if(s>0&&a[s-1][t]==a[s][t])
            {
                a[s][t]=rand()%limit;
            }
            else if(t>0&&a[s][t+1]==a[s][t])
            {
                a[s][t]=rand()%limit;
            }
            else
            {
                a[s][t]=rand()%limit;
            }




        }
    }

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    break;

    case 2:exit(0);
    break;

    default:
        printf("Enter the correct option:");
}
}while(ch<2);
return 0;
}
