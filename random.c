#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_integer();

int main(void)
{
  int start, end, result;
  srand((unsigned int)time(NULL));
  
  printf("범위의 시작을 입력하세요: ");
  get_integer();
  
  do
  {
    printf("범위의 끝을 입력하세요: ");
    get_integer();
  } while (end < start);
  
  result = rand() % (end - start + 1) + start;
  printf("추출된 난수는 %d입니다.\n", result);

  return 0;
}

int get_integer()
{
  int n;
  scanf("%d", &n);
  return n;
{
