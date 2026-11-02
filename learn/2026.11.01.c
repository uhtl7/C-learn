#include<stdio.h>
#include<string.h>
// int main()
// {
//     int a=0,b=0;
//     scanf("%d %d",&a,&b);
//     int i=1;
//     while (a*i%b)
//     {
//         i++;
//     }
//     printf("%d",a*i);
//     return 0;
// }
// void reverse(char *left,char *right)
// {
//     while(left<right)
//     {
//         char temp = *left;
//         *left = *right;
//         *right = temp;
//         left ++;
//         right --;
//     }
// }
// int main()
// {
//     char s[105];
//     int ch=0;
//     int i=0;
//     while((ch=getchar())!='\n')
//     {
//         s[i]=ch;
//         i++;
//     }
//     s[i]='\0';
//     int sz=strlen(s);
//     reverse(s,s+sz-1);
//     char* start =s;
//     while(*start)
//     {
//          char* end=start;
//          while(*end != ' ' && *end !='\0')
//          {
//             end ++;
//          }
//          reverse(start,end-1);
//          if(*end !='\0')
//             end ++;
//          start = end;
//     }
//     printf("%s",s);
//     return 0;
// }
// int main()
// {
//     int a=1;
//     char *p=(char*)&a;
//     if(*p)
//     {
//         printf("小端");
//     }
//     else
//     {
//         printf("大端");
//     }
//     return 0;
// }