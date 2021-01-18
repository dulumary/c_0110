#include <stdio.h>

int main() {
    
    int noodleCup = 850;
    
    printf("육개장 가격은 %d 입니다.\n", noodleCup);
    
    int sum = noodleCup + 1500;
    
    int coke = 1500;
    sum = noodleCup + coke;
    
    printf("육개장 가격은 %d 입니다.\n", noodleCup);
    
    //  세개 가격 계산
    sum = noodleCup * 3;
    printf("육개장 3개의 가격은 %d 입니다.\n", sum);
    
    // 가격 상승
    noodleCup = 950;
    
    sum = noodleCup * 3;
    printf("육개장 가격은 %d 이고, 3개의 가격은 %d 입니다.\n", noodleCup, sum);
    
    // 몇개 사는지?
    int money = 10000;
    
    int count = money / noodleCup;
    int change = money % noodleCup;
    
    printf("%d 로 육개장 \'%d\'개를 살 수 있고,\n\n %d 원이 남는다.", money, count, change);
    
    return 0;
}

