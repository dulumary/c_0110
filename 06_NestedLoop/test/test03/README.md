## 문제) - 반복문 고급 문제

### 1. 자리수 계산 

* 수를 입력 받고 해당 수가 몇 자리 수인지 출력 하세요. 

> 입력 예시 

```
수를 입력 하세요  : 432153
``` 


> 출력 예시

```
6
``` 

### 2. 윤년 개수
* 두개의 년을 입력 받고 그 사이의 윤년의 횟수를 출력 하세요. 
* 윤년 조건은 아래 링크 4번 문제를 참고 하세요.  
[윤년조건](../../../04_Condition/test/test06/README.md)

> 입력 예시 

```
두개의 년을 입력 하세요 : 1000 2000
``` 

> 출력 예시

```
243
``` 

### 3. 3 6 9 게임
> 3 6 9 게임의 규칙
> 3, 6, 9 가 포함된 수일때 박수를 친다.
> 숫자에 3, 6, 9 가 두번 포함되어 있으면 두번 친다. 

* 1~ 100 사이의 수를 입력 받고, 입력 받은 수까지 박수를 몇번 쳐야 하는지 출력 하세요. 

> 입력 예시 

```
수를 입력 하세요 : 74
``` 

> 출력 예시

```
42
``` 

### 4. 주사위 중복 제거
* 두개의 주사위를 던져서 나올 수 있는 경우의 수를 모두 출력 하세요.
*  단 , 중복은 제거해서 출력하세요. 

> 출력 예시

```
(1, 1) (1, 2) (1, 3) (1, 4) (1, 5) (1, 6) 
(2, 2) (2, 3) (2, 4) (2, 5) (2, 6) 
(3, 3) (3, 4) (3, 5) (3, 6) 
(4, 4) (4, 5) (4, 6) 
(5, 5) (5, 6) 
(6, 6) 
```




### 5. 달력 출력 하기 

* 2020년 7월 1일은 수요일이다. 
* 아래와 같이 2020년 7월 달력을 출력 하세요. 
> 출력 예제 

```
 2020 / 7 

  S   M   T   W   T   F   S 
              1   2   3   4 
  5   6   7   8   9  10  11 
 12  13  14  15  16  17  18 
 19  20  21  22  23  24  25 
 26  27  28  29  30  31
```

### 6. 계단 오르기 시합
* 재석과 광희는 계단 오르기 시합을 하였다. 
* 재석과 광희는 아래와 같은 속도로 올라 간다.   

> 재석  
>  한층을 올라 가는데 7초가 소요 된다.  
>  5층 마다 한층 올라 가는데 걸리는 시간이 1초씩 증가 한다. 

> 광희  
>  한층을 올라 가는데 5초가 소요 된다.  
>  4층 마다 한층 올라 가는데 걸리는 시간이 3초씩 증가 한다. 

* 층수를 입력 받고, 해당 층수 까지 올라 가는데 소요 되는 시간을 각각 구하세요.  

> 입력 예시 

```
층을 입력 하세요 : 15
``` 

> 출력 예시

```
재석 : 111초
광희 : 124초
``` 

[정답 보기](test03.c)
