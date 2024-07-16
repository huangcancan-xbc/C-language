#define _CRT_SECURE_NO_WARNINGS 1

//BC54-获得月份天数

#include <stdio.h>

int main() {
    int nian, yue;

    while (scanf("%d %d", &nian, &yue) == 2) {
        int tian;

        if (((nian % 4 == 0 && nian % 100 != 0) || nian % 400 == 0) && yue == 2) {
            tian = 29;
        }
        else if (yue == 2) {
            tian = 28;
        }
        else if (yue == 4 || yue == 6 || yue == 9 || yue == 11) {
            tian = 30;
        }
        else if (yue == 1 || yue == 3 || yue == 5 || yue == 7 || yue == 8 || yue == 10 || yue == 12) {
            tian = 31;
        }
        else {
            continue;
        }
        printf("%d\n", tian);
    }

    return 0;
}

//#include <stdio.h>
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d%d", &y, &m) != EOF)
//    {
//        int day = days[m - 1];
//        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//        {
//            if (m == 2)
//                day += 1;
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}