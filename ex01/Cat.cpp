#include "Cat.h"

Cat::Cat() : Animal("Cat"), brain_(new Brain()) {
  std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat), brain_(new Brain(*cat.brain_)) {
  std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& cat) {
  std::cout << "Cat Copy assignment operator called" << std::endl;
  if (this != &cat) {
    Animal::operator=(cat);
    delete brain_;
    brain_ = new Brain(*cat.brain_);
  }
  return *this;
}

Cat::~Cat() {
  std::cout << "Cat Destructor called" << std::endl;
  delete brain_;
}

void Cat::makeSound() const {
  std::cout << "Meow!" << std::endl;
}

const std::string& Cat::getIdeas(int index) const {
	if (index >= Brain::kMaxIdeas) {
		std::cerr << "index out of range" << std::endl;
	}
	return brain_->getIdeas(index);
}

void Cat::setIdeas(int index, const std::string& ideas) {
	if (index >= Brain::kMaxIdeas) {
		std::cerr << "index out of range" << std::endl;
	}
	brain_->setIdeas(index, ideas);
}
