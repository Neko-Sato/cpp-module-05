/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:45:48 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 11:37:24 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern &other) {
  if (this != &other) {
  }
}

Intern &Intern::operator=(const Intern &other) {
  if (this != &other) {
  }
  return (*this);
}

AForm *Intern::makeForm(const std::string &formName,
                        const std::string &target) {
  static const struct {
    const std::string *name;
    AForm::create_t create;
  } forms[] = {
      {&ShrubberyCreationForm::name, ShrubberyCreationForm::create},
      {&RobotomyRequestForm::name, RobotomyRequestForm::create},
      {&PresidentialPardonForm::name, PresidentialPardonForm::create},
  };
  static const size_t size = sizeof(forms) / sizeof(*forms);

  size_t i = 0;
  while (i < size && *forms[i].name != formName)
    i++;
  if (i == size)
    return (NULL);
  return (forms[i].create(target));
};
