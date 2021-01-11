#include <stdio.h>
#include <string.h>
#define ABSMODE		"absolute"
#define RELMODE		"relative"
#define OTHERMODE	"other"
int main()
{
    int retval=-1;
    char str1[10];
    scanf("%s",str1);
    retval = strncmp(str1,ABSMODE,sizeof(ABSMODE));
    printf("retval: %d\n",retval);
    return 0;
}