// Your code here...
#include <stdio.h>
int main()
{
    double n1, n2, n3, result;
    printf("");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    result = n1 + n2 + n3 / 3;

    printf("Average: %lf", result);

    return 0;
}