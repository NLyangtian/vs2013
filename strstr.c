#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char my_strstr(const char* str,const char *sub_str)
{
    assert(str);
    assert(sub_str);
    char * str_begin =str;
    char *p = str_begin;
    char *q =sub_str;
    while(*str_begin){
	p =str_begin;
	q =sub_str;
	while(*p!='\0' && q!='\0'&& *p==*q){
	    p++;
	    q++;
	}
	if(*q =='\0'){
	    return str_begin;
	}
	if(*p =='\0'){
	    return NULL;
	}
	str_begin++;
    }
}


char  main()
{
    char *str="abc1234abcdef";
    char *sub_str ="abcd";
    char ret=my_strstr(str,sub_str);
    if(ret)
    {
	printf("%s\n",ret);
    }
    else{
	printf("没有找到！");
    }
    return 0;
}
