int main()
{
char g;
printf("请输入学生考试成绩的：");
scanf_s("%c",&g);
switch (g)
{
case 'A':
case 'a':
	printf("90~100\n"); break;
case 'B':
case 'b':
	printf("80~89\n"); break;
case 'C':

	printf("70~79\n"); break;
case 'D':

	printf("60~69\n"); break;
default:
	printf("60分以下\n");
}
		return 0;
}
