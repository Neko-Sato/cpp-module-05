/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:51:49 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/19 08:35:25 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw() {
  return "Form grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Form grade is too low";
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign),
      _gradeToExecute(gradeToExecute) {
  if (_gradeToSign < 1 || _gradeToExecute < 1)
    throw GradeTooHighException();
  else if (_gradeToSign > 150 || _gradeToExecute > 150)
    throw GradeTooLowException();
}

Form::~Form() {
}

Form &Form::operator=(const Form &other) {
  if (this != &other) {
    _name = other._name;
    _isSigned = other._isSigned;
    _gradeToSign = other._gradeToSign;
    _gradeToExecute = other._gradeToExecute;
  }
  return *this;
}

Form::Form(const Form &other)
    : _name(other._name), _isSigned(other._isSigned),
      _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
}

const std::string &Form::getName() const {
  return _name;
}

bool Form::getIsSigned() const {
  return _isSigned;
}

int Form::getGradeToSign() const {
  return _gradeToSign;
}

int Form::getGradeToExecute() const {
  return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() < _gradeToSign)
    throw GradeTooHighException();
  _isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &value) {
  out << value.getName();
  out << ", ";
  out << (value.getIsSigned() ? "Signed" : "Unsigned");
  out << ", ";
  out << "grade to sign ";
  out << value.getGradeToSign();
  out << ", ";
  out << "grade to execute ";
  out << value.getGradeToExecute();
  out << ".";
  return out;
}
