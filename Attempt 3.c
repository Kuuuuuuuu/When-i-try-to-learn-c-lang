#include <stdio.h>

int main(){
 int ary[] = {1, 5, 9, 3, 7, 10, 2, 20, 4};
 int i = 0;

 while (i < 10) {
  if(ary[i] < 5) {
    i++;
    continue;
 }

 if(ary[i] > 10) {
  break;
 }

 printf("%d", ary[i]);
 i++;

 }
 return 0;
}
