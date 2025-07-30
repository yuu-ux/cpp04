#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
 public:
  Animal();
  Animal(const Animal& animal);
  Animal& operator=(const Animal& animal);
  virtual ~Animal();
  explicit Animal(const std::string& type);
  virtual void makeSound() const;
  virtual const std::string& getType() const;
  void setType(std::string);

 protected:
  std::string type_;  // NOLINT
};

#endif
