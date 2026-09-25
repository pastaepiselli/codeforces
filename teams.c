#include<stdio.h>

int main()
{
  int n;
  int count = 0;
  scanf("%d", &n);
    
  for (int i = 0; i < n; i++){
    int p, v, t;

    scanf("%d%d%d", &p, &v, &t);

    if ((p > 0 && v > 0) || (v > 0 && t > 0) || (p > 0 && t > 0)){
      count++;
    }
    
  }
  printf("%d\n", count);
}
  
