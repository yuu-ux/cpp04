#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
 public:
  Brain();
  Brain(const Brain& brain);
  Brain& operator=(const Brain& brain);
  ~Brain();
  const std::string& getIdeas(int index) const;
  void setIdeas(int index, const std::string& ideas);
  static const int kMaxIdeas = 100;

 private:
  std::string ideas_[kMaxIdeas];
};
#endif
