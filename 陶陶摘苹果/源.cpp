#include<stdio.h>
int main()
{
	int h[10], tao,s=0,s2;
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &h[0], &h[1], &h[2], &h[3], &h[4], &h[5], &h[6], &h[7], &h[8], &h[9]);
	scanf_s("%d", &tao);
	s2 = tao + 30;
	for (int i = 0; i <= 9;i++)
	{
		if (s2 >= h[i])
		{
			s++;
		}
	}
	printf("%d", s);
	return 0;
}