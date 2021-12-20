#include<stdio.h>
#include<assert.h>
#include<windows.h>

char* my_strcat(char* dest, char* src)
{
    char* ret = dest;
    assert(dest);
    assert(src);

    while(*dest)
    {
	dest++;
    }
	
    while(*dest++ = *src++)
    {
	;
    }

    return ret;
}

void main()
{
    char arr[20] = "hello";
    my_strcat(arr, "world!");
    printf("%s", arr);
    system("pause");
    return;
}