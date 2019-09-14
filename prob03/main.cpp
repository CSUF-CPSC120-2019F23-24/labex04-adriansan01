// Sales prediction

#include <iostream>

int main()
{
  //Show the total sales
  const long TOTAL_SALE = 2103419277;
  const long long TODAYS_SALES = TOTAL_SALE * 1.18;


  std::cout << "Last year's sales were $" << TOTAL_SALE <<std::endl;
  std::cout << "This year's sales predictions: $" <<TODAYS_SALES << std::endl;


return 0;
}
