#include <stdio.h>
#include <string.h>
int main()
{
    char file_name[] = "file#$.ima";
    int i;
    for (i = 0; file_name[i]; i++)
    {
        if (((file_name[i] >= '0') && (file_name[i] <= '9')) || ((file_name[i] >= 'a') && (file_name[i] <= 'z')) || ((file_name[i] >= 'A') && (file_name[i] <= 'Z')))
            continue;
        else if (file_name[i] == '_')
            continue;
        else if ((file_name[i] == '.') && (file_name[i + 4] == '\0'))
            continue;
        else
            break;
    }
    if (file_name[i] == '\0')
        printf("valid file name success ! \n");
    else
        printf("Invalid file name error() ! \n");
}


// How to run 
// cc filenameValidation.c
// ./a.out