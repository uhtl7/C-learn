#include<stdio.h>
int main()
{
   int i = 0;
   for (i = 0;i < 10;i++)
   {
       printf("hehe\n");
       if (i == 4)
           continue;
       if (i == 5)
           break;
   }
   return 0;
}
int main()
{
   int i = 0;
   for (;;)                 //for循环判断部分省略，意味着判断恒成立
   {
       printf("hehe\n");
   }
   return 0;
}
int main()
{
   int i = 0;
   int k = 0;
   for (i = 0, k = 0;k = 0;i++, k++)//循环零次，因为k=0是赋值，0为假
       k++;
   return 0;
}
int main()
{
   int n = 0;
   int sum=0;
   scanf("%d", &n);
   for (int i = 1;i <= n;i++)
   {
       int res = 1;
       for (int j = 1;j <= i;j++)
           res *= j;
       sum += res;
   }
   printf("%d", sum);
   return 0;
}
for (int n = 1;n <= 10;n++)
{
   res = res * n;
   sum = sum + res;
}

//二分查找
int main()
{
   int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
   int k = 6;
   int size=sizeof(arr)/sizeof(arr[0]);
   int left = 0;
   int right = (size - 1);
   while (left <= right)
   {
       int mid = left + (right - left)/ 2;
       if (arr[mid] < k)
       {
           left = mid + 1;
       }
       else if (arr[mid] > k)
       {
           right = mid - 1;
       }
       else
       {
           printf("%d", mid);
           break;
       }
   }
   if (left > right)
   {
       printf("没有");
   }
   return 0;
}
#include<stdlib.h>
int main()
{
   char arr1[] = "welcome to xiyou!!";
   char arr2[] = "##################";
   int left = 0;
   int right = strlen(arr2) - 1;
   while (left<=right)
   {
       arr2[left] = arr1[left];
       arr2[right] = arr1[right];
       left++;
       right--;
       printf("%s\n", arr2);
   }
   return 0;
}
int main()
{
   int i = 0;
   char password[20];
   for (i = 0;i < 3;i++)
   {
       printf("请输入密码：\n");
       scanf("%s", password);
       if (strcmp(password, "asdfg") == 0)
       {
           printf("密码正确\n");
           break;
       }

       else
           printf("密码错误\n");
   }
   if (i == 3)
   {
       printf("请稍后再试\n");
   }
   return 0;
}
void game()
{
   int guess = 0;
   int ret = rand()%100+1;
   while (1)
   {
       printf("guess:");
       scanf("%d", &guess);
       if (guess > ret)
       {
           printf("guessed too big\n");
       }
       else if (guess < ret)
       {
           printf("guessed too small\n");
       }
       else
       {
           printf("guessed right\n");
           break;
       }

   }
}
void menu()
{
   printf("##########################\n");
   printf("########  1.play  ########\n");
   printf("##########################\n");
   printf("########  2.exit  ########\n");
   printf("##########################\n");
   printf("##########################\n");
}
int main()
{
   int input = 0;
   srand((unsigned int)time(NULL));
   do
   {
       menu();
       printf("select pleas:");
       scanf("%d", &input);
       switch (input)
       {
       case 1:
           game();
           break;
       case 2:
           break;
       default:
           break;
       }
   } while (input);
   return 0;
}