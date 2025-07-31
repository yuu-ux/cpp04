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

const std::string& Brain::getIdeas(int index) const {
	if (index >= kMaxIdeas) {
		std::cerr << "index out of range" << std::endl;
	}
	return ideas_[index];
}

void Brain::setIdeas(int index, const std::string& ideas) {
	if (index >= kMaxIdeas) {
		std::cerr << "index out of range" << std::endl;
	}
	ideas_[index] = ideas;
}

