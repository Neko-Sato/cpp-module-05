/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:24:35 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 11:34:20 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const std::string PresidentialPardonForm::name = "presidential pardon";

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm(name, 25, 5), _target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &other)
    : AForm(other), _target(other._target) {
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  if (this != &other) {
    AForm::operator=(other);
    _target = other._target;
  }
  return (*this);
}

void PresidentialPardonForm::_execute() const {
  std::cout << _target << " has been pardoned by Zaphod Beeblebrox"
            << std::endl;
}


AForm *PresidentialPardonForm::create(const std::string &target) {
  return new PresidentialPardonForm(target);
}