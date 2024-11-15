#include <iostream>
#include <string>

std::string readBits(int x) {
  int mask = 0b1;
  std::string output = "";
  for (int i{0}; i<32; ++i) {
    output += (mask & x) ? "1" : "0";
    mask = mask << 1;  
  }
  return output;
}

std::string modReadBits(int x) {
  std::string output = "";
  for (int i{0}; i<32; ++i) {
    output += (x%2) ? "1" : "0";
    x = x >> 1;  
  }
  return output;
}

int main() {
  unsigned int x{};
  std::cin >> x;
  if (std::cin) {
    std::cout << readBits(x) << "\n";
    std::cout << modReadBits(x) << "\n";
  }
}

