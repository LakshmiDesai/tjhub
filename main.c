#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
void main()
{
    char mode[] = "0777";
    char buf[] = "test.o";
    int i = strtol(mode, 0, 8);
    if(chmod(buf, i) < 0)
        printf("error in chmod");
}
