#include <iostream>

int main() {
  int input;

  scanf("%d",&input); //입력받기

  for(int i = 1; i <= input; i++) //for문으로 1부터 입력받은 수 까지의 3제곱 출력
  {
    printf("%d의 3제곱 = %d\n",i,i*i*i); //서식지정자로 출력
  }
  return 0;
}
