#include <stdio.h>

double static func_1(double x) {
    return -6 * x * x + 8;
}

double static func_2(double x) {
    return -1 * x * x * x / 7 + 10;
}

int main(void) {
    double argument;
    
    printf("Enter value: ");
    scanf("%lf", &argument);

    if (argument >= 0 && argument < 7) {
        printf("Result: %lf", func_1(argument));
    } else if (argument <= -10 || argument >= 11) {
        printf("Result: %lf", func_2(argument));
    } else {
        printf("No value");
    }

    return 0;
}
