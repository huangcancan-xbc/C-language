#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//模拟实现memmove
void* my_memmove(void* destination, const void* source, size_t num)
{
    assert(destination && source);
    void* temp = destination;
    if (destination <= source || (char*)destination >= ((char*)destination + num))
    {
        while (num--)
        {
            *(char*)destination = *(char*)source;
            destination = (char*)destination + 1;
            source = (char*)source + 1;
        }
    }
    else
    {
        destination = (char*)destination + num - 1;
        source = (char*)source + num - 1;
        while (num--)
        {
            *(char*)destination = *(char*)source;
            destination = (char*)destination - 1;
            source = (char*)source - 1;
        }
    }
    
    return (temp);
}

int main()
{
    char arr1[] = "hello world!";
    char arr2[20] = "good ";
    my_memmove(arr2 + 5, arr1 + 5, 12);
    printf("%s\n%s\n", arr1, arr2);
    return 0;
}