#include <stdio.h>

int main() {
  
   /*
        생월일을 아래와 같이 4자리로 출력 하세요.
    */
    
    int month = 7;
    int day = 23;
    
    printf("생월일은 %02d%02d입니다.\n", month, day);
    
    /*
        아래 소수 변수를 소수점 넷째 짜리까지만 출력 하세요.
     */
    
    double anything = 3212.3239218;
    printf("%.4lf\n", anything);
    
    /*
        아래 변수를 int 형 변수에 저장 하고, 이를 출력 하세요.
     */
    
    double speed = 159.3;
    
    int speedInt = (int)speed;
    
    printf("%d\n", speedInt);
    
    /*
        아래 문자의 아스키 코드 번호를 출력 하세요.
     */
    
    char ascii1 = '!';
    char ascii2 = '$';
    char ascii3 = 'C';
    
    printf("%c 의 ascii 코드 번호는 %d\n", ascii1, ascii1);
    printf("%c 의 ascii 코드 번호는 %d\n", ascii2, ascii2);
    printf("%c 의 ascii 코드 번호는 %d\n", ascii3, ascii3);
    
    /*
        F 에서 13번째 뒤에 있는 알파벳을 구하여서 출력 하세요.
     */
    
    char alphabet = 'F' + 13;
    printf("F에서 13번째 알파벳은 %c 입니다.\n", alphabet);
    
    /*
        가로 길이 7 높이 9인 삼각형의 넓이를 구하세요.
        넓이는 직접 계산하지 말고, 컴퓨터에게 양보하세요.
     */
    
    int width = 7;
    int height = 9;
    
    double triangleArea = width * height / 2.0;
    printf("삼각형의 넓이 : %.1lf\n", triangleArea);
    
    
    /*
        아래와 같이 점수가 주어 졌을때 평균을 구해서 출력하세요.
        국어 93점, 수학 88, 영어 94점
     */
    
    int koreanScore = 93;
    int mathScore = 88;
    int englishScore = 94;
    
    double average = (koreanScore + mathScore + englishScore) / 3.0;
    
    printf("국어 %d점, 수학 %d점, 영어 %d점\n", koreanScore, mathScore, englishScore);
    printf("평균 %.2lf 점 입니다.\n", average);
    
    return 0;
}

