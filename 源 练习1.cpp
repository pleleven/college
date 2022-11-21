//黄书36-6'
//#include<stdio.h>
//int main()
//{
//    int a[90];
//    int m, i, j;
//    scanf_s("%d", &m);
//    j = 0;
//    for (i = 1; i <= m; i++)
//    {
//        if ((i % 7) == 0 || (i % 11) == 0)
//            a[j++] = i;
//    }
//
//    for (i = 0; i < j; i++)
//        printf("%d\n", a[i]);
//}



//杨辉三角
//#include <stdio.h>
//void main()
//{
//    int a[60][60];
//    int i, j;
//    int n;
//    printf("请输入行数:");
//    scanf_s("%d", &n);
//    for (i = 0; i < n; i++) 
//    {
        //for (j = 0; j <= i; j++)
        //{
        //    if (j == 0 || i == j)//在第一列或者在对角线上
        //    {
        //        a[i][j] = 1;
        //    }
        //    else
        //    {
        //        a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        //    }
        //}
//    }
//    //输出杨辉三角
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%d\t", a[i][j]);
//        }
//        printf("\n");
//    }
//
//}


//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	printf("%d", ~a);
//	return 0;
//}






//#include <stdio.h>
//#include <stdlib.h>
//#define N 5
//#define M 5
//int main()
//{
//	int i, j;
//	int a[N][M];
//	for (i = 0; i <= N; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			if (j >= i)
//			{
//				a[i][j] = 1	;
//			}
//			else
//				a[i][j] = i - j + 1;
//		}
//	}
//	for (i = 0; i <= N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int a;
//    scanf_s("%d", &n);
//    for (n = 1; n <= 5; n++)
//    
//    { 
//        a = n * (n - 1);
//
//    
//    }
//
//
//}


//三个整数按顺序排序
//#include<stdio.h>
//
//int main()
//{
//    int a, b, c;
//    scanf_s("%d %d %d", &a, &b, &c);
//    if (a < c)
//    {
//        int tep = c;
//        c = a;
//        a = tep;
//    }
//    if (a < b)
//    {
//        int tep = b;
//        b = a;
//        a = tep;
//    }
//    if (b<c)
//    {
//        int tep = c;
//        c = b;
//        b = tep;
//    }
//        printf("%d %d %d", a, b, c);
//    return 0;
//}



//猜数字游戏
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<string.h>
//void menu()
//{
//    printf("##############################################\n");
//    printf("#################1.play game##################\n");
//    printf("#################2.exit#######################\n");
//    printf("##############################################\n");
//}
//void game()
//{
//    int x = 0;
//    int guess = 0;
//    x = rand() % 100 + 1;
//    while (1)
//    {
//        printf("请猜数字");
//        scanf_s("%d", &guess);
//        if (guess > x)
//        {
//            printf("猜大了\n");
//        }
//        else if (guess < x)
//        {
//            printf("猜小了\n");
//        }
//        else
//        {
//            printf("恭喜您答对了！\n");
//            break;
//        }
//    }
//}
//int main()
//{
//    int input=0;
//    srand((unsigned int)time(NULL));
//    do  
//    {
//        menu();
//        printf("请选择(1/0):");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("退出游戏");
//            break;
//        default:
//            printf("选择错误，请重新选择");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}



//打印100—200之间的素数
//#include<stdio.h>
//
//int main()
//{
//    int count = 0;
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        if (i == j)
//        {
//            count++;
//            printf("%5d\n", i);
//        }
//    }
//    printf("\n%d",count);
//    return 0;
//}

//打印素数（函数版）


//int is_prime(int n)
//{
//    int j = 0;
//    for (j = 2; j < n; j++)
//    {
//        if (n % j == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i) == 1)
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}




//二分法查找
//#include<stdio.h>
//
// int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;//需要查找的数字
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//    
//   while(left<=right)
//{
//       int mid = (left + right) / 2;
//    if (arr[mid] < k) 
//    {
//        left = mid + 1;
//    }
//    else if (arr[mid] > k)
//    {
//        right = mid - 1;
//    }
//    else
//    {
//        printf("找到了：%d\n", mid);
//        break;
//    }
//}
//   if (left > right)
//   {
//       printf("找不到了\n");
//   }
//    return 0;
//}



//二分法查找函数版

//#include<stdio.h>
//int binary_search(int arr[], int key, int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] > key)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < key)
//        {
//            left = mid - 1; 
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int key = 7;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = binary_search(arr, key, sz);
//    if (-1 == ret)
//    {
//        printf("找不到\n");
//    }
//    else
//    {
//        printf("找到了，下标是：%d\n", ret);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	   //计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//	int i = 0;//做下标，此时可以是变量
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//    {
//        printf("&arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//    for (arr[i][j] = 0; arr[i][j] < 12; arr[i][j]++)
//    {
//        printf("%-3d ", arr[i][j]);
//
//        printf("\n");
//    }
//	return 0;
//}	

