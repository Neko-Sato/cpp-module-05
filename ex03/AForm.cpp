/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:51:49 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/19 08:35:25 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw() {
  return "Form grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
  return "Form grade is too low";
}

const char *AForm::UnsignedException::what() const throw() {
  return "Form is unsigned";
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign),
      _gradeToExecute(gradeToExecute) {
  if (_gradeToSign < 1 || _gradeToExecute < 1)
    throw GradeTooHighException();
  else if (_gradeToSign > 150 || _gradeToExecute > 150)
    throw GradeTooLowException();
}

AForm::~AForm() {
}

AForm &AForm::operator=(const AForm &other) {
  if (this != &other) {
    _name = other._name;
    _isSigned = other._isSigned;
    _gradeToSign = other._gradeToSign;
    _gradeToExecute = other._gradeToExecute;
  }
  return *this;
}

AForm::AForm(const AForm &other)
    : _name(other._name), _isSigned(other._isSigned),
      _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
}

const std::string &AForm::getName() const {
  return _name;
}

bool AForm::getIsSigned() const {
  return _isSigned;
}

int AForm::getGradeToSign() const {
  return _gradeToSign;
}

int AForm::getGradeToExecute() const {
  return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > _gradeToSign)
    throw GradeTooHighException();
  _isSigned = true;
}

void AForm::execute(const Bureaucrat &bureaucrat) const {
  if (!_isSigned)
    throw UnsignedException();
  if (bureaucrat.getGrade() > _gradeToExecute)
    throw GradeTooHighException();
  _execute();
}

std::ostream &operator<<(std::ostream &out, const AForm &value) {
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
