

#include <stdio.h>

int main() {
    // insert code here...
    int num1=1;
    int num2=1;
    
    /*
    num1=num1+2;
     //변수 num1에 정수값 2를 더하고 나서 다시 num1에 저장
    // num1+1 을 먼저 하고 그 다음에 변수 num1에 다시 저장
    num2=num2-2;
    // 변수 num2에 정수값 2를 빼고 나서 다시 num2에 저장
    
    */
    num1+=2;//덧셈 후 할당 num1=num1+2 와 같은 코드
    num2-=2;//뺄셈 후 할당 num2=num2-2 와 같은 코드
    
    printf("%d\n",num1);
    printf("%d\n",num2);
    
    
    return 0;
}
