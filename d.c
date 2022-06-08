#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "this is the way to go .";
	char d[] = " ";



	//char *p1 = strtok(s, d);
//printf("p1: %p\n", p1);
//printf("s: %p\n", s);


char *portion = strtok(s, d);
while (portion != NULL)
{
printf("%s\n", portion);
portion	= strtok(NULL, d);
}

for (int u = 0; u < 24; u++)
if (s[u] == '\0') printf("\\0\n");
else printf("%c\n", s[u]);

/*
char *portion1 = strtok(s, d);
printf("%s\n", portion1);

char *portion2 = strtok(NULL, d); 
printf("%s\n", portion2);

char *portion3 = strtok(NULL, d); 
printf("%s\n", portion3);

char *portion4 = strtok(NULL, d);
printf("%s\n", portion4);
char *again = strtok(NULL, d);
if (again == NULL)
	printf("we're done!\n");
else
	printf("still more to go!\n");
*/
return 0;
}
