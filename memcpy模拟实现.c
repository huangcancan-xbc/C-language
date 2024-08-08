#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//模拟实现memcpy
void* my_memcpy(void* destination, const void* source, size_t num)
{
    assert(destination && source);
    void* temp = destination;
    while (num--)
    {
        *(char*)destination = *(char*)source;
        destination = (char*)destination + 1;
        source = (char*)source + 1;
    }

    return (temp);
}
int main()
{
    char arr1[] = "hello world!";
    char arr2[20] = { 0 };
    my_memcpy(arr2, arr1, 12);
    printf("%s\n%s\n", arr1, arr2);
    return 0;
}