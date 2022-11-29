//递归程序1
#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//
//	print(num);
//
//	return 0;
//}




//递归程序2（编写函数不允许创建临时变量，求字符串的长度）
//创建临时变量
// int my_strlen(char* str)
//{
//	int count = 0;
//	while (* str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//不创建临时变量
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "pleleven";
//	printf("%d\n", my_strlen(arr));	
//	return 0;
//}
// 
//if (*str != '\0')
//return 1 + my_strlen(str + 1);  1+strlen(bi\0)
//
//if (*str != '\0')
//return 1 + my_strlen(str + 1);  1 + strlen(b\0)
//
//if (*str != '\0')
//return 1 + my_strlen(str + 1);  1 + strlen(\0)




//递归程序3（递归与迭代）（求n的阶乘）
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//6
//return n * Fac(n - 1); 3*fac2
//return n * Fac(n - 1); 2*fac1
//return n * Fac(n - 1); 1




//递归程序4（求第4个斐波那契数）
//int f(int n)
//{
//	if (n <= 2)
//		return 1;
//	else (n > 2);
//		return (f(n - 1) + f(n - 2));
//}
//int main()
//{
//	int n=0 ;
//	scanf_s("%d", &n);
//	int ret = f(n);
//	printf("%d",ret);
//	return 0;
//}
//1 1 2 3 5 8




//递归程序5



//函数程序1（求最大公约数和最小公倍数）
//1：穷举法
//void f(int a, int b)
//{
//	int i, j;
//	int max = 0;
//	for (i = a;; i++)//求最小公倍数
//	{
//		if (i % a == 0 && i % b == 0)//用大于等于a和b的数i(i大于等于a和b，无上限)分别除以a和b，同时除尽的第一个数即为最小公倍数
//			break;//然后循环结束
//	}
//
//	for (j = 1; j <= a; j++)//求最大公约数
//	{
//		if (a % j == 0 & b % j == 0)//让a和b分别除以j(j从一开始，j有上限要小于等于a或b)
//	//利用j++，如果a和b能同时除尽j
//		{
//			if (max < j)//再判断j是不是小于a或b的最大公约数，不是则赋值最大值
//				max = j;//这样求出来的max即为最大公约数
//		}
//	}
//	printf("最小公倍数：%d\n最大公约数：%d\n", i, max);//最后最大公约数用max表示了
//}
//int main()
//{
//	int a, b;
//	int max = 0;
//	scanf_s("%d%d", &a, &b);
//	f(a, b);
//}

////2:辗转相除法
//void f(int m, int n)
//{
//	int k, a, b;
//	//交换两个数，让较大的一个等于a,较小的一个数等于b
//	if (m < n)
//	{
//		a = n;
//		b = m;
//	}
//	else
//	{
//		a = m;
//		b = n;  
//	}
//	//辗转相除法
//	while (b != 0)
//	{
//		k = a % b;
//		a = b;
//		b = k;
//	}
//	printf("%d 和 %d的最大公约数:%d\n", m, n, a);
//	printf("%d 和 %d的最小公倍数:%d\n", m, n, m * n / a);
//}
//int main()
//{
//	int m, n;
//	scanf_s("%d%d",&m,&n );
//	f(m, n);
//}




//递归程序6（汉诺塔程序）
//#include<stdio.h>
//
//void move(char A, char C, int n)
//{
//	printf("把第%d个圆盘从%c--->%c\n", n, A, C);
//}
//
//void HanoiTower(char A, char B, char C, int n)
//{
//	if (n == 1)
//	{
//		move(A, C, n);
//	}
//	else
//	{
//		//将n-1个圆盘从A柱借助于C柱移动到B柱上
//		HanoiTower(A, C, B, n - 1);
//		//将A柱子最后一个圆盘移动到C柱上
//		move(A, C, n);
//		//将n-1个圆盘从B柱借助于A柱移动到C柱上
//		HanoiTower(B, A, C, n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("输入A柱子上的圆盘个数：");
//	scanf_s("%d", &n);
//	//将n个圆盘从A柱借助于B柱移动到C柱上
//	HanoiTower('A', 'B', 'C', n);
//	return 0;
//}




//递归程序7



//素数的应用：
//1:判断素数 prime(n)
//2:孪生素数 prime(i) && prime(i+2)
//#include<stdio.h>
//int Function(int n)//函数判断是否为素数
//{
//	int i;
//	for (i=2; i<n; i++)
//	{
//		if ( n%i == 0 )
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int N;
//	int count=0;//count存放组数
//	scanf_s("%d",&N);
//	for(int i=2; i<=N; i++)
//	{
//		if(Function(i)==1 && Function(i+2)==1)//判断i和i+2是否同为孪生素数
//		{
//			printf(" %4d 和 %4d 是孪生素数\n",i,i+2);
//			count++;//组数+1
//		}
//	}
//	printf("总共有%d组孪生素数",count);
//	return 0;
//}


