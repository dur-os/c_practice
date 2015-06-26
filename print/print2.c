/* print2.c --printf()的更多属性*/
#include<stdio.h>
int main(void)
{
  unsigned int un = 3000000000; //int为32位
  short end = 200;//short为16位的系统
  long big = 65537;
  long long verybig = 3234567890864000002;
  printf("un = %u and not %d\n", un, un);
  printf("end = %hd and %d\n", end, end);
  printf("big = %ld and not %hd\n", big, big);
  printf("verybig = %lld and not %ld\n", verybig, verybig);
  return 0;
}
