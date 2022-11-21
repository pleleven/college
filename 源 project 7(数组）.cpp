////一维数组定义输入输出求和求最大值及位置 
//#include <stdio.h>
//#define N 8
//int main()
//{
//	int i, a[N];
//	int s = 0;
//	int max, maxp;
//	float avg;
//	//printf("请输入%d个数：",N)；
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);
//		s = s + a[i];
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//
//	}
//	max = a[0];
//	maxp = 1;
//	for (i = 1; i < N; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//			maxp = i + 1;
//		}
//	}
//	avg = (float)s / N;
//	printf("\ns=%d,avg=%7.2f\n", s, avg);
//	printf("max=%d,maxp=%d\n", max, maxp);
//	return 0;
//}
//
//
////二维数组输入输出求和求最大小值及位置
//#include <stdio.h>
//#include <math.h>
//#define M 4
//#define N 5
//int main()
//{
//	int i, j;
//	int a[M][N];//通用数组定义。M,N为符号常量 
//	int s = 0;
//	int max, maxp, maxq;//最大值，最大值所在行，最大值所在列 
//	float avg;
//	//printf("请输入%d个数：",N)；
//	for (i = 0; i < M; i++)                 //二维数组输入 
//	{
//		for (j = 0; j < N; j++)
//		{
//			//scanf("%d",&a[i][j]);  //通过键盘输入依次给二维数组每个元素赋值 
//			a[i][j] = rand() % 19 + 1;     //通过随机数给二维数组赋值 
//			s = s + a[i][j];             //二维数组求和 
//		}
//	}
//	for (i = 0; i < M; i++)                 //二维数组输出 
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	max = a[0][0];      //求二维数组最大值及位置（前提是数组已经定义并赋值） 
//	maxp = 0;
//	maxq = 0;
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				maxp = i;
//				maxq = j;
//			}
//		}
//	}
//	avg = (float)s / (M * N);   //求平均值 
//	printf("\ns=%d,avg=%7.2f\n", s, avg);
//	printf("max=%d,maxp=%d,maxq=%d\n", max, maxp, maxq);
//	return 0;
//}
//
//
////一维数组的输入输出 
//#include <stdio.h>   //标准输入输出头文件
//#include <math.h>    //数学头文件
//#include <stdlib.h>  //库头文件 
//#define N 8
//int main()
//{
//	int i;
//	int a[N];        //一维数组定义 
//	srand(9);       //随机数生成器，初始化种子 
//	for (i = 0; i < N; i++)
//	{
//		//scanf("%d",&a[i]);
//		//a[i]=i*10+1;
//		a[i] = rand() % 20 + 5;	//通过随机数给不同下标的数组元素赋值 
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);//依次输出每一个数组元素 
//
//	}
//	return 0;
//}
//
//
////一维数组输入输出并顺序查出某个数
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#define N 8
//int main()
//{
//	int i;
//	int a[N];
//	int x;
//	srand(9);
//	for (i = 0; i < N; i++)
//	{
//		//scanf("%d",&a[i]);
//		//a[i]=i*10+1;
//		a[i] = rand() % 20 + 5;
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//
//	}
//	printf("\n please input :");
//	scanf("%d", &x);
//	for (i = 0; i < N; i++)
//	{
//		if (x == a[i])break;
//
//	}
//	if (i < N)
//		printf("%d 在数组中，位置为：%d ", x, i);
//	else
//		printf("not\n");
//
//	return 0;
//}
//
//
////找出一批数中的素数放在数组中 
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#define N 10
//int main()
//{
//	int i, j;
//	int a[N];
//
//	srand(27);
//	for (i = 0; i < N; i++)
//	{
//		//scanf("%d",&a[i]);
//		//a[i]=i*10+1;
//		a[i] = rand() % 20 + 5;
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//
//	}
//	printf("\n");
//
//	for (i = 0; i < N; i++)
//	{
//		for (j = 2; j <= a[i] / 2; j++)
//			if (a[i] % j == 0) break;
//		if (j > a[i] / 2)
//		{
//			printf("%d ", a[i]);
//		}
//
//	}
//
//
//	return 0;
//}
//
//
//
//
//
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	float x, y, a;
//	for (y = 1.5; y > -1.5; y -= 0.1)
//	{
//		for (x = -1.5; x < 1.5; x += 0.05)
//		{
//			a = x * x + y * y - 1;
//			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
//		}
//		system("color 0c");
//		putchar('\n');
//	}
//	int main();
//	{
//		char arr1[] = "   I must have said I loved you hundreds of years ago";
//		char arr2[] = "   **************************************************";
//		int left = 0;
//		int right = strlen(arr1) - 1;
//		printf("%s\r", arr2);
//		Sleep(1000);
//		while (left <= right)
//		{
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			right--;
//			left++;
//			printf("%s\r", arr2);
//			Sleep(160);
//		}
//		printf("%s", arr2);
//		return 0;
//	}
//}
#include<stdio.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;//需要查找的数字
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    int mid = (left + right) / 2;
    while (left <= right)
    {
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
            printf("找到了：%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("找不到了\n");
    }
    return 0;
}