#include <stdio.h>
#include <assert.h>

char my_strcat(char *dest, char * src)
{
    char *ret =dest;
    assert(dest);
    assert(src);
    while(*dest){
	dest++;
    }
    while((*dest++ =*src++))
    {
	;
    }
    return ret;
}

int main()
{
    char * src ="abcd1234";
    char dst[20]="xyz";
    my_strcat(dst,src);
    printf("%s",dst);
    return 0;
}
