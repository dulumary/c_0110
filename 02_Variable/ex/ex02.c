#include <stdio.h>

int main() {
   
    char alphabet = 'A';
    char sign = '@';
    
    printf("%c\n", alphabet);
    printf("%c\n", sign);
    
    printf("\"%c\"\n", alphabet);
    printf("\'%c\'\n", alphabet);
    
    char quiz = 'O';
    printf("퀴즈의 정답은 %c 입니다.\n\n", quiz);
    
    double pi = 3.14;
    printf("원주율 pi는 %f 입니다.", pi);
    
    int diameter = 10;
    double area = (diameter / 2) * (diameter / 2) * 3.14;
    
    printf("지름이 %d 인 원의 넓이는 %lf 입니다.\n", diameter, area);
    
    // 타입에 맞지 않는 값을 넣음
    int noodleCup = 4.2;
    quiz = 10.5;
    pi = 'X';
    
    printf("육개장 가격은 %d 입니다.", noodleCup);
    printf("원주율 pi는 %f 입니다.", pi);
    printf("퀴즈의 정답은 %c 입니다.\n", quiz);
  
    return 0;
}

