#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现memmove
#include<stdio.h>
#include <assert.h>
void *  my_memmove(void * dest, const void * src, int count)
{
	void * start = dest;
	assert(dest != NULL);
	assert(src != NULL);

	if (dest <= src || (char *)dest >= ((char *)src + count)) 
	{
		while (count--) 
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest + 1;
			src = (char *)src + 1;
		}
	}
	else 
	{
		dest = (char *)dest + count - 1;
		src = (char *)src + count - 1;

		while (count--) 
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest - 1;
			src = (char *)src - 1;
		}
	}
	return start;
}
int main()
{
	int str[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	my_memmove(str + 2, str, 16);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", str[i]);
	}
	system("pause");
	return 0;
}


//模拟实现memcpy函数
#if 0
#include <stdio.h>
#include <assert.h>
void * my_memcpy(void * dest, const void * src, int sz)
{
	void * start = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (sz--)
	{
		* (char *) dest = * (char *) src;
		++(char*)dest;
		++(char*)src;
	}
	return (start);
}

int main()
{
	char dos[20] = {0};
	char * p = "hello world";
	my_memcpy(dos, p+2, 5);
	printf("%s\n", dos);
	system("pause");
	return 0;
}
#endif


//模拟实现strcmp函数
#if 0
#include<stdio.h>
#include <assert.h>
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while (*str1 == *str2 && *str2 && *str1)
//	{
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//
//	if (*str1 < *str2)
//	{
//		return -1;
//	}
//	return 0;
//}

int my_strcmp(const char* str1, const char* str2)
{
	int ret = 0;
	assert(str1 != NULL);
	assert(str2 != NULL);

	while (!(ret = *(unsigned char *)str1 -
				   *(unsigned char *)str2) &&
				   *str2)
	{
		str1++;
		str2++;

	}

	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1;
	return ret;
}
int main()
{
	char str1[] = "abcdef";
	char str2[] = "abcdef";
	int ret = my_strcmp(str1, str2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#endif


//模拟实现strstr函数
#if 0
#include<stdio.h>
#include <assert.h>
char *my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	char *cp = (char*)str1;
	char *substr = NULL;
	char *s1 = NULL;

	if (!*str2)
		return (NULL);

	while (*cp)
	{
		s1 = cp;
		substr = (char *)str2;

		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}

		if (!*substr)
			return (cp);
		cp++;
	}
	return (NULL);
}
int main()
{
	char str1[] = "adddeff";
	char str2[] = "ddef";
	char *start = my_strstr(str1, str2);
	printf("%s\n", start);
	system("pause");
	return 0;
}
#endif


//模拟实现strcat函数
#if 0
#include <stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char *start = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (*dest) 
	{
		dest++;
	}

	while (*dest++ = *src++)
	{
		;
	}
	return start;
}
int main()
{
	char str1[10] = "abc";
	char str2[5] = "def";
	my_strcat(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}
#endif


//模拟实现strlen函数
#if 0
#include<stdio.h>
#include <assert.h>
//递归实现
//int my_strlen(const char* str)
//{
//	if (*str)
//		return 1 + strlen(str + 1);
//	else
//		return 0;
//}
//计数器计算
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;

//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//相对简单
//int my_strlen(const char *str)
//{
//	const char* start = str;
//  assert(str != NULL);

//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//完美代码
int my_strlen(const char *str)
{
	const char* start = str;
	assert(str != NULL);

	while (*str++ != '\0')
	{
		;
	}
	return str - start - 1;
}

int main()
{
	char str[] = "abcdef";
	int len = my_strlen(str);
	printf("%d\n", len);
	system("pause");
	return 0;
}
#endif


//模拟实现strcpy函数
#if 0
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* start = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;
	}
	return start;
}

int main()
{
	char str[20] = { 0 };
	my_strcpy(str, "hello world");
	printf("%s\n", str);
	system("pause");
	return 0;
}
#endif