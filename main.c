#include <stdio.h>
#include <stdlib.h>

int main()
{
      for(int i = 1; i <= 9;i++){
        for(int j = i; j <= 9;j++){
      j == 9 ?  printf("%d\n",i) : printf("%d",j);
        }
      }
}
