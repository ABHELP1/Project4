#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
typedef struct {
    int value;
}val;
void cal(val x, int n);
int primenumber(int n)
{
    if ((n == 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) &&
        (n != 2 && n != 3 && n != 5 && n != 7))
        return 0;
    return 1;
}
void cal(val x,int n){
    for (int i = 0; i < n; i++)
    {
        char num[1000];
        scanf("%s", num);
        int index = strlen(num);
        int value = 0;
        if (strlen(num) == 1)
            value = num[index - 1] - '0';
        else if (strlen(num) == 2)
            value = ((num[index - 2] - '0') * 10) + num[index - 1] - '0';
        else
            value = ((num[index - 3] - '0') * 100) + ((num[index - 2] - '0') * 10) + num[index - 1] - '0';
        int prime = primenumber(value);
        if ((value % 2 != 0 || prime))
            printf("T\n");
        else
            printf("F\n");
    }
}
void main()
{
    int n;
    scanf("%d", &n);
    val as = { 0 };
    cal(as, n);
   /* for (int i = 0; i < n; i++)
    {
        scanf("%s", num);
        int index = strlen(num);
        int value = 0;
        if (strlen(num) == 1)
            value = num[index - 1] - '0';
        else if (strlen(num) == 2)
            value = ((num[index - 2] - '0') * 10) + num[index - 1] - '0';
        else
            value = ((num[index - 3] - '0') * 100) + ((num[index - 2] - '0') * 10) + num[index - 1] - '0';
        int prime = primenumber(value);
        if ((value % 2 != 0 || prime))
            printf("T\n");
        else
            printf("F\n");
    }*/
}