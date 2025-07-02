/*#include<stdio.h>
int main()
{
	char ch;
	ch = getchar();
	while (ch != '\n') {
		if (ch == ' ')
			putchar(ch);
		else
			putchar(ch + 1);
		ch = getchar();

	}
	putchar(ch);
	return 0;
 }
*/

#include <stdio.h>
#include <ctype.h>
/*int main()
{
	char ch;
	ch = getchar();
	while (ch != '\n') {
		if (isalpha(ch))
			putchar(ch+1);
		else
			putchar(ch);
		ch = getchar();

	}
	
	putchar(ch);
	return 0;
}*/
int main() {
	int num = 0;
	
	//char back;
	while(scanf_s("%d", &num))

	{if (num > 6)
			if (num < 12)
				printf("u r close");
			else 
				printf("sry,u lose!"); }
		
	

	return 0;
}