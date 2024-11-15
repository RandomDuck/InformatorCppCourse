#include <iostream>
#include <vector>

int randomize() {
  return rand() % 100;
}

bool between_values(int x) {
  return x > 34 && x < 42;
}

int main () {
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  std::vector<int> numbers(100);
  std::generate(numbers.begin(), numbers.end(), randomize);
  int count{static_cast<int>(std::count_if(numbers.begin(), numbers.end(), between_values))};
  std::cout << "There was " << count << " total numbers matching the required values." << std::endl;
}
