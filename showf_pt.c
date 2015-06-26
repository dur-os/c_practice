/* showf_pt.c --以两种方式显示浮点值*/
#include<stdio.h>
int main(void)
{
  float aboat = 32000.0;
  double abet = 2.14e9;
  long double dip = 5.32e-5;// %a 输出十六进制浮点数
  printf("%f can be written %e can be written %a\n", aboat, aboat, aboat);
  printf("%f can be written %e can be written %a\n", abet, abet, abet);
  printf("%Lf can be written %Le can be written %La\n", dip, dip, dip);
  return 0;
}
