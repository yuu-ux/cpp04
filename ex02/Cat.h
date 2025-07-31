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
  const std::string& getIdeas(int index) const;
  void setIdeas(int index, const std::string& ideas);


 private:
  Brain* brain_;
};

#endif

