/*
  If we list all the natural numbers below 10 that are multiples of 3 or 5, we
  get 3, 5, 6 and 9. The sum of these multiples is 23.

  Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>


int main(int, char*[])
{
      auto mod3 = [](int x){return x % 3 == 0;};
      auto mod5 = [](int x){return x % 5 == 0;};

      unsigned int sum = 0;

      for(int i = 0; i < 1000; ++i) {
           if(mod3(i) || mod5(i)) {
                sum += i;
           }
      }

      std::cout << "sum of multiples below 1k is: " << sum << std::endl;

      return 0;
}
