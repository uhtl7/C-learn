// #include<stdio.h>
// int main()
// {
//     printf("Gustav Mahler\n");
//     printf("Gustav\nMahler\n");
//     printf("Gustav ");
//     printf("Mahler");
//     return 0;
// }

// #include<stdio.h>
// void jolly()
// {
//     printf("For he's a jolly good felllow!\n");
// }
// void deny()
// {
//     printf("Which nobody can deny!");
// }
// int main()
// {
//     jolly();
//     jolly();
//     jolly();
//     deny();
//     return 0;
// }

// #include<stdio.h>
// void two()
// {
//     printf("two\n");
// }
// void one_three()
// {
//     printf("one\n");
//     two();
//     printf("three\n");
// }
// int main()
// {
//    printf("starting now:\n");
//    one_three();
//    printf("done!");
//    return 0;
// }





// #include<stdio.h>
// int main()
// {
//     int x=0;
//     scanf("%d",&x);
//     printf("%c",x);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     double x=0.0;
//     printf("Enter a floating-point value:");
//     scanf("%lf",&x);
//     printf("fixed-point notation: %.6lf\n",x);
//     printf("exponential notation: %e\n",x);
//     printf("p notation: %a\n",x);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int age=0;
//     double seconds=0.0;
//     scanf("%d",&age);
//     seconds=age*3.156e7;
//     printf("%g",seconds);
//     return 0;
// }





// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[20]={0};
//     scanf("%s",name);
//     int sz=strlen(name)+3;
//     printf("\"%+20s\"\n",name);
//     printf("\"%-20s\"\n",name);
//     printf("\"%*s\"\n",sz,name);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float num=0.0f;
//     scanf("%f",&num);
//     printf("a. The input is %+g or %e\n",num,num);
//     printf("b. The input is %+.3f or %.3E",num,num);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char first_name[100];
//     char last_name[100];
//     printf("please enter your first name and last name:\n");
//     scanf("%s %s",first_name,last_name);
//     int sz1=strlen(first_name);
//     int sz2=strlen(last_name);
//     printf("%*d %*d\n",sz1,sz1,sz2,sz2);
//     printf("%-*d %-*d",sz1,sz1,sz2,sz2);
//     return 0;
// }





// #include<stdio.h>
// #define A 60
// int main()
// {
//    int n=1;
//    while(n>0)
//    {
//       scanf("%d",&n);
//       printf("%dh %dmin\n",n/A,n%A);
//    }
//    return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n=1;
//     while(n>0)
//     {
//         scanf("%d",&n);
//         printf("%d days are %d weeks, %d days\n",n,n/7,n%7);
//     }
//     return 0;
// }

// #include<stdio.h>
// double Lfh(double n)
// {
//     double k=n*n*n*1.0;
//     return k;
// }
// int main()
// {
//    double n=0.0;
//    scanf("%lf",&n);
//    double m=Lfh(n);
//    printf("%g",m);
//    return 0;
// }

// #include<stdio.h>
// void Temperatures(double t)
// {
//     const float FIRST=5.0/9.0;
//     const float SECOND=32.0; 
//     const float BASIC=273.16;
//     double SSD=FIRST*(t-SECOND);
//     double KSD=SSD+BASIC;
//     printf("%.3f %.3f %.3f\n",t,SSD,KSD);
// }
// int main()
// {
//    double t=0.0;
//    printf("请输入华氏温度\n");
//    while(scanf("%lf",&t)==1)
//    {
//      Temperatures(t);
//      printf("请输入华氏温度\n");
//    }
//    return 0;
// }





// #include<stdio.h>
// int main()
// {
//     int n=0;
//     n=70;
//     for(int i=1;i<=6;i++)
//     {
//        for(int j=1;j<=i;j++)
//        {
//          printf("%c",n);
//          n--;
//        }
//        n=70;
//        printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char c;
//     scanf("%c",&c);
//     for(char i='A';i<=c;i++)
//     {
//         for(char j=i;j<c;j++)
//         {
//             printf(" ");
//         }
//         for(char j='A';j<=i;j++)
//         {
//             printf("%c",j);
//         }
//         for(char j=i-1;j>='A';j--)
//         {
//             printf("%c",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int weeks=0;
//     int firends=5;
//     while(firends<=150)
//     {
//         weeks++;
//         firends-=weeks;
//         firends*=2;
//         printf("%d weeks have %d firends\n",weeks,firends);
//     }
//     return 0;
// }






// #include<stdio.h>
// int main()
// {
//     char c='A';
//     int count=0;
//     while(c!='#')
//     {
//         scanf("%c",&c);
//         getchar();
//         printf("%c-%d ",c,c);
//         count++;
//         if(count%8==0)
//         {
//             printf("\n");
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// #define BASIC 10.00
// #define OVERTIME 40
// #define MAGNIF 1.5
// int main()
// {
//     float n=0;
//     float sum=0;
//     float tax=0;
//     printf("请输入工作时长：");
//     scanf("%f",&n);
//     if(n<=40)
//     {
//         sum=BASIC*n;
//     }
//     else
//     {
//         sum=(n-OVERTIME)*MAGNIF+OVERTIME*BASIC;
//     }
//     if(sum<=300)
//     {
//         tax=sum*0.15;
//         printf("%.2f %.2f %.2f",sum,tax,sum-tax);
//         return 0;
//     }
//     else if(sum<=450)
//     {
//         tax=300*0.15+(sum-300)*0.2;
//         printf("%.2f %.2f %.2f",sum,tax,sum-tax);
//     }
//     else
//     {
//         tax=300*0.15+150*0.2+(sum-450)*0.25;
//         printf("%.2f %.2f %.2f",sum,tax,sum-tax);
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int n=0;
//      while(scanf("%d",&n)!=1 || n<0)
//     {
//         return 0;
//     }
//     for(int i=2;i<n;i++)
//     {
//         int flag=1;
//         for(int j=2;j*j<=i;j++)
//         {
//             if(i%j==0)
//             {
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }





#include<stdio.h>
int main()
{
    
}