//#include <stdio.h>
//int main()
//{
//    int input = 0;
//    printf("��˼�������벻����Ϸ\n");
//    printf("��˼�����쵽�״򲻴���Ϸ�أ�1/0��?");
//    scanf_s("%d", &input);
//    if (input == 1)
//    {
//        printf("��ͳԷ�һ��");
//    }
//    else
//    {
//        printf("�������");
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
//    while (t <= 52)  /*���Ʒ�52����*/
//    {
//        m = rand() % 52;  /*����0��51֮��������*/
//        for (flag = 1, i = 1; i <= t && flag; i++)  /*�����²�����������Ƿ��Ѿ�����*/
//            if (m == a[i])
//                flag = 0;  /*flag=1��ʾ���������µ��������flag=0��ʾ�²�
//                          ����������Ѿ�����*/
//        if (flag)
//        {
//            a[t++] = m;  /*����������µ�����������������*/
//            /*����t��ģֵ���жϵ�ǰ����Ӧ�����ĸ�������*/
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
//    qsort(b1, 13, sizeof(int), comp);  /*��ÿ���˵��ƽ�������*/
//    qsort(b2, 13, sizeof(int), comp);
//    qsort(b3, 13, sizeof(int), comp);
//    qsort(b4, 13, sizeof(int), comp);
//    p(b1, n);  /*�ֱ��ӡÿ���˵���*/
//    p(b2, n);
//    p(b3, n);
//    p(b4, n);
//    return 0;
//}
//void p(int b[], char n[])
//{
//    int i;
//    printf("\n\006 ");  /*��ӡ���ұ��*/
//    for (i = 0; i < 13; i++)  /*�������е�ֵת��Ϊ��Ӧ�Ļ�ɫ*/
//        if (b[i] / 13 == 0)  /*�ҵ��û�ɫ��Ӧ����*/
//            printf("%c ", n[b[i] % 13]);
//    printf("\n\003 ");  /*��ӡ���ұ��*/
//    for (i = 0; i < 13; i++)
//        if ((b[i] / 13) == 1)
//            printf("%c ", n[b[i] % 13]);
//    printf("\n\004 ");  /*��ӡ������*/
//    for (i = 0; i < 13; i++)
//        if (b[i] / 13 == 2)
//            printf("%c ", n[b[i] % 13]);
//    printf("\n\005 ");  /*��ӡ÷�����*/
//    for (i = 0; i < 13; i++)
//        if (b[i] / 13 == 3 || b[i] / 13 == 4)
//            printf("%c ", n[b[i] % 13]);
//    printf("\n");
//}
//int comp(const void* j, const void* i)  /*qsort���õ�������*/
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
//project�� ˫��С��Ϸ
//anthor��   LLz
//����    �ƶ�    �桢˳ʱ����ת   �����ӵ�
//���1   4568    7 9 			      0
//���2   adws 	  q e 			      �ո�
//--------------------------------*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <windows.h>
// ��Ϸ����ߴ�
//#define High 20  
//#define Width 100        
// ȫ�ֱ���
//int position_x, position_y, p_x, p_y, turn_a, turn_b, num_a, num_b, num_max, life_a = 10, life_b = 10; // �ɻ�λ��
//int canvas[High][Width] = { 0 }; // ��ά����洢��Ϸ�����ж�Ӧ��Ԫ��
//						 0Ϊ�ո�1Ϊ�ɻ�*��2Ϊ�ӵ�|��3Ϊ�л�@
//int next[8][2] = { {0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1} }; //����  ����  ��  ���� 
//int bullet_a[21][4];
//int bullet_b[21][4];   //a b����ӵ�20����            
//void gotoxy(int x, int y)  //����ƶ���(x,y)λ��
//{
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos;
//	pos.X = x;
//	pos.Y = y;
//	SetConsoleCursorPosition(handle, pos);
//}
//void startup() // ���ݳ�ʼ��
//{
//	num_a = 0;
//	num_b = 0;
//	turn_a = 0;
//	turn_b = 0;
//	p_x = High / 2;//��߷ɻ�
//	p_y = Width * 4 / 5;
//	canvas[p_x][p_y] = 5;//?
//	position_x = High / 2;//�ұ߷ɻ�
//	position_y = Width / 5;
//	canvas[position_x][position_y] = 1;
//}
//void show()  // ��ʾ����
//{
//	gotoxy(0, 0);  // ����ƶ���ԭ��λ�ã������ػ�����
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
//				printf(" ");   //   ����ո�
//			else if (canvas[i][j] == 1)
//				printf("A");   //   ����ɻ�a
//			else if (canvas[i][j] == 2)
//				printf("B");   //   ����ɻ�B
//			else if (canvas[i][j] == 3)
//				printf("o");   //  ����ӵ�o 
//			else if (canvas[i][j] == 4)
//				printf("+");   //	����ɻ�aָ�� 
//			else if (canvas[i][j] == 5)
//				printf("+");   //	����ɻ�bָ��  
//		}
//		printf("\n");
//	}
//	��ʼѪ����ʾ
//	printf("A��");
//	for (i = 1; i <= 10; i++)
//		if (i <= life_a)
//			printf("��");
//		else printf(" ");
//	printf("\nB: ");
//	for (i = 1; i <= 10; i++)
//		if (i <= life_b)
//			printf("��");
//		else printf(" ");
//}
//void updateWithoutInput()  // ���û������޹صĸ���
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
//		if (((position_x == bullet_a[k][2]) && (position_y == bullet_a[k][3])) || ((position_x == bullet_b[k][2]) && (position_y == bullet_b[k][3])))  // �л�ײ���һ�
//		{
//			life_a--;
//			if (life_a <= 0) {
//				printf("A ���ʧ�ܣ�\n");
//				Sleep(3000);
//				system("pause");
//				exit(0);
//			}
//		}
//		if (((p_x == bullet_a[k][2]) && (p_y == bullet_a[k][3])) || ((p_x == bullet_b[k][2]) && (p_y == bullet_b[k][3])))  // �л�ײ���һ�
//		{
//			life_b--;
//			if (life_b <= 0) {
//				printf("B ���ʧ�ܣ�\n");
//				Sleep(3000);
//				system("pause");
//				exit(0);
//			}
//		}
//	}
//}
//void updateWithInput()  // ���û������йصĸ���
//{
//	char input;
//	if (kbhit())  // �ж��Ƿ�������
//	{
//		input = getch();  // �����û��Ĳ�ͬ�������ƶ�����������س�
//		if (input == 'a' && position_y > 1)
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			canvas[position_x][position_y] = 0;
//			position_y--;  // λ������
//			canvas[position_x][position_y] = 1;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == 'd' && position_y < Width - 2)
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			canvas[position_x][position_y] = 0;
//			position_y++;  // λ������
//			canvas[position_x][position_y] = 1;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == 'w' && position_x > 1)
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			canvas[position_x][position_y] = 0;
//			position_x--;  // λ������
//			canvas[position_x][position_y] = 1;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == 's' && position_x < High - 2)
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			canvas[position_x][position_y] = 0;
//			position_x++;  // λ������
//			canvas[position_x][position_y] = 1;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == ' ' && num_a <= 20)  // �����ӵ�
//		{
//			num_a++;
//			bullet_a[num_a][0] = next[turn_a][0];
//			bullet_a[num_a][1] = next[turn_a][1];
//			bullet_a[num_a][2] = position_x + bullet_a[num_a][0];
//			bullet_a[num_a][3] = position_y + bullet_a[num_a][1];
//			canvas[bullet_a[num_a][2]][bullet_a[num_a][3]] = 3;
//		}
//		else if (input == 'q')  // �ڵ������� 
//		{
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 0;
//			turn_a--;
//			if (turn_a < 0)
//				turn_a = 7;
//			canvas[position_x + next[turn_a][0]][position_y + next[turn_a][1]] = 4;
//		}
//		else if (input == 'e')  //  �ڵ������� 
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
//			p_y--;  // λ������
//			canvas[p_x][p_y] = 2;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '6' && p_y < Width - 2)
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			canvas[p_x][p_y] = 0;
//			p_y++;  // λ������
//			canvas[p_x][p_y] = 2;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '8' && p_x > 1)
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			canvas[p_x][p_y] = 0;
//			p_x--;  // λ������
//			canvas[p_x][p_y] = 2;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '5' && p_x < High - 2)
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			canvas[p_x][p_y] = 0;
//			p_x++;  // λ������
//			canvas[p_x][p_y] = 2;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '0' && num_b <= 20)  // �����ӵ�
//		{
//			num_b++;
//			bullet_b[num_b][0] = next[turn_b][0];
//			bullet_b[num_b][1] = next[turn_b][1];
//			bullet_b[num_b][2] = p_x + bullet_b[num_b][0];
//			bullet_b[num_b][3] = p_y + bullet_b[num_b][1];
//			canvas[bullet_b[num_b][2]][bullet_b[num_b][3]] = 3;
//		}
//		else if (input == '7')  // �ڵ������� 
//		{
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 0;
//			turn_b--;
//			if (turn_b < 0)
//				turn_b = 7;
//			canvas[p_x + next[turn_b][0]][p_y + next[turn_b][1]] = 5;
//		}
//		else if (input == '9')  //  �ڵ������� 
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
//	startup();  // ���ݳ�ʼ��
//	system("color 30");
//	while (1)  // ��Ϸѭ��ִ��
//	{
//		show();  // ��ʾ����
//		updateWithoutInput();  // ���û������޹صĸ���
//		updateWithInput();  // ���û������йصĸ���
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
//#include <windows.h>//sleep()����
//int  main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		Sleep(1000);//��Ļ����1��
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
//#define K 0//���Ƶ��0�����ǲ��죬��Ϊ���� 
//
//���µ����б�ʾ�����ķ��ž�����fl studio 14 ��fl keys�ı�ע�������һ����ٵı�ע��һ�� �� 
//ֻ�������˶ȵ�����Ƶ�� ����Ϊһ���������Դﵽ��Ƶ�ʴ�Ŷ���������Щ���� 
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
//#define P 125   //�ۺ�bpm==120��ԭbpmΪ105���˴�ȡ�˸�����ֵ 
//
//typedef struct
//{
//	int frequency;
//	int duration;
//}PU;
//�������ӣ����ǡ��������á���һ�� 
//PU t[] = { B5,1,B5,2,B5,1,D6,2,B5,5,A5,2,G5,1,E5,2,G5,1,A5,2,B5,2,K,5,B5,1,B5,2,B5,1,D6,2,E6,4,D6,3,E5,1
//,E5,2,E5,1,G5,2,A5,2,K,5,B5,3,A5,1,G5,3,G5,2,E5,1,D5,3,B5,2,D6,1,B5,2,A5,1,G5,2,A5,1,G5,2,A5,2,B5,3,E5,
//3,G5,1,D5,2,K,5,B5,2,D6,1,B5,1,D6,2,E6,3,E6,2,D6,1,E6,5,B5,2,A5,3,B5,1,E6,3,D6,3,B5,3,A5,3,K,1,E6,2,D6,
//1,B5,2,A5,1,G5,4,K,3,E6,2,D6,1,B5,2,A5,1,G5,4, };
//int main()
//{
//	int i;
//	�ṹ������ĳ���sizeof(t)/sizeof(PU)�õ����ܽṹ�������С / �����ṹ���С
//	for (i = 0; i < sizeof(t) / sizeof(PU); i++)
//		Beep(t[i].frequency, t[i].duration * P);
//}
//#include<stdio.h>
//#include<string.h>
//int main(int argc, char const* argv[])
//{
//    char* arr = NULL;
//    �����������ȡ���ڴ���
//    FILE* fp = fopen("�򵥰�.lrc", "r");
//    arr = read_file(fp);
//    char* buf[128] = { arr };
//    ����и�    
//    int i = 0;
//    while ((buf[i++] = strtok(buf[i], "\r\n")));
//    int num = i - 1;
//    ��ӡǰ����    
//    char *lrc=NULL;    
//    printf_link1(buf);
//    ��ӡʣ����    
//    LRC* head = NULL;
//    head = printf_link2(head, buf, num);
//    printf_link(head);
//    ģ��ʱ�ӣ���ʵĹ��������ԣ���������
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
//#define ROW 22 //��Ϸ������
//#define COL 42 //��Ϸ������
//
//#define KONG 0 //��ǿգ�ʲôҲû�У�
//#define WALL 1 //���ǽ
//#define FOOD 2 //���ʳ��
//#define HEAD 3 //�����ͷ
//#define BODY 4 //�������
//
//#define UP 72 //���������
//#define DOWN 80 //���������
//#define LEFT 75 //���������
//#define RIGHT 77 //���������
//#define SPACE 32 //��ͣ
//#define ESC 27 //�˳�
//
//��ͷ
//struct Snake
//{
//	int len; //��¼������
//	int x; //��ͷ������
//	int y; //��ͷ������
//}snake;
//
//����
//struct Body
//{
//	int x; //���������
//	int y; //����������
//}body[ROW * COL]; //�������Դ洢����Ľṹ������
//
//int face[ROW][COL]; //�����Ϸ������λ�õ�״̬
//
//���ع��
//void HideCursor();
//�����ת
//void CursorJump(int x, int y);
//��ʼ������
//void InitInterface();
//��ɫ����
//void color(int c);
//���ļ���ȡ��߷�
//void ReadGrade();
//������߷ֵ��ļ�
//void WriteGrade();
//��ʼ����
//void InitSnake();
//�������ʳ��
//void RandFood();
//�жϵ÷������
//void JudgeFunc(int x, int y);
//��ӡ���븲����
//void DrawSnake(int flag);
//�ƶ���
//void MoveSnake(int x, int y);
//ִ�а���
//void run(int x, int y);
//��Ϸ�����߼�����
//void Game();
//
//int max, grade; //ȫ�ֱ���
//int main()
//{
//#pragma warning (disable:4996) //��������
//	max = 0, grade = 0; //��ʼ������
//	system("title ̰����"); //����cmd���ڵ�����
//	system("mode con cols=84 lines=23"); //����cmd���ڵĴ�С
//	HideCursor(); //���ع��
//	ReadGrade(); //���ļ���ȡ��߷ֵ�max����
//	InitInterface(); //��ʼ������
//	InitSnake(); //��ʼ����
//	srand((unsigned int)time(NULL)); //����������������
//	RandFood(); //�������ʳ��
//	DrawSnake(1); //��ӡ��
//	Game(); //��ʼ��Ϸ
//	return 0;
//}
//
//���ع��
//void HideCursor()
//{
//	CONSOLE_CURSOR_INFO curInfo; //��������Ϣ�Ľṹ�����
//	curInfo.dwSize = 1; //���û��ֵ�Ļ������������Ч
//	curInfo.bVisible = FALSE; //���������Ϊ���ɼ�
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //��ȡ����̨���
//	SetConsoleCursorInfo(handle, &curInfo); //���ù����Ϣ
//}
//�����ת
//void CursorJump(int x, int y)
//{
//	COORD pos; //������λ�õĽṹ�����
//	pos.X = x; //������
//	pos.Y = y; //������
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //��ȡ����̨���
//	SetConsoleCursorPosition(handle, pos); //���ù��λ��
//}
//��ʼ������
//void InitInterface()
//{
//	color(6); //��ɫ����Ϊ����ɫ
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			if (j == 0 || j == COL - 1)
//			{
//				face[i][j] = WALL; //��Ǹ�λ��Ϊǽ
//				CursorJump(2 * j, i);
//				printf("��");
//			}
//			else if (i == 0 || i == ROW - 1)
//			{
//				face[i][j] = WALL; //��Ǹ�λ��Ϊǽ
//				printf("��");
//			}
//			else
//			{
//				face[i][j] = KONG; //��Ǹ�λ��Ϊ��
//			}
//		}
//	}
//	color(7); //��ɫ����Ϊ��ɫ
//	CursorJump(0, ROW);
//	printf("��ǰ�÷�:%d", grade);
//	CursorJump(COL, ROW);
//	printf("��ʷ��ߵ÷�:%d", max);
//}
//��ɫ����
//void color(int c)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); //��ɫ����
//	ע��SetConsoleTextAttribute��һ��API��Ӧ�ó����̽ӿڣ�
//}
//���ļ���ȡ��߷�
//void ReadGrade()
//{
//	FILE* pf = fopen("̰������ߵ÷ּ�¼.txt", "r"); //��ֻ���ķ�ʽ���ļ�
//	if (pf == NULL) //���ļ�ʧ��
//	{
//		pf = fopen("̰������ߵ÷ּ�¼.txt", "w"); //��ֻд�ķ�ʽ���ļ�
//		fwrite(&max, sizeof(int), 1, pf); //��maxд���ļ�����ʱmaxΪ0����������ߵ÷ֳ�ʼ��Ϊ0
//	}
//	fseek(pf, 0, SEEK_SET); //ʹ�ļ�ָ��pfָ���ļ���ͷ
//	fread(&max, sizeof(int), 1, pf); //��ȡ�ļ����е���ߵ÷ֵ�max����
//	fclose(pf); //�ر��ļ�
//	pf = NULL; //�ļ�ָ�뼰ʱ�ÿ�
//}
//������߷ֵ��ļ�
//void WriteGrade()
//{
//	FILE* pf = fopen("̰������ߵ÷ּ�¼.txt", "w"); //��ֻд�ķ�ʽ���ļ�
//	if (pf == NULL) //���ļ�ʧ��
//	{
//		printf("������ߵ÷ּ�¼ʧ��\n");
//		exit(0);
//	}
//	fwrite(&grade, sizeof(int), 1, pf); //��������Ϸ�÷�д���ļ�����
//	fclose(pf); //�ر��ļ�
//	pf = NULL; //�ļ�ָ�뼰ʱ�ÿ�
//}
//��ʼ����
//void InitSnake()
//{
//	snake.len = 2; //�ߵ����峤�ȳ�ʼ��Ϊ2
//	snake.x = COL / 2; //��ͷλ�õĺ�����
//	snake.y = ROW / 2; //��ͷλ�õ�������
//	��������ĳ�ʼ��
//	body[0].x = COL / 2 - 1;
//	body[0].y = ROW / 2;
//	body[1].x = COL / 2 - 2;
//	body[1].y = ROW / 2;
//	����ͷ������λ�ý��б��
//	face[snake.y][snake.x] = HEAD;
//	face[body[0].y][body[0].x] = BODY;
//	face[body[1].y][body[1].x] = BODY;
//}
//�������ʳ��
//void RandFood()
//{
//	int i, j;
//	do
//	{
//		�������ʳ��ĺ�������
//		i = rand() % ROW;
//		j = rand() % COL;
//	} while (face[i][j] != KONG); //ȷ������ʳ���λ��Ϊ�գ�����Ϊ������������
//	face[i][j] = FOOD; //��ʳ��λ�ý��б��
//	color(12); //��ɫ����Ϊ��ɫ
//	CursorJump(2 * j, i); //�����ת�����ɵ����λ�ô�
//	printf("��"); //��ӡʳ��
//}
//�жϵ÷������
//void JudgeFunc(int x, int y)
//{
//	����ͷ���������λ����ʳ���÷�
//	if (face[snake.y + y][snake.x + x] == FOOD)
//	{
//		snake.len++; //����ӳ�
//		grade += 10; //���µ�ǰ�÷�
//		color(7); //��ɫ����Ϊ��ɫ
//		CursorJump(0, ROW);
//		printf("��ǰ�÷�:%d", grade); //���´�ӡ��ǰ�÷�
//		RandFood(); //�����������ʳ��
//	}
//	����ͷ���������λ����ǽ������������Ϸ����
//	else if (face[snake.y + y][snake.x + x] == WALL || face[snake.y + y][snake.x + x] == BODY)
//	{
//		Sleep(1000); //������ҷ�Ӧʱ��
//		system("cls"); //�����Ļ
//		color(7); //��ɫ����Ϊ��ɫ
//		CursorJump(2 * (COL / 3), ROW / 2 - 3);
//		if (grade > max)
//		{
//			printf("��ϲ�������߼�¼����߼�¼����Ϊ%d", grade);
//			WriteGrade();
//		}
//		else if (grade == max)
//		{
//			printf("����߼�¼��ƽ�������ٴ��Ѽ�", grade);
//		}
//		else
//		{
//			printf("��������ͣ���ǰ����߼�¼���%d", max - grade);
//		}
//		CursorJump(2 * (COL / 3), ROW / 2);
//		printf("GAME OVER");
//		while (1) //ѯ������Ƿ�����һ��
//		{
//			char ch;
//			CursorJump(2 * (COL / 3), ROW / 2 + 3);
//			printf("����һ��?(y/n):");
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
//				printf("ѡ��������ٴ�ѡ��");
//			}
//		}
//	}
//}
//��ӡ���븲����
//void DrawSnake(int flag)
//{
//	if (flag == 1) //��ӡ��
//	{
//		color(10); //��ɫ����Ϊ��ɫ
//		CursorJump(2 * snake.x, snake.y);
//		printf("��"); //��ӡ��ͷ
//		for (int i = 0; i < snake.len; i++)
//		{
//			CursorJump(2 * body[i].x, body[i].y);
//			printf("��"); //��ӡ����
//		}
//	}
//	else //������
//	{
//		if (body[snake.len - 1].x != 0) //��ֹlen++��(0, 0)λ�õ�ǽ����
//		{
//			����β����Ϊ�ո񼴿�
//			CursorJump(2 * body[snake.len - 1].x, body[snake.len - 1].y);
//			printf("  ");
//		}
//	}
//}
//�ƶ���
//void MoveSnake(int x, int y)
//{
//	DrawSnake(0); //�ȸ��ǵ�ǰ����ʾ����
//	face[body[snake.len - 1].y][body[snake.len - 1].x] = KONG; //���ƶ�����β���±��Ϊ��
//	face[snake.y][snake.x] = BODY; //���ƶ�����ͷ��λ�ñ�Ϊ����
//	���ƶ����������λ��������Ҫ����
//	for (int i = snake.len - 1; i > 0; i--)
//	{
//		body[i].x = body[i - 1].x;
//		body[i].y = body[i - 1].y;
//	}
//	���ƶ�����ͷλ����Ϣ��Ϊ��0�������λ����Ϣ
//	body[0].x = snake.x;
//	body[0].y = snake.y;
//	��ͷ��λ�ø���
//	snake.x = snake.x + x;
//	snake.y = snake.y + y;
//	DrawSnake(1); //��ӡ�ƶ������
//}
//ִ�а���
//void run(int x, int y)
//{
//	int t = 0;
//	while (1)
//	{
//		if (t == 0)
//			t = 3000; //����tԽС�����ƶ��ٶ�Խ�죨���Ը��ݴ�������Ϸ�Ѷȣ�
//		while (--t)
//		{
//			if (kbhit() != 0) //�����̱��û������˳�ѭ��
//				break;
//		}
//		if (t == 0) //����δ���û�
//		{
//			JudgeFunc(x, y); //�жϵ����λ�ú��Ƿ�÷�����Ϸ����
//			MoveSnake(x, y); //�ƶ���
//		}
//		else //���̱��û�
//		{
//			break; //����Game������ȡ��ֵ
//		}
//	}
//}
//��Ϸ�����߼�����
//void Game()
//{
//	int n = RIGHT; //��ʼ��Ϸʱ��Ĭ������ƶ�
//	int tmp = 0; //��¼�ߵ��ƶ�����
//	goto first; //��һ�ν���ѭ������Ĭ�Ϸ���ǰ��
//	while (1)
//	{
//		n = getch(); //��ȡ��ֵ
//		��ִ��ǰ����Ҫ������ȡ�İ������е���
//		switch (n)
//		{
//		case UP:
//		case DOWN: //����û����ǡ��ϡ����¡�
//			if (tmp != LEFT && tmp != RIGHT) //������һ���ߵ��ƶ������ǡ��󡱻��ҡ�
//			{
//				n = tmp; //��ô��һ���ߵ��ƶ���������Ϊ��һ���ߵ��ƶ�����
//			}
//			break;
//		case LEFT:
//		case RIGHT: //����û����ǡ��󡱻��ҡ�
//			if (tmp != UP && tmp != DOWN) //������һ���ߵ��ƶ������ǡ��ϡ����¡�
//			{
//				n = tmp; //��ô��һ���ߵ��ƶ���������Ϊ��һ���ߵ��ƶ�����
//			}
//		case SPACE:
//		case ESC:
//		case 'r':
//		case 'R':
//			break; //���ĸ��������
//		default:
//			n = tmp; //��������Ч��Ĭ��Ϊ��һ�����ƶ��ķ���
//			break;
//		}
//	first: //��һ�ν���ѭ������Ĭ�Ϸ���ǰ��
//		switch (n)
//		{
//		case UP: //���������
//			run(0, -1); //�����ƶ���������ƫ��Ϊ0��������ƫ��Ϊ-1��
//			tmp = UP; //��¼��ǰ�ߵ��ƶ�����
//			break;
//		case DOWN: //���������
//			run(0, 1); //�����ƶ���������ƫ��Ϊ0��������ƫ��Ϊ1��
//			tmp = DOWN; //��¼��ǰ�ߵ��ƶ�����
//			break;
//		case LEFT: //���������
//			run(-1, 0); //�����ƶ���������ƫ��Ϊ-1��������ƫ��Ϊ0��
//			tmp = LEFT; //��¼��ǰ�ߵ��ƶ�����
//			break;
//		case RIGHT: //���������
//			run(1, 0); //�����ƶ���������ƫ��Ϊ1��������ƫ��Ϊ0��
//			tmp = RIGHT; //��¼��ǰ�ߵ��ƶ�����
//			break;
//		case SPACE: //��ͣ
//			system("pause>nul"); //��ͣ�����������
//			break;
//		case ESC: //�˳�
//			system("cls"); //�����Ļ
//			color(7); //��ɫ����Ϊ��ɫ
//			CursorJump(COL - 8, ROW / 2);
//			printf("  ��Ϸ����  ");
//			CursorJump(COL - 8, ROW / 2 + 2);
//			exit(0);
//		case 'r':
//		case 'R': //���¿�ʼ
//			system("cls"); //�����Ļ
//			main(); //����ִ��������
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
//		printf("ѧϰ:%d\n",line);
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
//	printf("a��");
//	scanf_s("%f", &a);
//	C = a*PI;
//	S = PI*a*a/4;
//	printf("Բ���ܳ��ǣ�%.2f", C);
//	printf("Բ������ǣ�%.2f\n", S);
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
//	printf("�ܳ�%.2f\n", C);
//	printf("���%.2f\n", S);
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
//	int max(int x, int y);//����
//	int a, b, c;
//	printf("������Ļ������a��b��ֵ��");
//	scanf_s("%d%d",&a,&b);
//	c = max(a, b);//����
//	printf("�ϴ��ֵ�ǣ�%d", c);
//	return 0;
//}
//����
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
//void fun(int a, int b);  //����������
//int main(void)
//{
//	int a, b;
//
//	printf("������a��b:");
//	scanf_s("%d%d", &a, &b);
//
//	fun(a, b);  //�����ĵ���
//
//	return 0;
//}
//�����Ķ���
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
//	printf("�ܳ� %.2f", C);
//	printf("��� %.2f", S);
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
//	printf("�ܳ� %.2f ��� %.2f", C, S);
//	return 0;
//}
//#include <stdio.h>
//
//int a[101]; //ȫ�ֱ���Ĭ��ֵΪ0
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
//	printf(" % d�� % d�ĳ˻��� % d\n", x, y, z);
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
//    printf("������a,b(����֮���ö��ŷָ�): ");
//    scanf_s("%d,%d",  &a , &b );
//    c = max(a, b);
//    printf("���ֵ��:%d\n", c);
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
//    printf("������a,b,c��ֵ:");
//    scanf_s("%f,%f,%f", &a, &b, &c);
//    p = (a+b+c)/2.0;
//    s = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("�����ε����Ϊ��%f\n", s);
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

