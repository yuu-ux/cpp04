#include "Brain.h"

Brain::Brain() {
  std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& brain) {
  std::cout << "Brain Copy constructor called" << std::endl;
  for (int i = 0; i < kMaxIdeas; ++i) {
    ideas_[i] = brain.ideas_[i];
  }
}
Brain& Brain::operator=(const Brain& brain) {
  std::cout << "Brain Copy assignment operator called" << std::endl;
  if (this != &brain) {
    for (int i = 0; i < kMaxIdeas; ++i) {
      ideas_[i] = brain.ideas_[i];
    }
  }
  return *this;
}

Brain::~Brain() {
  std::cout << "Brain Destructor called" << std::endl;
}
