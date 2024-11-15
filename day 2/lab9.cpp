#include <iostream>

char* str_concat1(char* first, const char* second)
{
  // Find the end of string referred by parameter first
  char* const retval = first;
  while (*first != 0) {
    ++first;  
  }
   std::cout << "\n";

  // Append character by character from string referred by parameter second to
  while (*second != 0) {
    *first = *second;
    ++first;
    ++second;
  }
  *first = 0;
   std::cout << "\n";
  
  // Return start address of the first string
  return retval;
}

char* str_concat2(char first[], const char second[])
{
  int i{};
  // As str_concat1() above, but by indexing the parameters
  while (first[i] != 0) {
    i++;
  }
  // Return start address of the first string
  int j{};
  while(second[j] != 0) {
    first[i] = second[j];
    j++;
    i++;
  }
  first[i] = 0;

  return first;
}

int main()
{
  std::cout << "Enter first string: ";
  char a[100]{"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
  std::cin >> a;
  std::cout << "Enter second string: ";
  char b[80];
  std::cin >> b;
  std::cout << str_concat2(a, b) << std::endl;
  // if any "xxxxxxx" remain in the string, something is wrong
}
