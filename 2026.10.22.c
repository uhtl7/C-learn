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
int DigitSum(int m)
{
   if (m > 9)
       return DigitSum(m / 10) + m % 10;
   else
       return m;
}
int main()
{
   int n = 0;
   scanf("%d", &n);
   int sum=DigitSum(n);
   printf("%d", sum);
   return 0;
}
int Pow(int n, int k)
{
   if (k > 0)
       return Pow(n, k - 1) * n;
   else
       return 1;
}
int main()
{
   int n, k;
   scanf("%d %d", &n, &k);
   int sum = Pow(n, k);
   printf("%d", sum);
   return 0;
}
void bubble_sort(int arr[],int sz)
{
   for (int i = 0;i < sz-1;i++)
   {
       for (int j = 0;j < sz-1- i;j++)
       {
           if (arr[j] > arr[j + 1])
           {
               int t = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = t;
           }
       }
   }
}
int main() 
{
   int arr[10] = { 9,4,5,2,8,7,1,6,3,10 };
   int sz = sizeof(arr) / sizeof(arr[0]);
   bubble_sort(arr,sz);
   for (int i = 0;i < 10;i++)
       printf("%d ", arr[i]);
   return 0;
}

//数组名表示数组首元素的地址（二维数组为一行的地址）
//sizeof 和& 时除外
int main()
{
   int arr[3][4] = { 0 };
   int arr1[3] = { 0 };
   printf("%p\n", arr);
   printf("%p\n", arr+1);
   printf("-------------------\n");
   printf("%p\n", &arr);
   printf("%p\n", &arr + 1);
   printf("-------------------\n");
   printf("%p\n", &arr[0]);
   printf("%p\n", &arr[0] + 1);
   printf("-------------------\n");
   printf("%p\n", arr1);
   printf("%p\n", arr1 + 1);
   printf("-------------------\n");
   printf("%p\n", &arr1);
   printf("%p\n", &arr1 + 1);
   printf("-------------------\n");
   printf("%p\n", &arr1[0]);
   printf("%p\n", &arr1[0] + 1);
   printf("-------------------\n");
   printf("%d\n", sizeof(arr) / sizeof(arr[0]));
   printf("%d", sizeof(arr[0]) / sizeof(arr[0][0]));
   return 0;
}