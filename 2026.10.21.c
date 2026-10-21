int is_prime(int n)
{
   for (int j = 2;j * j <= n;j++)
   {
       if (n % j == 0)
       {
           return 0;
       }
   }
   return 1;
}

int main()
{
   for (int i = 2;i <= 100;i++)
   {
       if (is_prime(i))
       {
           printf("%d ", i);
       }
   }
   return 0;
}
void  binary_search(int arr[], int k, int sz)
{
   int left = 0;
   int right = sz - 1;
   while (left <= right)
   {
       int mid = left + (right - left) / 2;
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
}
int main()
{
   int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
   int k = 3;
   int sz = sizeof(arr) / sizeof(arr[0]);
   binary_search(arr, k, sz);
   return 0;
}
void add(int* m)
{
   *m += 1;
}
int main()
{
   int num = 0;
   add(&num);
   printf("%d", num);
   return 0;
}
int a_strlen(char* str)
{
   if (*str != 0)
   {
       return 1 + a_strlen(str + 1);
   }
   return 0;
}
int main()
{
   char arr[] = "abcdfrsdgjlh";
   int len = a_strlen(arr);
   printf("%d", len);
   return 0;
}


// 迭代
int jc(int m)
{
   int res = 1;
   for (int i = 1;i <= m;i++)
   {
       res*= i;
   }
   return res;
}
int main()
{
   int n = 0;
   scanf("%d", &n);
   int sum = jc(n);
   printf("%d", sum);
   return 0;
}
//递归
int jc(int m)
{
   if(m>=1)
     return m * jc(m - 1);
   return 1;
}
int main()
{
   int n = 0;
   scanf("%d", &n);
   int sum = jc(n);
   printf("%d", sum);
   return 0;
}
int fib(int m)
{
   int a = 1;
   int b = 1;
   int c = 0;
   while (m>=3)
   {
       c = a + b;
       a = b;
       b = c;
       m--;
   }
   return c;
}
int main()
{
   int n = 0;
   scanf("%d",&n);
   int sum = fib(n);
   printf("%d", sum);
   return 0;
}