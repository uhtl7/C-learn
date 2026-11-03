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

// int main()
// {
//     int arr[10]={0};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<sz;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int left=0;
//     int right=sz-1;
//     while (left<right)
//     {
//         while(arr[left]%2!=0)
//         {
//             left++;
//         }
//         while(arr[right]%2==0)
//         {
//             right--;
//         }
//         if(arr[left]%2==0 && arr[right]%2!=0)
//         {
//             int t=arr[left];
//             arr[left]=arr[right];
//             arr[right]=t;
//             left++;
//             right--;
//         }
//     }
//     for(int i=0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
       scanf("%d",&arr2[i]);
    }
    int j=0,k=0;
    while(j<n && k<m)
    {
        if(arr1[j]>arr2[k])
        {
            printf("%d ",arr2[k]);
            k++;
        }
        else
        {
            printf("%d ",arr1[j]);
            j++;
        }
    }
    if(j<n)
    {
         for(;j<n;j++)
         {
            printf("%d ",arr1[j]);
         }
         
    }
    else
    {
        for(;k<m;k++)
        {
            printf("%d ",arr2[k]);
        }
    }
    return 0;
}