#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& wrong_animal);
  WrongAnimal& operator=(const WrongAnimal& wrong_animal);
  ~WrongAnimal();
  explicit WrongAnimal(const std::string& type);
  std::string getType() const;
  void setType(std::string type);
  void makeSound() const;

 private:
  std::string type_;
};

#endif
