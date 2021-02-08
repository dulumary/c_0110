#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
        두 개의 점수를 입력 받아서 두 점수 모두가 70점이 넘으면 합격입니다 를 출력하세요
    */
    
    int score1 = 0;
    int score2 = 0;
    
    printf("두 점수를 입력하세요 : ");
    scanf("%d %d", &score1, &score2);
    
    if(score1 >= 70 && score2 >= 70) {
        printf("합격입니다.\n");
    }
    
    /*
     어떤 게임에서 암흑 던젼이라는 곳은 레벨이 30 이상 이거나 공격력이  1000 이상일 때만 입장 가능하다.
     레벨과 공격력을 입력 받고 입장 가능한경우 "입장" 이라고 출력 하세요.
     */
    
    int level = 0;
    int power = 0;
    
    printf("레벨을 입력 하세요 : ");
    scanf("%d", &level);
    printf("공격력을 입력 하세요 : ");
    scanf("%d", &power);
    
    if(level >= 30 || power >= 1000) {
        printf("입장\n");
    }
    
    /*
        멘사는 나이가 만 19세 이상이고, IQ가 148 이상이어야 가입이 가능하다.
        만 나이와 IQ를 입력 받고 가입 가능할 경우 "가입 가능" 이라고 출력 하세요.
     */
    
    int age = 0;
    int iq = 0;
    
    printf("만 나이와 IQ를 차례로 입력 하세요 : ");
    scanf("%d %d", &age, &iq);
    
    if(age >= 19 && iq >= 148) {
        printf("가입 가능\n");
    }
    
    /*
        수를 입력 받아서 2와 3의 공배수인지 판별하세요.
     */
    
    int number = 0;
    printf("수를 입력하세요 : ");
    scanf("%d", &number);
    
    if(number % 2 == 0 && number % 3 == 0) {
        printf("%d 는 2와 3의 공배수 입니다.\n", number);
    }
    
    /*
        1  ~ 10의 수를 입력 받아야 한다.
        범위를 넘어 갈 경우 잘못 입력 하셨습니다를 출력하세요.
     */
    
    printf("1~10 사이의 수를 입력 하세요 : ");
    scanf("%d", &number);
    
    if(number < 0 || number > 10) {
        printf("잘못 입력 하셨습니다.\n");
    }
    
    return 0;
}


