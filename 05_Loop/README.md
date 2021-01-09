# 5. 반복문    


## 반복
> 매일 아침 학교갈 준비를 하고 학교에 등교 한다.   
> 게임을 5판 이길떄 까지 게임을 계속 한다.   
> 몸무게가 70kg이 될때 까지 운동을 계속 한다.

* 같은 패턴으로 같은 일을 여러번 행하는 일을 **반복** 한다고 한다. 
* **"반복 되는 일상"**이라는 표현에서 보듯이 우리는 반복을 일상으로 하고 살고 있다.
* 반복은 일반 적으로 무한 하지 않다. 그래서 반복을 수행하는데는 조건이 따라 온다   
	* 매일 아침 학교갈 준비를 하고 학교에 등교 한다 
		* 학교를 준비하고 학교를 가는 것은 평일이라는 조건에 따라 반복 된다. 
		* 크게 보면 졸업하기 전까지를 의미한다고도 할 수 있다. 
	* 게임을 5판 이길때 까지 게임을 계속 한다.
		* 5판 승리라는 조건에 한에서 반복을 하고 있다.
	* 몸무게가 70kg이 될때 까지 운동을 계속 한다.
		* 	몸무게가 70kg 이라는 조건이 될떄 까지 반복한다.

위 문장중 하나를 C언어 문법으로 번역하면 아래와 같다. 

```
몸무게가 70kg이 될때 까지 운동을 계속 한다.
            ▼
몸무게가 70kg 이상인 동안 운동을 한다. 
            ▼
while(몸무게가 70 이상) {
	운동을 한다
}
            ▼
while(weight > 70) {
	workOut();
}
``` 		

## while
```
while(weight > 70) {
	workOut();
}
``` 		
* ~동안에 라는 의미를 가진 while로 시작하는 문법이다. 
* while 뒤에는 괄호가 있고 그 안에 **조건**을 표시한다. 
* if와 마찬가지로 조건은 비교 연산자를 통해서 표현한다. 
* 조건이 참일 경우 반복할 명령을 중괄호 안에 적어 준다. 
* if는 조건이 만족하면 중괄호 안의 명령을 한번 수행하고 끝나지만, while은 조건이 거짓이 될때 까지 계속 반복 된다. 
* 따라서 반복문 안에서 while 조건이 거짓이 될 수 있도록 해주는 것이 중요하다.
* 사람의 생각은 반복을 그만 하는 조건을 기반으로 생각한다. 
	* 하지만 while 내 조건은 반복을 유지하는 조건을 표시해야 한다. 
	* 따라서 반복을 그만 하는 조건을 생각 하고, 그와 반대 되는 조건을 while 조건에 명시 해주어야 한다. 
	* 위의 예로 70kg 이하가 되면 반복을 그만 두게 되므로 그와 반대 되는 70이상인 경우를 조건으로 주어야 한다. 
	* 컴퓨터에게는 반복이 되는 기준이 중요하다. 처음에는 헤깔릴 수 있으니 유의 해야 한다. 


##  횟수 반복

* 반복문을 통해서 정해진 횟수 만큼 반복 하는 유형을 많이 사용한다.  
* 아래 코드는 정해진 횟수만큼 반복하는 전형적인 방법이다.  

```
int i = 0;
while(i < 5) {
	printf("Hello, World!!\n");
	i++; // i = i + 1;
}
```
*  5회 동안 Hello World를 반복하도록 한다.
* i 변수에 0을 넣고 반복하는 동안 1씩 증가 시킨다. 
* 반복을 하는동안 i가 1씩 증가 하기 때문에 반복 하는 횟수를 i를 통해서 파악 할 수 있다. 
* while의 조건에는 반복하는 횟수를 확인 할수 있는 i 변수와 반복하기를 원하는 수(5)를 비교 한다. 
* 위 코드에서는 반복 횟수 i가 5가 되는 순간 조건이 false가 되어서 반복이 중단된다. 
* 즉, 즉 반복횟수 i 가 반복을 원하는 횟수(5) 보다 작을 동안 반복하도록 해서 원하는 만큼 반복 할 수 있게 된다. 

* 아래와 같이 카운트 다운 형식의 반복도 가능하다. 

```
int i = 5;
while(i >= 0) {
	printf("Hello, World!!\n");
	i--;
 }
```

## 무한 루프
* 무한 루프는 말 그대로 무한으로 반복되는 반복문이다. 
* 끝나지 않기 때문에, 컴퓨터에 무리도 많이 주게 되고, 시스템에도 무리를 주는 위험한 방법이다. 
* 단, 컨트롤이 가능한 상태에서 특수한 경우에 사용된다. 

```
while(1) {
	printf("Hello, World\n");
}
```
* while 조건안에 1은 무조건 true를 나타낸다. 
	* c에서 **0**은 false, **0이 아닌 수**는 true를 나타 낸다.
	* 일반적으로 true를 나타 낼때 1을 쓴다.
