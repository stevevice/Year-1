#include <iostream>
#include <stdio.h>

int main()
{
	int num[11];

	for (int i = 0; i <= 60; i++)
	{
		if (i >= 50 && i <= 60)
		{
			num[i - 50] = i;
			printf("%c", num[i - 50]);
		}
	}

	system("PAUSE");
	return 0;
}