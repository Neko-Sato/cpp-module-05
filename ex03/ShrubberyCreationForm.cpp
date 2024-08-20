/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:43:42 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 11:34:38 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <ostream>

const std::string ShrubberyCreationForm::name = "shrubbery creation";

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm(name, 145, 137), _target(target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other), _target(other._target) {
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  if (this != &other) {
    AForm::operator=(other);
    _target = other._target;
  }
  return *this;
}

static void printTree(std::ostream &stream, unsigned int height) {
  for (unsigned int i = 0; i < height; ++i) {
    std::string spaces(height - i - 1, ' ');
    std::string stars(2 * i + 1, '*');
    stream << spaces << stars << std::endl;
  }

  std::string spaces(height - 1, ' ');
  stream << spaces << "|" << std::endl;
  stream << spaces << "|" << std::endl;
}

void ShrubberyCreationForm::_execute() const {
  std::ofstream file((_target + "_shrubbery").c_str());

  if (!file.is_open())
    throw std::runtime_error("Failed to open file");
  printTree(file, 5);
  file.close();
}

AForm *ShrubberyCreationForm::create(const std::string &target) {
  return new ShrubberyCreationForm(target);
}
