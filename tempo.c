#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){

clock_t timer;
timer=clock();

int i;
for(i=0;i<10;i++){
printf("%d",i);
}

timer=clock()-timer;

printf("\n\n%f milesegundo(s) de execucao\n\n",((float)timer)/(CLOCKS_PER_SEC/1000));
}
