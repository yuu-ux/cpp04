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
  static const int kMaxIdeas = 100;
  std::string ideas_[kMaxIdeas];
};
#endif