* 조건이 무조건 참이기 때문에, 끝없이 반복하게 된다. 

```
int i = 0;
while(i < 5) {
	printf("Hello World\n");
}
```
* i를 증가 시켜 주지 않는 것과 같은 실수를 통해서 원치 않는 무한 루프를 만들수 있다. 
* 반복문을 사용 할때는 꼭 조건이 무한 루프에 빠지지 않는지 확인해야한다. 

## do-while 
```
int i = 0;
do {
	printf("Hello, World!!");
	i++;
} while(i < 5);
```
* do 뒤에 중괄호가 오고 그안에 반복할 문장이 온다. 
* while 조건은 그 뒤에 붙는다. 
* while과 다르게 처음에 조건을 확인하지 않고 중괄호 안에 문장을 한번 수행하고 나서 while의 조건을 따진다.
* 조건과 상관없이 1번은 무조건 수행해야 하는 경우에 이용한다. 


[예제보기](ex/ex01.c)  
[문제풀기](test/test01/README.md)


## for
* while과 함께 대표적인 반복문 문법이다. 
* while과 다르게 따라 오는 괄호 안에 세가지 문장이 포함된다. 
* 횟수 반복하는 while을 for문으로 변경하면 아래와 같다.

```
int i = 0;
while(i < 5) {
	printf("Hello, World!!");
	i++; // i = i + 1;
}
            ▼
            
for(int i = 0; i < 5; i++) {
	printf("Hello, World!!");
}
```
* for로 시작하는 ~동안을 의미하는 문법이다. 
* for뒤의 괄호안에 **;**으로 구분되는 세가지 문장이 포함된다. 
* 첫번째는 초기화 문장으로 for문을 처음에 진입하면서 한번만 수행된다. 
	* 주로 반복문 횟수를 카운트 하는등 조건문에 사용된 변수를 초기화 해준다. \
	* for문 내에서 선언과 초기화를 한경우 해당 변수의 생명 주기는 for문 안에서만 유효하다.
* 두번째는 조건문이다. while의 것과 동일하다. 
* 세번째는 증감식이다. 주로 횟수를 카운트 하기위해 변수를 증가 시키거나 감소 시키는 용도로 사용한다. 
* while과 비교하면 while 문 전과 반복안에서 마지막에 수행되는 문장을 하나로 합쳐서 표현했다는 것을 알 수 있다.
* 반복문에 자주 사용되는 초기화와 증감식을 한번에 다 표현할 수 있어서, while 보다 더 자주 사용된다. 
* 다른 부분은 while과 동일하다. 
* 반복문의 특성에 맞춰서 사용하면된다. 

```
int weight = 0;
printf("몸무게를 입력하세요 : ");
scanf("%d", &weight);
for( ; weight > 70; weight -= 2) {
	printf("운동 열심히!! 으쌰으쌰 %d\n", weight);
}
```

* 초기화 나 증감식이 필요 없는 경우는 위와 같이 비워 두면 된다. 
* 조건식을 비워 놓을 경우 무한 루프에 빠질 수 있으므로 조건은 꼭 적어 주어야 한다. 

[예제보기](ex/ex02.c)  
[문제풀기](test/test02/README.md)

## break
* 반복문에서 조건과 관계 없이 반복문 안에서 탈출 할떄 **break** 문을 사용한다. 

```
int i = 0;
while(1) {
        
	printf("Hello, World!!\n");
	if(i == 10) {
		break;
	}
	i++;
}
```
* 무한 루프 상황에서 if를 통해 특정 조건일때 반복문을 빠져 나오는 상황
*  i가 10이 되었을때 break가 되어 무한 루프이지만 10번 반복후 빠져 나오게 된다.
*  가장 가까운 반복문에서만 빠져 나오게 된다.  


## continue

* 반복문 내에 일부 코드를 뛰어 넘고 다시 반복을 하게 할떄 **continue** 를 사용한다. 

```
for(int i = 0; i < 10; i++) {
        
	if(i % 4 == 0) {
		continue;
	}
	
	printf("%d ", i);
}
```

* i변수를 통해서 0~10까지 출력 하는 반복문이다. 
*  다만 if 조건에 의해서 4의 배수인경우 continue를 해서 아래에 있는 printf를 수행하지 못하고 반복 하게 된다.  
*  break 와 다르게 반복문을 빠져 나오는게 아니고, 그 뒤에 내용만 수행 하지 않은채 반복을 계속 수행하게 된다.  
*  출력은 아래와 같이 된다. 
`0 1 2 3 5 6 7 9`

[예제보기](ex/ex03.c)  
[문제풀기](test/test03/README.md)


[종합문제](test/test04/README.md)  
[고급문제](test/test05/README.md)  