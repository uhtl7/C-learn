#include<stdio.h>
int main()
{
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav ");
    printf("Mahler");
    return 0;
}

#include<stdio.h>
void jolly()
{
    printf("For he's a jolly good felllow!\n");
}
void deny()
{
    printf("Which nobody can deny!");
}
int main()
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

#include<stdio.h>
void two()
{
    printf("two\n");
}
void one_three()
{
    printf("one\n");
    two();
    printf("three\n");
}
int main()
{
   printf("starting now:\n");
   one_three();
   printf("done!");
   return 0;
}



#include<stdio.h>
int main()
{
    int x=0;
    scanf("%d",&x);
    printf("%c",x);
    return 0;
}

#include<stdio.h>
int main()
{
    double x=0.0;
    printf("Enter a floating-point value:");
    scanf("%lf",&x);
    printf("fixed-point notation: %.6lf\n",x);
    printf("exponential notation: %e\n",x);
    printf("p notation: %a\n",x);
    return 0;
}

#include<stdio.h>
int main()
{
    int age=0;
    double seconds=0.0;
    scanf("%d",&age);
    seconds=age*3.156e7;
    printf("%g",seconds);
    return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]={0};
    scanf("%s",name);
    int sz=strlen(name)+3;
    printf("\"%+20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"%*s\"\n",sz,name);
    return 0;
}

#include<stdio.h>
int main()
{
    float num=0.0f;
    scanf("%f",&num);
    printf("a. The input is %+g or %e\n",num,num);
    printf("b. The input is %+.3f or %.3E",num,num);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char first_name[100];
    char last_name[100];
    printf("please enter your first name and last name:\n");
    scanf("%s %s",first_name,last_name);
    int sz1=strlen(first_name);
    int sz2=strlen(last_name);
    printf("%*d %*d\n",sz1,sz1,sz2,sz2);
    printf("%-*d %-*d",sz1,sz1,sz2,sz2);
    return 0;
}

