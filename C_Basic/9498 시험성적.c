#include <stdio.h>

int main(void)
{
	int score;
	scanf("%d", &score);

	if (0 <=score && 90 <=score && score <= 100)
	{
		printf("A");
	}
	else if (0 <= score && 80<= score && score <90)
	{
		printf("B");
	}
	else if (0 <= score && 70 <= score && score <80)
	{
		printf("C");
	}
	else if (0 <= score && 60 <= score && score < 70)
	{
		printf("D");
	}
	else if (0 <=score && score <60)
	{
		printf("F");
	}

	return 0;

}