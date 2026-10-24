void reserve(int arr[], int sz)
{
   for (int i = sz - 1;i >= 0;i--)
   {
       printf("%d ", arr[i]);
   }
}
void print(int arr[], int sz)
{
   for (int i = 0;i < sz;i++)
   {
       printf("%d ", arr[i]);
   }
   printf("\n");
}
void init(int arr[], int sz)
{
   for (int i = 0;i < sz;i++)
   {
       arr[i] = 0;
   }
   printf("\n");
}
int main()
{
   int arr[] = { 1,2,3,4,5,6,7,8,9 };
   int sz = sizeof(arr) / sizeof(arr[0]);
   print(arr,sz);
   reserve(arr, sz);

   init(arr, sz);
   print(arr, sz);
   return 0;
}
int fib(int n)
{
   if (n <= 2)
       return n;
   else
       return fib(n - 1) + fib(n - 2);
}
int main()
{
   int n;
   scanf("%d", &n);
   int m = fib(n);
   printf("%d", m);
   return 0;
}
int main()
{
   int n,m;
   scanf("%d",&n);
   int arr[50];
   for (int i = 0;i < n;i++)
   {
       scanf("%d ",&arr[i]);
   }
   scanf("%d",&m);
   /*for (int i = 0;i < n-1;i++)
   {
       if (i+1 >= m)
       {
           arr[i] = arr[i + 1];
       }
   }*/
   int j = 0;
   for (int i = 0;i < n;i++)
   {
       if (arr[i] != m)
       {
           arr[j++] = arr[i];
       }
   }
   for (int i = 0;i < j;i++)
       printf("%d ",arr[i]);
   return 0;
}
int main()
{
   int n;
   int arr[50];
   scanf("%d", &n);
   for (int i = 0;i < n;i++)
   {
       scanf("%d", &arr[i]);
   }
   int min = arr[0];
   int max = arr[n - 1];
   for (int i = 0;i < n;i++)
   {
       if (arr[i] > max)
       {
           max = arr[i];
       }
       if (arr[i]< min)
       {
          min = arr[i];
       }
   }
  /* for (int i = 0;i < n - 1;i++)
   {
       for (int j = 0;j < n - 1 - i;j++)
       {
           if (arr[j] > arr[j+1])
           {
               int t = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = t;
           }
       }
   }
   printf("%d", arr[n-1] - arr[0]);*/
   printf("%d", max - min);
   return 0;
}