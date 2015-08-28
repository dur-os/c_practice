#include<stdio.h>
#include<string.h>
int main(void){
	float source;
	unsigned long data;
	char ch[34];
	source = (float)0.75;
	memcpy(&data, &source, 4);
	for(int i = 33;i >= 0;i--){
		if(i== 11 || i== 1){
			ch[i] = '-';
		}else{
			ch[i] = (data % 2) == 1 ? '1' : '0';
			data /=2;
		}
	}
	printf("%s\n",ch);
}

