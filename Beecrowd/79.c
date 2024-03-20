#include <stdio.h>

int main() {

  int N;
  scanf("%d",&N);
  double a,b,c;

  for(int i =1;i<=N;i++){
  double weight;
  scanf("%lf %lf %lf",&a,&b,&c);

  weight=(((a*2)+(b*3)+(c*5))/10.0);

  printf("%.1lf\n",weight);

  }

    return 0;
}
