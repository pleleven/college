int main()
{
char g;
printf("������ѧ�����Գɼ��ģ�");
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
	printf("60������\n");
}
		return 0;
}
