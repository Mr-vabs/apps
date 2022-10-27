#include<stdio.h>
#define integer 3846
#define fraction 4.5837
#define character 'Y'
int main()
{
    const int i2 = 9274;
    const float f2 = 3.4838;
    const char c2 = 'y';
    printf("integer constant is %d\n", integer);
    printf("integer constant is %d\n", i2);
    printf("fraction constant is %f\n", fraction);
    printf("fraction constant is %f\n", f2);
    printf("character constant is %c\n", character);
    printf("character constant is %c\n", c2);
    return 0;
}