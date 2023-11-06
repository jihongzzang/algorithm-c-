#include <bits/stdc++.h>

using namespace std;

int a;
double b;
char c;

/** scanf는 형식을 지정해서 입력을 받는다.*/

/** int scanf(const char* format, ...);*/

/**
 * %d는 int 타입.
 * %lf는 double 타입.
 * %c는 char 타입을 받는다..
 */

/** scanf는 주로 입력형식이 까다롭거나 이를 이용해야할 때 사용하는게 좋으며

 * 보통은 cin을 쓰는게 좋다. */

// d => int / c => char / s => string / lf => double / ld => long long

int main() {
  scanf("%d %lf %c", &a, &b, &c);

  printf("%d\n", a);
  printf("%lf\n", b);
  printf("%c\n", c);

  return 0;
}
