#include<stdio.h>
#include<string.h>

int main()
{
	FILE* fp = fopen("bite","w");
	if(fp == NULL)
	{
		perror("fopen error\n");
		return 1;
	}

  printf("Linux so easy!\n");
	fclose(fp);

	return 0;
}
