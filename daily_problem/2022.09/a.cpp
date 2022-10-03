#include <bits/stdc++.h>
using namespace std;

int N, arr[5];
char ch;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  scanf("%d %c", &N, &ch);
  for (int i = 0; i < 5; i++)
    scanf("%d", &arr[i]);

  printf("%d %c\n", N, ch);
  for (int i = 0; i < 5; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}