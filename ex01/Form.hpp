/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:31:52 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/19 08:26:25 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FORM_HPP__
#define __FORM_HPP__

class Form;

#include "Bureaucrat.hpp"

#include <exception>
#include <iostream>
#include <string>

class Form {
private:
  std::string _name;
  bool _isSigned;
  int _gradeToSign;
  int _gradeToExecute;

public:
  class GradeTooHighException : public std::exception {
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
    const char *what() const throw();
  };

  Form(const std::string &name = "", int gradeToSign = 150,
       int gradeToExecute = 150);
  ~Form();
  Form(const Form &other);
  Form &operator=(const Form &other);

  const std::string &getName() const;
  bool getIsSigned() const;
  int getGradeToSign() const;
  int getGradeToExecute() const;

  void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &value);

#endif
