#include <stdio.h>

int main() {
    
    int number = 24;
    
    // 0024
    
    printf("%02d\n", number);
    printf("%03d\n", number);
    printf("%04d\n", number);
    printf("%05d\n", number);
    
    int monthDay = 723;
    printf("%04d\n", monthDay);
    
    double realPi = 3.1415926535897;
    printf("파이 : %lf\n", realPi);
    printf("파이 : %.2lf\n", realPi);
    printf("파이 : %.8lf\n", realPi);
    
    // 소수점 없이 출력 하고 싶어
    double pi = 3.14;
    int intPi = (int)pi;
    printf("int pi 는 %d\n", intPi);
    
    pi = (double)intPi;
    printf("double pi 는 %lf\n", pi);
    
    double divide = intPi / 2;
    printf("나눈 값은 %lf\n", divide);
    
    divide = intPi / (double)2;
    printf("나눈 값은 %lf\n", divide);
    
    divide = intPi / 2.0;
    printf("나눈 값은 %lf\n", divide);
    
    char numberChar = '5';
    printf("문자 : %c\n", numberChar);
    printf("정수 : %d\n", numberChar);
    
    printf("정수 : %d\n", numberChar - '0');
    
    char alphabet = 't';
    printf("문자 : %c\n", alphabet);
    printf("문자 : %d\n", alphabet - 'a');
    printf("문자 : %c\n", alphabet - 'a' + 'A');
  
    
    return 0;
}

