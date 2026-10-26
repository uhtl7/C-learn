#include<stdio.h>
// 	int a = 10;
// 	&a;
// 	printf("%p\n", &a);
// 	int* p = &a;
// 	*p = 20;
// 	printf("%d", a);

// struct pep
// {
// 	int age
// 	char name[];  //结构体要写在前面，否则识别不到pep中的数据
//  char sex[];  //char 创建的是字符   name[]是因为可以包含不同的人名,sex[]同理
// }
// void print(struct pep* ps)  //*ps相当于s
// {
// 	printf("%d %s\n", (*ps).age, (*ps).name);
// 	printf("%d %s\n", ps->age, ps->name);
// }
// int main()
// {
// 	struct pep s = {20,"xy"};    //指其中一个age是20  name是xy
//                                  还可以定义另一个，比如struct pep a={};
// 	print(&s);// 地址不写=，是()
// 	printf("%d %s\n", s.age, s.name);	
// 	return 0;
// }
// int main()
// {
//    int x, y, z;
//    scanf("%d %d %d", &x,&y,&z);
//    if (x >= y && x >= z)
//        printf("%d", x);
//    else if (y >=x && y >=z)
//        printf("%d", y);
//    else
//        printf("%d", z);
//    return 0;

// //}
// int main()
// {
//    int i = 1;                                                                      int i = 1;
//    while (i <= 100)                                                                while(i <= 100)
//                                                                                    {
//    {                                                                                   if(i % 2 == 1) // 也可以这样写
//        if (i % 2 == 1)                                                                  printf("%d",i);
//            printf("%d ", i);                                                             i++;
//                                                                                        else
//            i=i+1;//这里最好不加else，如果加了else，因为i=1，所以输出结果都是1             i++；
//    }                                                                                }
//    return 0;
// }
// int main()
// {
//    int day = 0;
//    scanf("%d", &day);
//    switch (day) 
//    {
//    case 1:
//        printf("day1");//case和数字之间要有空格
//        break;
//    case 2:
//        printf("day2");
//    case 3:
//        printf("day3");
//        break;//最后一个也建议写break
//    default:
//        printf("wrong");
// int main()
// {
//    int arr[] = { 26, 35, 54, 47, 53, 59, 41 };
//    int i = 0;
//    int sz= sizeof(arr) / sizeof(arr[0]);
//    while (i < sz)
//    {
//        printf("%c ", arr[i]);
//        i++;
//    }
//    return 0;

// //}
// int main()
// {
//    scanf("%4d%2d%2d",&a,&b,&c );//规定输入时读取的位数
//    printf("year=%d\n", a);
//    printf("month=%02d\n", b);//规定我需要的个数，比如：02，04
//    printf("date=%02d", c);
//    return 0;
// int main()
// { 
//    int a = 0;
//    float b = 0;
//    float c = 0;
//    float d = 0;

//    scanf("%d;%f;%f;%f", &a, &b, &c, &d);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f", a, b, c, d);
//    return 0;
// }
// int main()
// {
//    int i = 1;
//    int max = 0;
//    int n = 0;
//    scanf("%d",&max);//输入的第一个就是max
//    while (i < 4)
//    {
//        scanf("%d", &n);//输入的后三个数（因为循环三次） 
//        if (n > max)
//            max = n;
//        i++;
//    }
//    printf("%d", max);
//    return 0;
// }
// int main()
// {
//    int s, v, t, w, total;
//    scanf("%d %d", &s, &v);
//    w = (s + v - 1) / v;  //整数向上取整
//    total = w + 10;
//    t = (480 - total % 1440 + 1440) % 1440;
//    printf("%02d:%02d", t / 60, t % 60);
//    return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//    int h, r, n;
//    float pi = 3.14;
//    scanf("%d %d", &h, &r);
//    double v = pi * r * r * h;//20e3用 double
//    n = (int)ceil(20e3 / v);//小数取整   n=(20e3+v-1)/v; //整数向上取整
//    printf("%d", n);
//    return 0;
// }  
// int main() {
//     void *a[] = {(void *)1, (void *)2, (void *)3, (void *)4, (void *)5};
//     printf("%d\n", *((char *)a + 1));
//     printf("%d\n", *(int *)(char *)a + 1);
//     printf("%d\n", *((int *)a + 2));
//     printf("%lld\n", *((long long *)a + 3));
//     printf("%d\n", *((short *)a + 4));
//     return 0;
// }
