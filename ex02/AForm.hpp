/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:31:52 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/19 08:26:25 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AForm_HPP__
#define __AForm_HPP__

class AForm;

#include "Bureaucrat.hpp"

#include <exception>
#include <iostream>
#include <string>

class AForm {
private:
  std::string _name;
  bool _isSigned;
  int _gradeToSign;
  int _gradeToExecute;
  virtual void _execute() const = 0;

public:
  class GradeTooHighException : public std::exception {
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
    const char *what() const throw();
  };
  class UnsignedException : public std::exception {
    const char *what() const throw();
  };

  AForm(const std::string &name = "", int gradeToSign = 150,
        int gradeToExecute = 150);
  virtual ~AForm();
  AForm(const AForm &other);
  virtual AForm &operator=(const AForm &other);

  const std::string &getName() const;
  bool getIsSigned() const;
  int getGradeToSign() const;
  int getGradeToExecute() const;

  void beSigned(const Bureaucrat &bureaucrat);
  void execute(const Bureaucrat &bureaucrat) const;
};

std::ostream &operator<<(std::ostream &out, const AForm &value);

#endif
