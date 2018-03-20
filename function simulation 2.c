#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ��strrstr����
#if 0
#include<stdio.h>
#include<assert.h>
char *my_strrstr(const char *str1, const char *str2)
{
	assert(str1);
	assert(str2);

	char *cp = (char *)str1;
	char *p = (char *)str2;
	char *s = NULL;

	if (*str2 == '\0')
		return NULL;

	while (*cp)
	{
		str1 = cp;
		str2 = p;

		while (*str2 && (*str1 == *str2))
		{
			str1++;
			str2++;
		}

		if (*str2 == '\0')//�ж��Ƿ���str2�Ѿ�ȫ����ȷ�˶�
		{
			s = cp;  //����str2��str1�е���ʼλ��
			str2 = p; //��str2������ָ��������ʼ��ַ
		}
		cp++;
	}
	return s;
}

int main()
{
	char str1[] = "abccdecdh";
	char str2[] = "cd";
	printf("%s\n", my_strrstr(str1, str2));
	system("pause");
	return 0;
}
#endif


//ģ��ʵ��strrchr����
#if 0
#include <stdio.h>
#include <assert.h>
char *my_strrchr(const char* str, int ch)
{
	assert(str);
	char *ret=NULL;

	while (*str)
	{
		if (*str == ch)
		{
			ret = str;
		}
		str++;
	}
	return ret;
}
int main()
{
	char str[20] = "hello world";
	char *ret = my_strrchr(str, 'l');
	printf("%s\n", ret);
	system("pause");
	return 0;
}
#endif


//ģ��ʵ��srtchr����
#if 0
#include <stdio.h>
#include <assert.h>
char *my_strchr(const char* str, int ch)
{
	assert(str);
	char *ret=NULL;

	while (*str)
	{
		if (*str == ch)
		{
			ret = str;
			return ret;
		}
		str++;
	}
	return NULL;
}
int main()
{
	char str[20] = "hello world";
	char *ret = my_strchr(str, 'e');
	printf("%s\n", ret);
	system("pause");
	return 0;
}
#endif

//ģ��ʵ��strncmp
#if 0
#include<stdio.h>
#include <assert.h>
int my_strncmp(const char* str1, const char *str2, int count)
{
	assert(str1);
	assert(str2);

	int ret = 0;

	while (count)
	{

		while (!(ret = (*str1++ - *str2++)))
		{
			count--;

			if (count == 0)
				return 0;
		}

		if (ret>0)
			return 1;

		if (ret < 0)
			return -1;
	}
	return 0;
}
int main()
{
	char *str1 = "abcee";
	char *str2 = "abce";
	int temp = my_strncmp(str1, str2, 5);
	printf("%d\n", temp);
	system("pause");
	return 0;
}
#endif

//ģ��ʵ��strncat����
#if 0
#include<stdio.h>
#include <assert.h>
char* my_strncat(char* dst, const char* src, int count)
{
	assert(dst);
	assert(src);

	char *ret = dst;

	while (*dst)
	{
		dst++;
	}

	while ((count--) && (*dst++ = *src++))
	{
		;
	}

	*dst = '\0';
	return ret;
}
int main()
{
	char str1[6] = "hello";
	char *str2 = "world";
	my_strncat(str1, str2, 3);
	printf("%s\n", str1);
	system("pause");
	return 0;
}
#endif


//ģ��ʵ��strncpy����
#if 0
#include <stdio.h>
#include <assert.h>

char* my_strncpy(char *dst, const char *src, int count)
{
	assert(dst);
	assert(src);

	char *ret = dst;

	while ((count--) && (*dst++ = *src++))
	{
		;
	}

	count += 1;
	while (count--)
	{
		*dst++ = '\0';
	}

	return ret;
}
int main()
{
	char str[20];
	char arr[] = "hello world";
	my_strncpy(str, arr, 15);
	printf("%s\n", str);
	system("pause");
	return 0;
}
#endif