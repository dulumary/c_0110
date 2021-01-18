#include <stdio.h>

int main() {
    
    /*
        나이를 저장 하는 변수를 만들고 이를 사용해서 아래와 같이 출력하세요.
     */
    
    int age = 28;
    
    printf("이름 : 김인규 나이 : %d\n", age);
    
    /*
        국어와 수학 점수를 저장 하는 변수를 각각 만들어서 아래와 같이 출력하세요.
     */
    
    int koreanScore = 85;
    int mathScore = 92;
    
    printf("국어 : %d점\n수학 : %d점\n", koreanScore, mathScore);
    
    /*
        두 변수를 더한 결과와 뺀결과를 연산을 통해서 구하고 출력하세요.
     */
    
    int number1 = 539223;
    int number2 = 3215;
    
    int add = number1 + number2;
    int minus = number1 - number2;
    
    printf("더하기 결과 : %d\n", add);
    printf("뺴기 결과 : %d\n", minus);

    /*
        1500원 짜리 과자 5개와 200원 짜리 사탕 13개를 샀을때 가격을 변수와 연산을 통해서 계산 하여 출력하세요.
     */
    
    int sum = (1500 * 5) + (200 * 13);
    
    printf("총합 : %d원\n", sum);
    
    /*
        5 X 1 = 5
        5 X 2 = 10
        5 X 3 = 15
        5 X 4 = 20
        5 X 5 = 25
     */
    
    printf("5 X 1 = %d\n", 5 * 1);
    printf("5 X 2 = %d\n", 5 * 2);
    printf("5 X 3 = %d\n", 5 * 3);
    printf("5 X 4 = %d\n", 5 * 4);
    printf("5 X 5 = %d\n", 5 * 5);
    
    
    /*
        943 시간은 몇일 몇시간 인지 구하여 출력하세요.
     */
    
    int days = 943 / 24;
    int hours = 943 % 24;
    
    printf("943시간은 %d일 %d시간 입니다.\n", days, hours);
    
    return 0;
}

