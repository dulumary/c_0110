#include <stdio.h>

int main() {
  
    /*
        아래 문장을 문자 변수를 만들어서 출력하세요.
     */
    
    char startKey = 'S';
    char endKey = 'Q';
    
    printf("게임을 시작하려면 %c, 종료 하려면 %c 를 누르세요.\n", startKey, endKey);
    
    /*
        아래 문장을 실수 변수를 만들어서 출력하세요.
     */
    
    double distance = 42.195;
    
    printf("마라톤의 총 거리는 %lfkm 입니다.\n", distance);
    
    /*
        아래 문장을 변수 세개를 사용하여 출력하세요.
     */
    
    int score = 90;
    char gradeChar = 'A';
    double gradeFloat = 4.0;
    
    printf("시험 성적이 %d점 이상이면 \'%c\'학점이고, 평점은 %lf 입니다.\n", score, gradeChar, gradeFloat);
    
    score = 80;
    gradeChar = 'B';
    gradeFloat = 3.0;
    
    printf("시험 성적이 %d점 이상이면 \'%c\'학점이고, 평점은 %lf 입니다.\n", score, gradeChar, gradeFloat);
    
    /*
        아래 정수와 실수를 곱해서 출력하세요
     */
    
    int number1 = 33;
    double number2 = 35.325;
    
    printf("두 수의 곱은 %lf 입니다.\n", number1 * number2);
    
    /*
     
        아래와 같이 점수가 주어 졌을때 평균을 구해서 출력하세요.
         국어 : 93 수학 : 88 영어 : 94
     */
    
    int koreanScore = 93;
    int mathScore = 88;
    int englishScore = 94;
    
    double average = (koreanScore + mathScore + englishScore) / 3;
    
    printf("국어 %d점, 수학 %d점, 영어 %d점\n", koreanScore, mathScore, englishScore);
    printf("평균 %lf 점 입니다.\n", average);
    
    
    /*
        inch = (cm 길이)  * 0.39370
        15cm 가 몇 inch 인지 계산해서 출력하세요.
     */
    
    double inch = 15 * 0.39370;
    
    printf("15cm 는 %lfinch 입니다.\n", inch);
    
    return 0;
}

