#include <stdio.h>

unsigned long long reverse(unsigned long long n) {
  unsigned long long reversed = 0;
  
  while (n != 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  
  return reversed;
}

int isPalindrome(unsigned long long n) {
  return n == reverse(n);
}

int main() {
  int T;
  scanf("%d", &T);
  
  while (T--) {
    unsigned long long number;
    scanf("%llu", &number);
    
    int iterations = 0;
    
    while (!isPalindrome(number)) {
      unsigned long long revNumber = reverse(number);
      number += revNumber;
      iterations++;
    }
    
    printf("%d %llu\n", iterations, number);
  }
  
  return 0;
}