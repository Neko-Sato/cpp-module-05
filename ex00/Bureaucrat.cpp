/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 06:02:00 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/19 07:23:21 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade is too low";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
    : _name(name), _grade(grade) {
  if (_grade < 1)
    throw GradeTooHighException();
  else if (_grade > 150)
    throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
    : _name(other._name), _grade(other._grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  if (this != &other) {
    _name = other._name;
    _grade = other._grade;
  }
  return *this;
}

const std::string &Bureaucrat::getName() const {
  return _name;
}

int Bureaucrat::getGrade() const {
  return _grade;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &value) {
  out << value.getName();
  out << ", bureaucrat grade ";
  out << value.getGrade();
  out << ".";
  return out;
}

void Bureaucrat::promote(int grade) {
  int tmp = _grade - grade;
  if (tmp < 1)
    throw GradeTooHighException();
  else if (tmp > 150)
    throw GradeTooLowException();
  _grade = tmp;
}

void Bureaucrat::demote(int grade) {
  int tmp = _grade + grade;
  if (tmp < 1)
    throw GradeTooHighException();
  else if (tmp > 150)
    throw GradeTooLowException();
  _grade = tmp;
}
