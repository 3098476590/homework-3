/*数据压缩*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch[21];
	char s=0;
	int num = 0,counta=1,countb=1,countc=1,countd=1;
	int n=0;
	for (num = 1; num < 21; num++)
	{
		scanf("%c", &ch[num]);
	}
	
	for (num = 1; num < 21; num++)
	{
		
		if (ch[num] == 'a' && ch[num] == ch[num - 1])
		{
			counta++;
			if (ch[num + 1] != 'a' )
			{
				if (counta >= 3)
				{
					printf("%d", counta);
				}
				else
				{
					printf("a");
				}
				counta = 0;
			}

		}
		else
		if (ch[num] == 'b' && ch[num] == ch[num - 1])
		{
			countb++;
			if (ch[num + 1] != 'b')
			{
				if (countb >= 3)
				{
					printf("%d", countb);
				}
				else
				{
					printf("b");
				}
				countb = 0;
			}

		}
		else
			if (ch[num] == 'c' && ch[num] == ch[num - 1])
			{
				countc++;
				if (ch[num + 1] != 'c')
				{
					if (countc >= 3)
					{
						printf("%d", countc);
					}
					else
					{
						printf("c");
					}
					countc = 0;
				}

			}
			else
				if (ch[num] == 'd' && ch[num] == ch[num - 1])
				{
					countd++;
					if (ch[num + 1] != 'd')
					{
						if (countd >= 3)
						{
							printf("%d", countd);
						}
						else
						{
							printf("d");
						}
						countd = 0;
					}

				}

				else
					{
					printf("%c", ch[num]);
				}
				

	}
	getchar();
	getchar();
	system("pause");
}/*数据压缩*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch[21];
	char s=0;
	int num = 0,counta=1,countb=1,countc=1,countd=1;
	int n=0;
	for (num = 1; num < 21; num++)
	{
		scanf("%c", &ch[num]);
	}
	
	for (num = 1; num < 21; num++)
	{
		
		if (ch[num] == 'a' && ch[num] == ch[num - 1])
		{
			counta++;
			if (ch[num + 1] != 'a' )
			{
				if (counta >= 3)
				{
					printf("%d", counta);
				}
				else
				{
					printf("a");
				}
				counta = 0;
			}

		}
		else
		if (ch[num] == 'b' && ch[num] == ch[num - 1])
		{
			countb++;
			if (ch[num + 1] != 'b')
			{
				if (countb >= 3)
				{
					printf("%d", countb);
				}
				else
				{
					printf("b");
				}
				countb = 0;
			}

		}
		else
			if (ch[num] == 'c' && ch[num] == ch[num - 1])
			{
				countc++;
				if (ch[num + 1] != 'c')
				{
					if (countc >= 3)
					{
						printf("%d", countc);
					}
					else
					{
						printf("c");
					}
					countc = 0;
				}

			}
			else
				if (ch[num] == 'd' && ch[num] == ch[num - 1])
				{
					countd++;
					if (ch[num + 1] != 'd')
					{
						if (countd >= 3)
						{
							printf("%d", countd);
						}
						else
						{
							printf("d");
						}
						countd = 0;
					}

				}

				else
					{
					printf("%c", ch[num]);
				}
				

	}
	getchar();
	getchar();
	system("pause");
}