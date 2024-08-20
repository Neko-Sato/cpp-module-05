/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:09:09 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 11:04:45 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

const std::string RobotomyRequestForm::name = "robotomy request";

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm(name, 72, 45), _target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other), _target(other._target) {
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  if (this != &other) {
    AForm::operator=(other);
    _target = other._target;
  }
  return (*this);
}

void RobotomyRequestForm::_execute() const {
  std::srand(std::time(0));
  std::cout << "vrooooooooooooooooooom";
  if (std::rand() % 2) {
    std::cout << "..." << std::endl;
    std::cout << _target << " had a successful lobotomy." << std::endl;
  } else {
    std::cout << "...splat?!" << std::endl;
    std::cout << _target << " failed to lobotomize." << std::endl;
  }
}
