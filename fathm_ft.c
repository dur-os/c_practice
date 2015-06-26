/* fathm_ft.c -- 把2英寻（fathoms）换算成英尺*/
#include<stdio.h>
int main(void)
{
  int feet,fathoms;

  fathoms = 2;
  feet = 6 * fathoms;
  printf("There are %d feet in %d fathoms!\n",fathoms,feet);
  printf("Yes, I said %d feet!\n",6 * fathoms);
  
  return 0;
}
