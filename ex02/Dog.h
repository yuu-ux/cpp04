#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal {
 public:
  Dog();
  Dog(const Dog& dog);
  Dog& operator=(const Dog& dog);
  ~Dog();
  void makeSound() const;
  const std::string& getIdeas(int index) const;
  void setIdeas(int index, const std::string& ideas);

 private:
  Brain* brain_;
};

#endif

