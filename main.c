#include <stdio.h>
int main(void)
{
        printf("starting now:\n");
       one_three();
       printf("done!");
	return 0;
}
int two(void)
{
        printf("two\n");

}
void one_three()
{
        printf("one\n");
        two();
        printf("three\n");
}
