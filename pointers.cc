#include <stdio.h>
#include <iostream>
#include <cstdio>

using namespace std;

void update(int *a, int *b) {

  int c = *a;
  int d = *b;

  *a = c + d;
  *b = std::abs(c - d);

  return;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