//#include <stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}	
//	}												
//	return 0;
//}

//#include<stdio.h>
//
//void Lisa(int arr[])
//{
//    printf("a = %d\n", sizeof(arr));//数组降维成指针后的指针大小，在32位系统下指针都为4字节
//    printf("b = %d\n", sizeof(arr[0]));//数组首元素的大小
//    printf("sz =a / b  = %d\n", sizeof(arr) / sizeof(arr[0]));//大小为1
//    printf("arr = %p\n", arr);//数组首元素地址
//    printf("&arr = %p\n", &arr);//指针的地址
//    printf("arr + 1 = %p\n", arr + 1);//下一个元素的地址
//    printf("&arr + 1 = %p\n", &arr + 1);//指针下一项的地址
//}
//
//int main(void)
//{
//    int Shuzu[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    printf("a = %d\n", sizeof(Shuzu));//数组总大小
//    printf("b = %d\n", sizeof(Shuzu[0]));//数组首元素大小
//    printf("sz =a / b = %d\n", sizeof(Shuzu) / sizeof(Shuzu[0]));//数组元素个数
//    printf("Shuzu = %p\n", Shuzu);//数组首元素地址
//    printf("&Shuzu = %p\n", &Shuzu);//代表整个数组，但是地址仍是首元素地址
//    printf("Shuzu + 1 = %p\n", Shuzu + 1);//下一个元素的地址
//    printf("&Shuzu + 1 = %p\n", &Shuzu + 1);//跳过整个数组后紧挨着的地址
//                                                           //此时该地址减去首元素地址等于数组大小
//    printf("\n\n");
//    Lisa(Shuzu);
//
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int a[4] = { 20, 345, 700, 22 };
//    int b[4] = { 56720, 9999, 20098, 2 };
//    int c[4] = { 233, 205, 1, 6666 };
//    int d[4] = { 34, 0, 23, 23006783 };
//
//
//    printf("%-9d %-9d %-9d %-9d\n", a[0], a[1], a[2], a[3]);
//    printf("%-9d %-9d %-9d %-9d\n", b[0], b[1], b[2], b[3]);
//    printf("%-9d %-9d %-9d %-9d\n", c[0], c[1], c[2], c[3]);
//    printf("%-9d %-9d %-9d %-9d\n", d[0], d[1], d[2], d[3]);
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i, a[10];
//    //将1~10放入数组中
//    for (i = 0; i < 10; i++)
//    {
//        a[i] = (i + 1);
//        printf("%d ", a[i]);
//    }
//
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i, a[10];
//
//    //从控制台读取用户输入
//    for (i = 0; i < 10; i++)             //数组 a 的最大下标是 9，也就是不能超过 10
//    {
//        scanf_s("%d", &a[i]);         //注意取地址符 &，不要遗忘哦
//    }
//
//    //依次输出数组元素
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", a[i]);
//    }
//
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int i, n, thisindex=0 ;
//    int a[10] = { 1,10,6,296,177,23,0,100,34,999 };
//    scanf_s("%d", &n);
//    for (i = 0; i < 10; i++)
//    {
//        if (a[i] == n)           //if括号中要用==，且后面用大括号{}
//        {
//            thisindex = i;      //把i赋值给thisindex
//            break;            //找到相等的数，打印下标，跳出循环
//        }
//        
//    }
//    if (thisindex < 0)
//    {
//        printf("%d isn't  in the array.\n", n);
//    }
//    else  
//    {
//        printf("%d is in the array, it's index is %d.\n", n, thisindex);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int m, n;
//    scanf_s("%d%d", &m, &n);
//    printf("sum=%d\n", add(m, n));
//    printf("m=%d,n=%d\n", m, n);
//    return 0;
//}
//
//
//int pcb(int a, int b);
//{
//    int r;
//    r = a % b;
//    while (r != 0)
//    {
//        a = b;
//        b = r;
//        r = a % b;
//    }
//    return b;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//    char input[20] = { 0 };
//    system("shutdown -s -t 100");
//    again: printf("请注意，您的电脑还有100秒就会关机，输入“我卢志城是傻逼即可解锁\n");
//    scanf_s("%s", input);
//    if (input == "我卢志城是傻逼")
//    {
//        system("shutdown -a");
//    }
//    else
//    { 
//        goto again;
//    }
//    return 0;
//}
   