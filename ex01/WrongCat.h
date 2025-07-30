#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  WrongCat(const WrongCat& wrong_cat);
  WrongCat& operator=(const WrongCat& wrong_cat);
  ~WrongCat();
  void makeSound() const;
};

#endif
