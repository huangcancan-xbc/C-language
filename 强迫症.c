#include <stdio.h>
int main()
{
    int chusheng;
    scanf("%d",&chusheng);
    int nian,yue;
    if(chusheng>10000)
    {
        nian=chusheng/100;
        yue=chusheng%100;
    }
    else
    {
        if(chusheng/100<22)
        {
            nian=2000+chusheng/100;
            yue=chusheng%100;
        }
        else
        {
            nian=1900+chusheng/100;
            yue=chusheng%100;
        }
    }
    printf("%d-%02d",nian,yue);
    return 0;
}//%nd指定输出宽度，但不自动填充。
//%0nd指定宽度并用0填充不足的部分，但默认是右对齐。
//%-nd指定宽度并左对齐，但不自动填充。
//%-0nd同时指定宽度、左对齐，并用0填充不足的部分。




/*在C语言的printf`函数中，如果你想指定用特定字符（而非默认的空格或0）来填充不足的部分，可以使用一个附加的字符来指定填充字符，紧接在`%`之后但在其它转换说明符之前。具体格式如下：
c
%[flag][width][.precision][length modifier]specifier[fill_char]

其中：
`[flag]` 可以包含`-`来指示左对齐。
`[width]` 是你希望输出至少占据的字符数。
`[.precision]` 通常用于浮点数的精度控制，这里不适用。
`[length modifier]` 如`l`、`h`等用于指定长度，这里不特别讨论。
`[specifier]` 是数据类型，比如`d`、`f`、`s`等。
`[fill_char]` 就是你自定义的填充字符，放在宽度定义后面，指定宽度的数字和`.`（如果有精度控制的话）之前。

例如，如果你想用星号`*`来填充数字的空缺部分，可以这样写：

c
printf("%*d", width, value, fill_char);

但实际上，标准C库并不直接支持在`printf`中直接指定填充字符，上述格式是错误的。正确的做法是利用宽度和左对齐结合字符串操作来间接实现特定字符填充。对于整数，你通常需要先将其转换为字符串，然后手动构建输出格式，这不是`printf`直接支持的功能。

对于字符串，可以通过指定宽度和左对齐来实现特定字符填充，例如：

c
printf("%-*s", width, "text", '*');

这会用星号填充至指定宽度，并左对齐输出字符串"text"。但这种方法不直接适用于数值类型的直接填充，对于数值类型，通常需要先自行处理转换和拼接字符串，较为复杂。

因此，对于数值类型的特定字符填充，实际应用中可能需要先自定义函数或转换数值为字符串，然后根据需要的格式手动添加填充字符，再使用`printf`输出。
*/
