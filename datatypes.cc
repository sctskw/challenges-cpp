//Basic Data Types

#include<iostream>

using namespace std;

int main() {
  int a;
  long b;
  long long c;
  char d;
  float e;
  double f;

  scanf("%d %ld %lld %c %f %lf", &a, &b, &c, &d, &e, &f);

  printf("%d\n", a);
  printf("%ld\n", b);
  printf("%lld\n", c);
  printf("%c\n", d);
  printf("%.2f\n", e);
  printf("%lf\n", f);


  return 0;
}
