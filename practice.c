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





// #include<stdio.h>
// int main()
// {
//     int ch;
//     int n=0;
//     while((ch=getchar())!=EOF)
//     {
//         n++;
//     }
//     printf("\n%d",n);
//     return 0;
// }

// #include<stdio.h>
// void meau()
// {
//     int ch;
//     printf("Enter the operation of your choice:\n");
//     printf("a.add                 s.subtract\n");
//     printf("m.multiply            d.divide\n");
//     printf("q.quit\n");

// }
// float get_int()
// {
//     char ch;
//     float n;
//     while(scanf("%f",&n)!=1)
//     {
//         while((ch=getchar())!='\n')
//           putchar(ch);
//         printf(" is not a number.\n");
//         printf("please enter a number,such as 2.5 , -1.78E8 , or 3:");  
//     }
//     return n;
// }
// void Add()
// {
//     printf("Enter first number:");
//     float n=get_int();
//     printf("Enter second number:");
//     float m=get_int();
//     printf("%g + %g = %g\n",n,m,n+m);
//     meau();
// }
// void Sub()
// {
//     printf("Enter first number:");
//     float n=get_int();
//     printf("Enter second number:");
//     float m=get_int();
//     printf("%g - %g = %g\n",n,m,n-m);
//     meau();
// }
// void Mul()
// {
//     printf("Enter first number:");
//     float n=get_int();
//     printf("Enter second number:");
//     float m=get_int();
//     printf("%g / %g = %g\n",n,m,n/m);
//     meau();
// }
// void Div()
// {
//     printf("Enter first number:");
//     int n=get_int();
//     printf("Enter second number:");
//     int m=get_int();
//     printf("%d %% %d = %d\n",n,m,n%m);
//     meau();
// }
// int main()
// {
//     int ch;
//     meau();
//     while((ch=getchar())!='q')
//     {
//         switch(ch)
//         {
//             case 'a':Add();
//             break;
//             case 's':Sub();
//             break;
//             case 'm':Mul();
//             break;
//             case 'd':Div();
//             break;
//             case '\n':
//             break;
//             default:
//             printf("no");
//             break;
//         }
//     }
//     printf("Bye\n");
//     return 0;
// }

// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
//     int ch;
//     int sum=0;
//     while((ch=getchar())!=EOF)
//     {
//         if(isalpha(ch))
//         {
//             sum++;
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }





// #include<stdio.h>
// void sort(double* a,double* b,double* c)
// {
//     double t=0.0;
//    if(*a>*b)
//    {
//     t=*a;
//     *a=*b;
//     *b=t;
//    }
//    if(*a>*c)
//    {
//     t=*a;
//     *a=*c;
//     *c=t;
//    }
//    if(*b>*c)
//    {
//     t=*b;
//     *b=*c;
//     *c=t;
//    }
// }
// int main()
// {
//     double num1,num2,num3;
//     scanf("%lf %lf %lf",&num1,&num2,&num3);
//     sort(&num1,&num2,&num3);
//     printf("%lf %lf %lf",num1,num2,num3);
//     return 0;
// }

// #include<stdio.h>
// int Fibonacci(int n)
// {
//     int a=1;
//     int b=1;
//     int c=0;
//     if(n<=2)
//     {
//         return 1;
//     }
//     for(int i=3;i<=n;i++)
//     {
//        c=a+b;
//        a=b;
//        b=c;
//     }
//     return c;
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int m=Fibonacci(n);
//     printf("%d",m);
//     return 0;
// }
// void is_letter(char c)
// {
//     if(c>='A'&&c<='Z')
//     {
//         printf("yes %d\n",c-64);
//     }
//     if(c>='a'&&c<='z')
//     {
//         printf("yes %d\n",c-96);
//     }
// }
// int judge_letter()
// {
//     char c;
//     scanf("%c",c);
//      if(c>='A'&&c<='Z')
//     {
//         return (c-64);
//     }
//     else if(c>='a'&&c<='z')
//     {
//         return (c-96);
//     }
//     else
//     {
//         return -1;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     char c;
//     while(scanf("%c",&c)==1)
//       {
//         is_letter(c);
//         int m=judge_letter();
//       }
//       return 0;
// }





