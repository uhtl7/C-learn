// #include<stdio.h>
// void meau()
// {
//     printf("Enter the operation of your choice:\n");
//     printf("0.add                 2.subtract\n");
//     printf("1.multiply            3.divide\n");
//     printf("4.quit\n");
// }
// int Add(int a,int b)
// {
//     return a+b;
// }
// int Sub(int a,int b)
// {
//     return a-b;
// }
// int Mul(int a,int b)
// {
//     return a/b;
// }
// int Div(int a,int b)
// {
//     return a%b;
// }
// int main()
// {
//     int input=0;
//     int res=0;
//     int x,y;
//     int (*p[5])(int,int)={Add,Mul,Sub,Div,0};
//     do
//     {
//         meau();
//         scanf("%d",&input);
//         scanf("%d %d",&x,&y);
//         res=p[input](x,y);
//         printf("%d\n",res);
//     } while (input!=4);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int arr[10][10]={0};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || i==j)
            arr[i][j]=1;
            if(i>=2 && j>=1)
            {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}