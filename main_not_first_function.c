#include<stdio.h>

int before_main (void) __attribute__ ((constructor));
int after_main (void) __attribute__ ((destructor));

int before_main()
{
	printf("Comes before main\n");
	return 0;
}

int after_main()
{
	printf("Comes after main\n");
	return 0;
}
int main()
{
	printf("This is in main\n");
	return 0;
}
