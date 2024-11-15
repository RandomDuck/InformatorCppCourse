int main()
{
  temperature_list list{};
  for (unsigned i{0}; i < 6; i++)
  {
    std::cout << "Please, enter a temperature raw value [" << i << "]: ";
    unsigned long rawValue;
    std::cin >> rawValue;
    if (rawValue < temperature::ABSOLUTE_ZERO)
    {
      std::cout << "Less than absolute zero, rejected" << std::endl;
      continue;
    }
    list.add(temperature{rawValue});
  }
  display_temperature_list(list);
}