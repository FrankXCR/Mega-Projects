#include<stdio.h>
char a[] = {' '};
char* p;
void read_msg()
{
	int i = 0;
	p = &a[0];
	while (a[i - 1] != '\n')
	{
		a[i] = getchar();
		i++;
		p++;
	}
}

void show_reverse()
{	
	p -= 2;
	while(p>=(&a[0]))
	{
		printf("%c", *p);
		p--;
	}
}

int main()
{
	printf("Enter a message:");
	read_msg();
	printf("Reversal is:");
	show_reverse();
	return 0;
}