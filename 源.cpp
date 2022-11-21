//#include <stdio.h>
//int main()
//{
//    int input = 0;
//    printf("徐思涵今天想不打游戏\n");
//    printf("徐思涵今天到底打不打游戏呢（1/0）?");
//    scanf_s("%d", &input);
//    if (input == 1)
//    {
//        printf("请客吃饭一天");
//    }
//    else
//    {
//        printf("不用请客");
//    }
//    return 0;
//}
//{
//	char arr[] = "hello";
//	return 0;
//}
//#include<stdio.h>
//
//int main(void)
//
//{
//
//    unsigned int un_a = 2500000000;
//    long l_b = 65539;
//    printf("In this system:\n");
//    printf("short  has %d bytes.\n", sizeof(short));
//    printf("int    has %d bytes.\n", sizeof(int));
//    printf("long  has %d bytes.\n", sizeof(long));
//    printf("un_a = %u not %d\n", un_a, un_a);
//    printf("l_b = %ld not %hd\n", l_b, l_b);
//    return 0;
//}
//#include<stdlib.h>
//#include<stdio.h>
//int comp(const void* j, const void* i);
//void p(int b[], char n[]);
//int main(void)
//{
//    static char n[] = { '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A' };
//    int a[53], b1[13], b2[13], b3[13], b4[13];
//    int b11 = 0, b22 = 0, b33 = 0, b44 = 0, t = 1, m, flag, i;
//    while (t <= 52)  /*控制发52张牌*/
//    {
//        m = rand() % 52;  /*产生0到51之间的随机数*/
//        for (flag = 1, i = 1; i <= t && flag; i++)  /*查找新产生的随机数是否已经存在*/
//            if (m == a[i])
//                flag = 0;  /*flag=1表示产生的是新的随机数，flag=0表示新产
//                          生的随机数已经存在*/
//        if (flag)
//        {
//            a[t++] = m;  /*如果产生了新的随机数，则存入数组*/
//            /*根据t的模值，判断当前的牌应存入哪个数组中*/
//            if (t % 4 == 0)
//                b1[b11++] = a[t - 1];
//            else
//                if (t % 4 == 1)
//                    b2[b22++] = a[t - 1];
//                else
//                    if (t % 4 == 2)
//                        b3[b33++] = a[t - 1];
//                    else
//                        if (t % 4 == 3)
//                            b4[b44++] = a[t - 1];
//        }
//    }
//    qsort(b1, 13, sizeof(int), comp);  /*将每个人的牌进行排序*/
//    qsort(b2, 13, sizeof(int), comp);
//    qsort(b3, 13, sizeof(int), comp);
//    qsort(b4, 13, sizeof(int), comp);
//    p(b1, n);  /*分别打印每个人的牌*/
//    p(b2, n);
//    p(b3, n);
//    p(b4, n);
//    return 0;
//}
//void p(int b[], char n[])
//{
//    int i;
//    printf("\n\006 ");  /*打印黑桃标记*/
//    for (i = 0; i < 13; i++)  /*将数组中的值转换为相应的花色*/
//        if (b[i] / 13 == 0)  /*找到该花色对应的牌*/
//            printf("%c ", n[b[i] % 13]);
//    printf("\n\003 ");  /*打印红桃标记*/
//    for (i = 0; i < 13; i++)
//        if ((b[i] / 13) == 1)
//            printf("%c ", n[b[i] % 13]);
//    printf("\n\004 ");  /*打印方块标记*/
//    for (i = 0; i < 13; i++)
//        if (b[i] / 13 == 2)
//            printf("%c ", n[b[i] % 13]);
//    printf("\n\005 ");  /*打印梅花标记*/
//    for (i = 0; i < 13; i++)
//        if (b[i] / 13 == 3 || b[i] / 13 == 4)
//            printf("%c ", n[b[i] % 13]);
//    printf("\n");
//}
//int comp(const void* j, const void* i)  /*qsort调用的排序函数*/
//{
//    return(*(int*)i - *(int*)j);
//}
//#include<windows.h>
//int main()
//{
//	char arr1[] = "I love China!";
//	char arr2[] = "*************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\r", arr2);
//	Sleep(1000);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//		left++;
//		printf("%s\r", arr2);
//		Sleep(1000);
//	}
//	printf("%s", arr2);
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int i, j;
//	int x = 30;
//	int y = 10;
//
//	int TOP = 1;
//	int Bottom = 10;
//
//	int Left = 0;
//	int Right = 50;
//
//	int speed_x = 1;
//	int speed_y = 1;
//
//	while (1)
//	{
//
//		if (y > Bottom || y < TOP)
//		{
//			speed_y = -speed_y;
//		}
//
//		if (x<Left || x>Right)
//		{
//			speed_x = -speed_x;
//		}
//
//		x = x - speed_x;
//		y = y - speed_y;
//
//		system("cls");
//
//		for (j = 0; j < y; j++)
//		{
//			printf("\n");
//		}
//
//		for (i = 0; i < x; i++)
//		{
//			printf(" ");
//		}
//		printf("O\n");
//	}
//
//	return 0;
//}
///*--------------------------------------
//project： 双人小游戏
//anthor：   LLz
//操作    移动    逆、顺时针旋转   发射子弹
//玩家1   4568    7 9 			      0
//玩家2   adws 	  q e 			      空格
//--------------------------------*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <windows.h>
// 游戏画面尺寸
//#define High 20  
//#define Width 100        
// 全局变量
//int position_x, position_y, p_x, p_y, turn_a, turn_b, num_a, num_b, num_max, life_a = 10, life_b = 10; // 飞机位置
//int canvas[High][Width] = { 0 }; // 二维数组存储游戏画布中对应的元素
//						 0为空格，1为飞机*，2为子弹|，3为敌机@
//int next[8][2] = { {0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1} }; //从右  右下  下  左下 
//int bullet_a[21][4];
//int bullet_b[21][4];   //a b玩家子弹20发；            
//void gotoxy(int x, int y)  //光标移动到(x,y)位置
//{
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos;
//	pos.X = x;
//	pos.Y = y;
//	SetConsoleCursorPosition(handle, pos);
//}
//void startup() // 数据初始化
//{
//	num_a = 0;
//	num_b = 0;
//	turn_a = 0;
//	turn_b = 0;
//	p_x = High / 2;//左边飞机
//	p_y = Width * 4 / 5;
//	canvas[p_x][p_y] = 5;//?
//	position_x = High / 2;//右边飞机
//	position_y = Width / 5;
//	canvas[position_x][position_y] = 1;
//}
//void show()  // 显示画面
//{
//	gotoxy(0, 0);  // 光标移动到原点位置，以下重画清屏
//	int i, j;
//	for (i = 0; i < High; i++)
//	{
//		for (j = 0; j < Width; j++)
//		{
//			if (i == 0 || i == High - 1 || j == 0 || j == Width - 1) {
//				canvas[i][j] = 4;
//				printf("0");
//				continue;
//			}
//			if (canvas[i][j] == 0)
//				printf(" ");   //   输出空格
//			else if (canvas[i][j] == 1)
//				printf("A");   //   输出飞机a
//			else if (canvas[i][j] == 2)
//				printf("B");   //   输出飞机B
//			else if (canvas[i][j] == 3)
//				printf("o");   //  输出子弹o 
//			else if (canvas[i][j] == 4)
//				printf("+");   //	输出飞机a指向 
//			else if (canvas[i][j] == 5)
//				printf("+");   //	输出飞机b指向  
//		}
//		printf("\n");
//	}
//	初始血量显示
//	printf("A：");
//	for (i = 1; i <= 10; i++)
//		if (i <= life_a)
//			printf("■");
//		else printf(" ");
//	printf("\nB: ");
//	for (i = 1; i <= 10; i++)
//		if (i <= life_b)
//			printf("■");
//		else printf(" ");
//}
//void updateWithoutInput()  // 与用户输入无关的更新
//{
//	int i, j, k;
//	num_max = num_a > num_b ? num_a : num_b;
//	for (i = 1; i <= num_max; i++) {
//		if (bullet_a[i][2] == 0 || bullet_a[i][2] == High - 1) {
//			bullet_a[i][0] = -bullet_a[i][0];
//		}
//		else if (bullet_a[i][3] == 0 || bullet_a[i][3] == Width - 1) {
//			bullet_a[i][1] = -bullet_a[i][1];
//		}
//		if (bullet_b[i][2] == 0 || bullet_b[i][2] == High - 1) {
//			bullet_b[i][0] = -bullet_b[i][0];
//		}
//		else if (bullet_b[i][3] == 0 || bullet_b[i][3] == Width - 1) {
//			bullet_b[i][1] = -bullet_b[i][1];
//		}
//		canvas[bullet_a[i][2]][bullet_a[i][3]] = 0;
//		canvas[bullet_b[i][2]][bullet_b[i][3]] = 0;
//		bullet_a[i][2] += bullet_a[i][0];
//		bullet_a[i][3] += bullet_a[i][1];
//		bullet_b[i][2] += bullet_b[i][0];
//		bullet_b[i][3] += bullet_b[i][1];
//		canvas[bullet_a[i][2]][bullet_a[i][3]] = 3;
//		canvas[bullet_b[i][2]][bullet_b[i][3]] = 3;
//	}
//	for (k = 1; k <= num_max; k++)
//	{
//		if (((position_x == bullet_a[k][2]) && (position_y == bullet_a[k][3])) || ((position_x == bullet_b[k][2]) && (position_y == bullet_b[k][3])))  // 敌机撞到我机
//		{
//			life_a--;
//			if (life_a <= 0) {
//				printf("A 玩家失败！\n");
//				Sleep(3000);
//				system("pause");
//				exit(0);
//			}
//		}
//		if (((p_x == bullet_a[k][2]) && (p_y == bullet_a[k][3])) || ((p_x == bullet_b[k][2]) && (p_y == bullet_b[k][3])))  // 敌机撞到我机
//		{
//			life_b--;
//			if (life_b <= 0) {
//				printf("B 玩家失败！\n");
//				Sleep(3000);
//				system("pause");
//				exit(0);
//			}
//		}
//	}
//}
//void updateWithInput()  // 与用户输入有关的更新
//{
//	char input;
//	if (kbhit())  // 判断是否有输入
//	{
//		input = getch();  // 根据用户的不同输入来移动，不必输入回车
//		if (input == 'a' && position_y > 1)
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			canvas[position_x][position_y] = 0;
//			position_y--;  // 位置左移
//			canvas[position_x][position_y] = 1;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == 'd' && position_y < Width - 2)
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			canvas[position_x][position_y] = 0;
//			position_y++;  // 位置右移
//			canvas[position_x][position_y] = 1;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == 'w' && position_x > 1)
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			canvas[position_x][position_y] = 0;
//			position_x--;  // 位置上移
//			canvas[position_x][position_y] = 1;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == 's' && position_x < High - 2)
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			canvas[position_x][position_y] = 0;
//			position_x++;  // 位置下移
//			canvas[position_x][position_y] = 1;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == ' ' && num_a <= 20)  // 发射子弹
//		{
//			num_a++;
//			bullet_a[num_a][0] = next[turn_a][0];
//			bullet_a[num_a][1] = next[turn_a][1];
//			bullet_a[num_a][2] = position_x + bullet_a[num_a][0];
//			bullet_a[num_a][3] = position_y + bullet_a[num_a][1];
//			canvas[bullet_a[num_a][2]][bullet_a[num_a][3]] = 3;
//		}
//		else if (input == 'q')  // 炮弹换方向 
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			turn_a--;
//			if (turn_a < 0)
//				turn_a = 7;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == 'e')  //  炮弹换方向 
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			turn_a++;
//			if (turn_a > 7)
//				turn_a = 0;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == '4' && position_y > 1)
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			canvas[p_x][p_y] = 0;
//			p_y--;  // 位置左移
//			canvas[p_x][p_y] = 2;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '6' && p_y < Width - 2)
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			canvas[p_x][p_y] = 0;
//			p_y++;  // 位置右移
//			canvas[p_x][p_y] = 2;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '8' && p_x > 1)
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			canvas[p_x][p_y] = 0;
//			p_x--;  // 位置上移
//			canvas[p_x][p_y] = 2;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '5' && p_x < High - 2)
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			canvas[p_x][p_y] = 0;
//			p_x++;  // 位置下移
//			canvas[p_x][p_y] = 2;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '0' && num_b <= 20)  // 发射子弹
//		{
//			num_b++;
//			bullet_b[num_b][0] = next[turn_b][0];
//			bullet_b[num_b][1] = next[turn_b][1];
//			bullet_b[num_b][2] = p_x + bullet_b[num_b][0];
//			bullet_b[num_b][3] = p_y + bullet_b[num_b][1];
//			canvas[bullet_b[num_b][2]][bullet_b[num_b][3]] = 3;
//		}
//		else if (input == '7')  // 炮弹换方向 
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			turn_b--;
//			if (turn_b < 0)
//				turn_b = 7;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '9')  //  炮弹换方向 
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			turn_b++;
//			if (turn_b > 7)
//				turn_b = 0;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//	}
//}
//int main()
//{
//	startup();  // 数据初始化
//	system("color 30");
//	while (1)  // 游戏循环执行
//	{
//		show();  // 显示画面
//		updateWithoutInput();  // 与用户输入无关的更新
//		updateWithInput();  // 与用户输入有关的更新
//	}
//	return 0;
//}
//
//#include<windows.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "I must have said I loved you hundreds of years ago";
//	char arr2[] = "**************************************************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\r", arr2);
//	Sleep(1000);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//		left++;
//		printf("%s\r", arr2);
//		Sleep(1000);
//	}
//	printf("%s", arr2);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>//sleep()函数
//int  main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		Sleep(1000);//屏幕休眠1秒
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
///*#include<windows.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "I must have said I loved you hundreds of years ago";
//	char arr2[] = "**************************************************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\r", arr2);
//	Sleep(1000);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//		left++;
//		printf("%s\r", arr2);
//		Sleep(160);
//	}
//	printf("%s", arr2);
//	return 0;
//}
//*/
//#include<stdio.h>
//#include<windows.h>
//
//#define K 0//这个频率0，就是不响，作为空拍 
//
//以下的所有表示音符的符号均来自fl studio 14 的fl keys的标注，或许和一般钢琴的标注不一样 。 
//只有三个八度的音高频率 ，因为一般人声可以达到的频率大概都会落在这些里面 
//#define C4 523
//#define C#4 554
//#define D4 588
//#define D#4 623
//#define E4 660
//#define F4 700
//#define F#4 742
//#define G4 786
//#define G#4 833
//#define A4 884
//#define A#4 936
//#define B4 992
//
//#define C5 1046
//#define C#5 1108
//#define D5 1176
//#define D#5 1246
//#define E5 1320
//#define F5 1400
//#define F#5 1484
//#define G5 1572
//#define G#5 1666
//#define A5 1768
//#define A#5 1872
//#define B5 1984
//
//#define C6 2092
//#define C#6 2216
//#define D6 2352
//#define D#6 2492
//#define E6 2640
//#define F6 2800
//#define F#6 2968
//#define G6 3144
//#define G#6 3332
//#define A6 3536
//#define A#6 3744
//#define B6 3968
//#define P 125   //折合bpm==120，原bpm为105，此处取了个近似值 
//
//typedef struct
//{
//	int frequency;
//	int duration;
//}PU;
//以下谱子，正是《社会主义好》的一段 
//PU t[] = { B5,1,B5,2,B5,1,D6,2,B5,5,A5,2,G5,1,E5,2,G5,1,A5,2,B5,2,K,5,B5,1,B5,2,B5,1,D6,2,E6,4,D6,3,E5,1
//,E5,2,E5,1,G5,2,A5,2,K,5,B5,3,A5,1,G5,3,G5,2,E5,1,D5,3,B5,2,D6,1,B5,2,A5,1,G5,2,A5,1,G5,2,A5,2,B5,3,E5,
//3,G5,1,D5,2,K,5,B5,2,D6,1,B5,1,D6,2,E6,3,E6,2,D6,1,E6,5,B5,2,A5,3,B5,1,E6,3,D6,3,B5,3,A5,3,K,1,E6,2,D6,
//1,B5,2,A5,1,G5,4,K,3,E6,2,D6,1,B5,2,A5,1,G5,4, };
//int main()
//{
//	int i;
//	结构体数组的长度sizeof(t)/sizeof(PU)得到，总结构体数组大小 / 单个结构体大小
//	for (i = 0; i < sizeof(t) / sizeof(PU); i++)
//		Beep(t[i].frequency, t[i].duration * P);
//}
//#include<stdio.h>
//#include<string.h>
//int main(int argc, char const* argv[])
//{
//    char* arr = NULL;
//    将歌词内容提取到内存中
//    FILE* fp = fopen("简单爱.lrc", "r");
//    arr = read_file(fp);
//    char* buf[128] = { arr };
//    歌词切割    
//    int i = 0;
//    while ((buf[i++] = strtok(buf[i], "\r\n")));
//    int num = i - 1;
//    打印前四行    
//    char *lrc=NULL;    
//    printf_link1(buf);
//    打印剩余歌词    
//    LRC* head = NULL;
//    head = printf_link2(head, buf, num);
//    printf_link(head);
//    模拟时钟，歌词的滚屏，反显，启动音乐
//    clock_lnk(head);
//    free_link(head);
//    return 0;
//}
//
//bool compare(int a, int b)//compare_int_int
//{
//	cout << "compare(int,int)" << endl;
//	return a > b;
//}
//bool compare(double a, double b)//compare_double_double
//{
//	cout << "compare(double,double)" << endl;
//	return a > b;
//}
//bool compare(char* a, char* b)//compare_char_char
//{
//	cout << "compare(char*,char*)" << endl;
//	return strcmp(a, b) > 0 ? true : false;
//}
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>
//#include <conio.h>
//
//#define ROW 22 //游戏区行数
//#define COL 42 //游戏区列数
//
//#define KONG 0 //标记空（什么也没有）
//#define WALL 1 //标记墙
//#define FOOD 2 //标记食物
//#define HEAD 3 //标记蛇头
//#define BODY 4 //标记蛇身
//
//#define UP 72 //方向键：上
//#define DOWN 80 //方向键：下
//#define LEFT 75 //方向键：左
//#define RIGHT 77 //方向键：右
//#define SPACE 32 //暂停
//#define ESC 27 //退出
//
//蛇头
//struct Snake
//{
//	int len; //记录蛇身长度
//	int x; //蛇头横坐标
//	int y; //蛇头纵坐标
//}snake;
//
//蛇身
//struct Body
//{
//	int x; //蛇身横坐标
//	int y; //蛇身纵坐标
//}body[ROW * COL]; //开辟足以存储蛇身的结构体数组
//
//int face[ROW][COL]; //标记游戏区各个位置的状态
//
//隐藏光标
//void HideCursor();
//光标跳转
//void CursorJump(int x, int y);
//初始化界面
//void InitInterface();
//颜色设置
//void color(int c);
//从文件读取最高分
//void ReadGrade();
//更新最高分到文件
//void WriteGrade();
//初始化蛇
//void InitSnake();
//随机生成食物
//void RandFood();
//判断得分与结束
//void JudgeFunc(int x, int y);
//打印蛇与覆盖蛇
//void DrawSnake(int flag);
//移动蛇
//void MoveSnake(int x, int y);
//执行按键
//void run(int x, int y);
//游戏主体逻辑函数
//void Game();
//
//int max, grade; //全局变量
//int main()
//{
//#pragma warning (disable:4996) //消除警告
//	max = 0, grade = 0; //初始化变量
//	system("title 贪吃蛇"); //设置cmd窗口的名字
//	system("mode con cols=84 lines=23"); //设置cmd窗口的大小
//	HideCursor(); //隐藏光标
//	ReadGrade(); //从文件读取最高分到max变量
//	InitInterface(); //初始化界面
//	InitSnake(); //初始化蛇
//	srand((unsigned int)time(NULL)); //设置随机数生成起点
//	RandFood(); //随机生成食物
//	DrawSnake(1); //打印蛇
//	Game(); //开始游戏
//	return 0;
//}
//
//隐藏光标
//void HideCursor()
//{
//	CONSOLE_CURSOR_INFO curInfo; //定义光标信息的结构体变量
//	curInfo.dwSize = 1; //如果没赋值的话，光标隐藏无效
//	curInfo.bVisible = FALSE; //将光标设置为不可见
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //获取控制台句柄
//	SetConsoleCursorInfo(handle, &curInfo); //设置光标信息
//}
//光标跳转
//void CursorJump(int x, int y)
//{
//	COORD pos; //定义光标位置的结构体变量
//	pos.X = x; //横坐标
//	pos.Y = y; //纵坐标
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //获取控制台句柄
//	SetConsoleCursorPosition(handle, pos); //设置光标位置
//}
//初始化界面
//void InitInterface()
//{
//	color(6); //颜色设置为土黄色
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			if (j == 0 || j == COL - 1)
//			{
//				face[i][j] = WALL; //标记该位置为墙
//				CursorJump(2 * j, i);
//				printf("■");
//			}
//			else if (i == 0 || i == ROW - 1)
//			{
//				face[i][j] = WALL; //标记该位置为墙
//				printf("■");
//			}
//			else
//			{
//				face[i][j] = KONG; //标记该位置为空
//			}
//		}
//	}
//	color(7); //颜色设置为白色
//	CursorJump(0, ROW);
//	printf("当前得分:%d", grade);
//	CursorJump(COL, ROW);
//	printf("历史最高得分:%d", max);
//}
//颜色设置
//void color(int c)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); //颜色设置
//	注：SetConsoleTextAttribute是一个API（应用程序编程接口）
//}
//从文件读取最高分
//void ReadGrade()
//{
//	FILE* pf = fopen("贪吃蛇最高得分记录.txt", "r"); //以只读的方式打开文件
//	if (pf == NULL) //打开文件失败
//	{
//		pf = fopen("贪吃蛇最高得分记录.txt", "w"); //以只写的方式打开文件
//		fwrite(&max, sizeof(int), 1, pf); //将max写入文件（此时max为0），即将最高得分初始化为0
//	}
//	fseek(pf, 0, SEEK_SET); //使文件指针pf指向文件开头
//	fread(&max, sizeof(int), 1, pf); //读取文件当中的最高得分到max当中
//	fclose(pf); //关闭文件
//	pf = NULL; //文件指针及时置空
//}
//更新最高分到文件
//void WriteGrade()
//{
//	FILE* pf = fopen("贪吃蛇最高得分记录.txt", "w"); //以只写的方式打开文件
//	if (pf == NULL) //打开文件失败
//	{
//		printf("保存最高得分记录失败\n");
//		exit(0);
//	}
//	fwrite(&grade, sizeof(int), 1, pf); //将本局游戏得分写入文件当中
//	fclose(pf); //关闭文件
//	pf = NULL; //文件指针及时置空
//}
//初始化蛇
//void InitSnake()
//{
//	snake.len = 2; //蛇的身体长度初始化为2
//	snake.x = COL / 2; //蛇头位置的横坐标
//	snake.y = ROW / 2; //蛇头位置的纵坐标
//	蛇身坐标的初始化
//	body[0].x = COL / 2 - 1;
//	body[0].y = ROW / 2;
//	body[1].x = COL / 2 - 2;
//	body[1].y = ROW / 2;
//	将蛇头和蛇身位置进行标记
//	face[snake.y][snake.x] = HEAD;
//	face[body[0].y][body[0].x] = BODY;
//	face[body[1].y][body[1].x] = BODY;
//}
//随机生成食物
//void RandFood()
//{
//	int i, j;
//	do
//	{
//		随机生成食物的横纵坐标
//		i = rand() % ROW;
//		j = rand() % COL;
//	} while (face[i][j] != KONG); //确保生成食物的位置为空，若不为空则重新生成
//	face[i][j] = FOOD; //将食物位置进行标记
//	color(12); //颜色设置为红色
//	CursorJump(2 * j, i); //光标跳转到生成的随机位置处
//	printf("●"); //打印食物
//}
//判断得分与结束
//void JudgeFunc(int x, int y)
//{
//	若蛇头即将到达的位置是食物，则得分
//	if (face[snake.y + y][snake.x + x] == FOOD)
//	{
//		snake.len++; //蛇身加长
//		grade += 10; //更新当前得分
//		color(7); //颜色设置为白色
//		CursorJump(0, ROW);
//		printf("当前得分:%d", grade); //重新打印当前得分
//		RandFood(); //重新随机生成食物
//	}
//	若蛇头即将到达的位置是墙或者蛇身，则游戏结束
//	else if (face[snake.y + y][snake.x + x] == WALL || face[snake.y + y][snake.x + x] == BODY)
//	{
//		Sleep(1000); //留给玩家反应时间
//		system("cls"); //清空屏幕
//		color(7); //颜色设置为白色
//		CursorJump(2 * (COL / 3), ROW / 2 - 3);
//		if (grade > max)
//		{
//			printf("恭喜你打破最高记录，最高记录更新为%d", grade);
//			WriteGrade();
//		}
//		else if (grade == max)
//		{
//			printf("与最高记录持平，加油再创佳绩", grade);
//		}
//		else
//		{
//			printf("请继续加油，当前与最高记录相差%d", max - grade);
//		}
//		CursorJump(2 * (COL / 3), ROW / 2);
//		printf("GAME OVER");
//		while (1) //询问玩家是否再来一局
//		{
//			char ch;
//			CursorJump(2 * (COL / 3), ROW / 2 + 3);
//			printf("再来一局?(y/n):");
//			scanf("%c", &ch);
//			if (ch == 'y' || ch == 'Y')
//			{
//				system("cls");
//				main();
//			}
//			else if (ch == 'n' || ch == 'N')
//			{
//				CursorJump(2 * (COL / 3), ROW / 2 + 5);
//				exit(0);
//			}
//			else
//			{
//				CursorJump(2 * (COL / 3), ROW / 2 + 5);
//				printf("选择错误，请再次选择");
//			}
//		}
//	}
//}
//打印蛇与覆盖蛇
//void DrawSnake(int flag)
//{
//	if (flag == 1) //打印蛇
//	{
//		color(10); //颜色设置为绿色
//		CursorJump(2 * snake.x, snake.y);
//		printf("■"); //打印蛇头
//		for (int i = 0; i < snake.len; i++)
//		{
//			CursorJump(2 * body[i].x, body[i].y);
//			printf("□"); //打印蛇身
//		}
//	}
//	else //覆盖蛇
//	{
//		if (body[snake.len - 1].x != 0) //防止len++后将(0, 0)位置的墙覆盖
//		{
//			将蛇尾覆盖为空格即可
//			CursorJump(2 * body[snake.len - 1].x, body[snake.len - 1].y);
//			printf("  ");
//		}
//	}
//}
//移动蛇
//void MoveSnake(int x, int y)
//{
//	DrawSnake(0); //先覆盖当前所显示的蛇
//	face[body[snake.len - 1].y][body[snake.len - 1].x] = KONG; //蛇移动后蛇尾重新标记为空
//	face[snake.y][snake.x] = BODY; //蛇移动后蛇头的位置变为蛇身
//	蛇移动后各个蛇身位置坐标需要更新
//	for (int i = snake.len - 1; i > 0; i--)
//	{
//		body[i].x = body[i - 1].x;
//		body[i].y = body[i - 1].y;
//	}
//	蛇移动后蛇头位置信息变为第0个蛇身的位置信息
//	body[0].x = snake.x;
//	body[0].y = snake.y;
//	蛇头的位置更改
//	snake.x = snake.x + x;
//	snake.y = snake.y + y;
//	DrawSnake(1); //打印移动后的蛇
//}
//执行按键
//void run(int x, int y)
//{
//	int t = 0;
//	while (1)
//	{
//		if (t == 0)
//			t = 3000; //这里t越小，蛇移动速度越快（可以根据次设置游戏难度）
//		while (--t)
//		{
//			if (kbhit() != 0) //若键盘被敲击，则退出循环
//				break;
//		}
//		if (t == 0) //键盘未被敲击
//		{
//			JudgeFunc(x, y); //判断到达该位置后，是否得分与游戏结束
//			MoveSnake(x, y); //移动蛇
//		}
//		else //键盘被敲击
//		{
//			break; //返回Game函数读取键值
//		}
//	}
//}
//游戏主体逻辑函数
//void Game()
//{
//	int n = RIGHT; //开始游戏时，默认向后移动
//	int tmp = 0; //记录蛇的移动方向
//	goto first; //第一次进入循环先向默认方向前进
//	while (1)
//	{
//		n = getch(); //读取键值
//		在执行前，需要对所读取的按键进行调整
//		switch (n)
//		{
//		case UP:
//		case DOWN: //如果敲击的是“上”或“下”
//			if (tmp != LEFT && tmp != RIGHT) //并且上一次蛇的移动方向不是“左”或“右”
//			{
//				n = tmp; //那么下一次蛇的移动方向设置为上一次蛇的移动方向
//			}
//			break;
//		case LEFT:
//		case RIGHT: //如果敲击的是“左”或“右”
//			if (tmp != UP && tmp != DOWN) //并且上一次蛇的移动方向不是“上”或“下”
//			{
//				n = tmp; //那么下一次蛇的移动方向设置为上一次蛇的移动方向
//			}
//		case SPACE:
//		case ESC:
//		case 'r':
//		case 'R':
//			break; //这四个无需调整
//		default:
//			n = tmp; //其他键无效，默认为上一次蛇移动的方向
//			break;
//		}
//	first: //第一次进入循环先向默认方向前进
//		switch (n)
//		{
//		case UP: //方向键：上
//			run(0, -1); //向上移动（横坐标偏移为0，纵坐标偏移为-1）
//			tmp = UP; //记录当前蛇的移动方向
//			break;
//		case DOWN: //方向键：下
//			run(0, 1); //向下移动（横坐标偏移为0，纵坐标偏移为1）
//			tmp = DOWN; //记录当前蛇的移动方向
//			break;
//		case LEFT: //方向键：左
//			run(-1, 0); //向左移动（横坐标偏移为-1，纵坐标偏移为0）
//			tmp = LEFT; //记录当前蛇的移动方向
//			break;
//		case RIGHT: //方向键：右
//			run(1, 0); //向右移动（横坐标偏移为1，纵坐标偏移为0）
//			tmp = RIGHT; //记录当前蛇的移动方向
//			break;
//		case SPACE: //暂停
//			system("pause>nul"); //暂停后按任意键继续
//			break;
//		case ESC: //退出
//			system("cls"); //清空屏幕
//			color(7); //颜色设置为白色
//			CursorJump(COL - 8, ROW / 2);
//			printf("  游戏结束  ");
//			CursorJump(COL - 8, ROW / 2 + 2);
//			exit(0);
//		case 'r':
//		case 'R': //重新开始
//			system("cls"); //清空屏幕
//			main(); //重新执行主函数
//		}
//	}
//}
//
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	while (line < 10000)
//	{
//		printf("学习:%d\n",line);
//		line++;
//	}
//	if (line == 10000)
//	{
//		printf("good offer");
//	}
//	return 0;
//}
//#include <stdio.h>
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d %d", &num1, &num2);
//	int sum = Add(num1,num2);
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int a = 8, b = 2;
// 
//	int result;
//	result = a + b;
//	printf("%d\n",result);
//	
//	return 0;
//}
//2
//#include <stdio.h>
//#define PI = 3.1415926 ;
//int main()
//{
//	float a, C, S;
//	printf("a：");
//	scanf_s("%f", &a);
//	C = a*PI;
//	S = PI*a*a/4;
//	printf("圆的周长是：%.2f", C);
//	printf("圆的面积是：%.2f\n", S);
//	return 0;
//}
// 3
//#include<stdio.h>
//int main()
//{	
//	int a, b, c,  e;
//	float d;
//	scanf_s("%d%d", &a, &b);
//	c = a * b;
//	d = (float)a / b;
//	e = a % b;
//	printf("%d %.2f %d", c,d,e);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("Hello,welcome to C world!");
//	return 0;
//}
//#include <stdio.h>
//#define PI 3.1415
//int main()
//{
//	float a, C, S;
//	scanf_s("%f", &a);
//	C = a * PI;
//	S = PI * a * a / 4;
//	printf("周长%.2f\n", C);
//	printf("面积%.2f\n", S);
//	return 0;
//}
//#include<stdio.h>
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d%d", &num1, &num2);
//	int sum = ADD(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//#include<stdio.h>
//int main()
//{
//	int max(int x, int y);//声明
//	int a, b, c;
//	printf("请在屏幕上输入a、b的值：");
//	scanf_s("%d%d",&a,&b);
//	c = max(a, b);//调用
//	printf("较大的值是：%d", c);
//	return 0;
//}
//定义
//int max(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//#include <stdio.h>
//
//void fun(int a, int b);  //函数的声明
//int main(void)
//{
//	int a, b;
//
//	printf("请输入a和b:");
//	scanf_s("%d%d", &a, &b);
//
//	fun(a, b);  //函数的调用
//
//	return 0;
//}
//函数的定义
//void fun(int a, int b)
//{
//	int max;
//
//	max = a > b ? a : b;
//
//	printf("max = %d\n", max);
//}
//#include <stdio.h>
//#define PI = 3.1415 ;
//int main()
//{
//	float a, C, S;
//	scanf_s("%f", &a);
//	C = a * PI;
//	S = PI * a * a / 4;
//	printf("周长 %.2f", C);
//	printf("面积 %.2f", S);
//	return 0;
//}
//#include <stdio.h>
//#define PI 3.1415
//int main()
//{
//	float a, C, S;
//	scanf_s("%f", &a);
//	C = a * PI;
//	S = PI * a * a / 4;
//	printf("周长 %.2f 面积 %.2f", C, S);
//	return 0;
//}
//#include <stdio.h>
//
//int a[101]; //全局变量默认值为0
//
//int main()
//{
//	int i, x;
//	int count = 0;
//	for (i = 0; i <= 4; i++)
//	{
//		scanf_s("%d", &x);
//		if (a[x] == 0)
//		{
//			count++;
//			a[x] = 1;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i = i + 1)
//		if (i % 3 == 0)
//			sum = sum + 1;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c, d;
//	scanf_s("%d%d%d%d", &a, &b, &c, &d);
//	if (a < c)
//	{
//		printf("yanlongxia\n");
//	}
//	else if(a == c && b <= d)
//	{
//		printf("yanlongxia\n");
//
//	}
//	else printf("dihuxia\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	if (x >= 0)
//		printf("%d",0);
//	else
//		printf("%d",0);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x, y, z;
//	x = 100; y = 200;
//	z = x * y;
//	printf(" % d和 % d的乘积是 % d\n", x, y, z);
//}
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main()
//{	int a, b, c, d, w;
//	int max, min;
//	scanf_s("%d%d", &a, &b);
//	scanf_s("%d%d", &c, &d);
//	if (b < c || d < a)
//		w = 0;
//	else
//	{
//		if (a > c)
//			max = a;
//		else max = c;
//		if (b > d)
//			min = d;
//		else 
//			min = b;
//		w = min - max;	
//	}
//	printf("%d", w);
//	return 0;
//}
//int ma#include <stdio.h>
//in()
//{
//	int L1, R1, L2, R2, c;
//	scanf_s("%d %d %d %d", &L1, &R1, &L2, &R2);
//	if (R1 < L2) c = 0;
//	else if (R2 >= R1) c = R1 - L2;
//	else c = R2 - L2;
//	printf("%d", c);
//	return 0;                               
//}
//#include <stdio.h>
//int main()
//{
//    int max(int x, int y);
//    int a, b, c;
//    printf("请输入a,b(数据之间用逗号分隔): ");
//    scanf_s("%d,%d",  &a , &b );
//    c = max(a, b);
//    printf("最大值是:%d\n", c);
//    return 0;
//}
//int max(int x, int y)
//{
//    int z;
//    if (x > y)
//        z = x;
//    else
//        z = y;
//    return  z;
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    float a, b, c, p, s;
//    printf("请输入a,b,c的值:");
//    scanf_s("%f,%f,%f", &a, &b, &c);
//    p = (a+b+c)/2.0;
//    s = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("三角形的面积为：%f\n", s);
//    return 0;
//#include <stdio.h>
//int main()
//{
//	char c1, c2;
//	c1 = 'a';
//	c2 = 'b';
//	printf("%c,%c\n", c1, c2);
//	printf("%d,%d\n", c1, c2);
//	return 0;
//}

