#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {
 public:
  Cat();
  Cat(const Cat& cat);
  Cat& operator=(const Cat& cat);
  ~Cat();
  void makeSound() const;

 private:
  Brain* brain_;
};

#endif

