#include "Warlock.hpp"

int main()
{
  Warlock const richard("Richard", "Mistress of Magma");
  Warlock jack(richard);
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);
}