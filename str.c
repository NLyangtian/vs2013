#include <stdio.h>
#include <assert.h>

//1.求字符串长度
//方法一：创建临时变量计数器

//int my_strlen(char *s)
//{
//   int count =0;
//    while(*s !='\0'){
//	count++;
//	s++;
//  }
//    return count;
//}

//方法二：
//利用递归的方式
//int my_strlen(char * str)
//{
//   if(*str == '\0'){
//	return 0;
//    }
//    retutn (1+my_strlen(str + 1));

//}

//方法三：利用指针减指针的方式

int my_strlen(char *s)
{
    char *p=s;
    while(p!='\0'){
	p++;
    }
    return(p-s);
}

int main()
{
     char *src="abcd1234";
    int ret=my_strlen(src);
    printf("%d\n",ret);
    return 0;
}
