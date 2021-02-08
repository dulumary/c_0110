#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
       정수를 입력 받고 음수인지 양수인지 출력하세요.
    */
    
    int number = 0;
    
    printf("정수를 입력 하세요 : ");
    scanf("%d", &number);
    
    if(number < 0) {
        printf("음수 입니다.");
    } else {
        printf("양수 입니다.");
    }
    
    /*
        주사위를 굴려서 상금을 받는 게임이 있다.
        4 이상이 나올 경우에는 눈금의 수에 만원을 곱한 만큼 상금을 받는다.
        4 미만이 나올경우는 꽝 이다.
        주사위를 굴린 결과를 입력 받고, 상금 혹은 꽝을 출력 하세요.
     */
    
    int number = 0;
    
    printf("주사위 눈 : ");
    scanf("%d", &number);
    
    if(number >= 4) {
        printf("%d만원\n", number);
    } else {
        printf("꽝");
    }
    
    /*
        점수를 입력 받고 90 점이상이면 A , 80점 이상 B, 70점 이상 C, 60점 이상 D, 그외 F 를 출력하세요
     */
    
    int score = 0;
    
    printf("점수를 입력하세요 : ");
    scanf("%d", &score);
    
    if(score >= 90) {
        printf("A\n");
    } else if(score >= 80) {
        printf("B\n");
    } else if(score >= 70) {
        printf("C\n");
    } else if(score >= 60) {
        printf("D\n");
    }  else {
        printf("F\n");
    }
    
    /*
        자동차 운전 중 과속을 하게 되면 벌금을 받게 된다.
        벌금의 규정은 아래와 같다.

        속도위반 20km/h이하                40,000원
        속도위반 20km/h 초과 ~ 40km/h 이하  70,000원
        속도위반 40km/h 초과 ~ 60km/h 이하  100,000원
        속도위반 60km/h 초과               130,000원

        속도를 입력 받고, 최고 속도가 100km/h 인 고속도로에서의 벌금을 출력 하세요.
     */
    
    int speed = 0;
    
    printf("속도 : ");
    scanf("%d", &speed);
        
    int fine = 0;
    
    if(speed > 160) {
        fine = 130000;
    } else if(speed > 140) {
        fine = 100000;
    } else if(speed > 120) {
        fine = 70000;
    } else if(speed > 100) {
        fine = 40000;
    } else {
        fine = 0;
    }
    
    printf("%d원\n", fine);
    
    return 0;
}


