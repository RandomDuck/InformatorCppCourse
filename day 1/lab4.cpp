#include <iostream>

int factorial(int internal_x) {
  if (internal_x == 0) return 1;
  int output{1};
  for (int i{1};i<internal_x+1;++i) {
    output = i*output;
  }
  return output;
}

int main() {
  while(true) {
    int x{};
    std::cin >> x;
    if (std::cin) {
      if (x > 12) continue;
      if (x < 0) break;
      std::cout << factorial(x) << "\n";
    }
  }
}

