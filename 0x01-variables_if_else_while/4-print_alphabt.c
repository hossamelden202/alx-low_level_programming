#include<stdio.h>
int main()
{
for(int ch=97;ch<=122;ch++)
{
	if(static_cast<char>ch=='e'||static_cast<char>ch=='q')
		continue;
putchar(ch);

}
putchar(10);
return 0;
}
