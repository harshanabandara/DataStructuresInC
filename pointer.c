#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a  = 10;
	int* ap = &a;
	printf("%d\t %p \t %p %d\n",a,ap,&ap,*ap);
	return 0;
}