// #include<stdio.h>
// int sort(double arr[],int sz)
// {
//     int max=arr[0];
//     int count=0;
//     for(int i=0;i<sz;i++)
//     {
//         if(arr[i]>max)
//          {
//             max=arr[i];
//             count=i;
//          }
//     }
//     return count;
// }
// int main()
// {
//     double arr[]={0.2,2.5,0.8,1.2,1.6,1.8};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int n=sort(arr,sz);
//     printf("%d",n);
//     return 0;
// }

// #include<stdio.h>
// double sort(double arr[],int sz)
// {
//     for(int i=0;i<sz;i++)
//     {
//         for(int j=0;j<sz-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 float t=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=t;
//             }
//         }
//     }
//     return (arr[sz-1]-arr[0]);
// }
// int main()
// {
//     double arr[]={0.2,2.5,0.8,1.2,1.6,1.8};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     double n=sort(arr,sz);
//     printf("%g",n);
//     return 0;
// }

// #include<stdio.h>
// void copy_arr(double target1[],double source[],int n)
// {
//     for(int i=0;i<5;i++)
//     {
//         target1[i]=source[i];
//     }
// }
// void copy_ptr(double *target2,double *source,int n)
// {
//     for(int i=0;i<5;i++)
//     {
//         *target2=*source;
//         target2++;
//         source++;
//     }
// }
// void copy_ptrs(double *target3,double *source,int *source_end)
// {
//     for(int i=0;i<5;i++)
//     {
//         *target3=*source;
//         target3++;
//         source++;
//     }
// }
// int main()
// {
//     double source[5]={0.1,0.2,0.3,0.4,0.5};
//     double target1[5];
//     double target2[5];
//     double target3[5];
//     copy_arr(target1,source,5);
//     copy_ptr(target2,source,5);
//     copy_ptrs(target3,source,source+5);
// }





// #include<stdio.h>
// int main()
// {
//     int ch;
//     int Acount=0,acount=0,count1=0,_count=0;
//     while((ch=getchar())!=EOF)
//     {
//         if(ch <= 'Z' && ch >= 'A')
//             Acount++;
//         else if(ch <= 'z' && ch >= 'a')
//             acount++;
//         else if(ch <= '9' && ch >= '0')
//             count1++;
//         else
//             _count++;   
//     } 
//     printf("%d %d %d %d %d",Acount+acount,Acount,acount,_count,count1);
//     return 0;
// }

// #include<stdio.h>
// void Delete_string (char s[],int sz)
// {
//     int i=0;
//     int j=0;
//     while(s[i]!='\0')
//       {
//         if(s[i]!=' ')
//         {
//            s[j]=s[i];
//            j++;
//         }
//          i++;
//       }
//       s[j]='\0';
// }
// int main()
// {
//     char s[100];
//     int sz=sizeof(s);
//     while(fgets(s,sz,stdin)!=NULL)
//     {
//         if(s[0]=='\n')
//         {
//             break;
//         }
//         Delete_string(s,sz);
//         printf("%s",s);
//     }
//  return 0;
// }

// #include<stdio.h>
// #include<ctype.h>
// int Atoi(char s[],int sz)
// {
//     int i=0;
//     int sum=0;
//     while(s[i]!='\0' && s[i]!='\n')
//     {
//         if(isdigit(s[i]))
//         {
//             sum=sum*10+(s[i]-'0');
//         }
//         else
//             return 0;
//         i++;    
//     }
//     return sum;

// }
// int main()
// {
//     char s[100];
//     while(fgets(s,sizeof(s),stdin)!=NULL)
//     {
//         int num=Atoi(s,sizeof(s));
//         printf("%d\n",num);
//     }
//     return 0;
// }





#include<stdio.h>
int main()
{
    
}