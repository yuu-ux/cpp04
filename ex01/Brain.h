#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
 public:
  Brain();
  Brain(const Brain& brain);
  Brain& operator=(const Brain& brain);
  ~Brain();

 private:
  std::string ideas_[100];
};
#endif