//3:回文素数：m是i的逆序数  prime(i) && prime(m) && i<m
//#include<stdio.h>
//int prime(int i);		//判断素数的函数
//int palindrome(int i);  //判断回文数的函数
//
//int main()
//{
//	int n;				//单纯求1000内回文素数可将前三行删去,将第五行的n改为1000.
//	printf("请输入需要多少以内的回文素数\n");
//	scanf_s("%d", &n);
//	printf("该范围内的回文素数如下:\n");
//	for (int i = 10; i < n; i++)
//	{
//		if (prime(i))				//判断是素数
//		{	
//			if (palindrome(i))	//判断该素数是回文数
//			{
//				printf("%d\n", i);	//输出该回文素数
//			}
//		}
//	}
//	return 0;
//}
//int prime(int i)	//判断素数的函数
//{
//	int j = 2;
//	for (j; j < i; j++)
//	{
//		if (i % j == 0)  //如果j能被小于j的数整除,则返回false 0;
//		{
//			return 0;
//		}
//		else	
//		{			
//			return 1;
//		}
//	}
//}
//int palindrome(int i)
//{
//	int x, y;
//	int z = 0;                                                 
//	                                                            i=123   z=0     x=123
//		                                                        y=3     z=3     i=12
//		                                                        y=2     z=32    i=1
//		                                                        y=1     z=321   i=0
//	x = i;
//	while (i != 0)		//对数进行倒转如:将123倒转为321
//	{
//		y = i % 10;  	//获得i的末位数
//		z = z * 10 + y;	//每次自乘十后加末位数
//		i /= 10;	//每次自除十舍弃末尾数
//	}
//	if (x == z)		//判断倒转后是否等于原数,即是否为回文数
//	{
//		return 1;	//是则返回真1,否则返回假0;
//	}
//	else
//	{
//		return 0;
//	}
//}

//4:验证哥德巴赫猜想： n=100; 
//                     if(n==4)
//					 printf(4=2+2\n);
//					 for(i=3;i<=n/2;i=i+2)
//					 if(prime(i) && prime(n-i) && i<m)
//#include<stdio.h>
//int sushu(int i);
//int main()
//{
//	puts("输入一个大于6的偶数");
//	int n;
//	scanf("%d", &n);
//	int i, j;
//	for (i = 2; i < n; i++) {
//		if (sushu(i) == 1) {
//			j = n - i;
//			if (sushu(j) == 1) {
//				printf("%d可分解为%d+%d", n, i, j);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//int sushu(int i)
//{
//	int j;
//	for (j = 2; j < i; j++) {
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}

//将数组倒置
//#include<stdio.h>
//#include<stddef.h>
//int main(void)
//{
//	char ch[] = { "12345678" };
//	int i, len, n;
//	char temp;                   //用于存储临时值
//	len = sizeof(ch) / sizeof(char);//len求出ch数组的元素个数
//	len = len - 1;                 //数组下标的最大值需要将元素个数减1
//	n = len;
//	for (i = 0; i <= len; i++)
//	{
//		temp = ch[i];           //将前面的元素给tmep临时存储 
//		ch[i] = ch[len];		  //前面元素与后面元素对调
//		ch[len] = temp;
//		len--;
//	}
//	for (i = 0; i <= n; i++)
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}



//#define N 9
//int main()
//{
//	int a[N], t;
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%d", &a[i]);
//		for (i = 0; i <= N; i++)
//		{
//			t = a[i];
//			a[i] = a[5 + i];
//			a[5 + i] = t;
//		}
//		for (i = 0; i < N; i++)
//		{
//			printf("%d", a[i]);
//		}
//		return 0;
//	}
//}

​

//#include<stdio.h>
//#define N 10 //顺序查找法
//int main()
//{
//	int num[N] = { 1,4,19,6,28,100,9,13,16,40 };
//	int i;
//	int x;
//	scanf_s("%d", &x);
//	for (i = 0; i < N; i++)
//	{
//		if (num[i] == x)
//		{
//			break;
//		}
//	}
//	if (i < N)
//		printf("查找成功，是第%d个元素，职位%d\n", i, num[i]);
//	else
//		printf("查找不成功，没有这个元素\n");
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void yhtri(int line)  //这里使用函数来解决
//{
//	int i = 0, j = 0;
//	int arr[20][20] = { 0 };   //先定义一个二维数组
//	for (i = 0; i <= line - 1; i++)
//	{
//		if (i == 0)
//			arr[0][0] = 1;          //由特征可知一二行均为1，可让其特殊化
//		else if (i == 1)            //这里代码写的略微粗糙，读者可自主进行优化
//		{
//			arr[1][0] = 1;
//			arr[1][1] = 1;
//		}
//		else
//		{
//			for (j = 1; j < i; j++)      //读取两侧的1以外的数字进行操作
//			{
//				arr[i][0] = 1;
//				arr[i][i] = 1;
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];  //实现三角形相加
//			}
//		}
//	}
//	for (i = 0; i < line; i++)//打印数组
//	{
//		for (j = line; j > i + 1; j--)
//		{
//			printf("   ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-6d", arr[i][j]);  //此处用-6d的原因是如果输入行数过大，-6d可以更清晰
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//	printf("请输入杨辉三角的行数：");
//	scanf_s("%d", &line);
//	yhtri(line);        //调用函数
//	return 0;
//}​
