/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 05:48:09 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/19 07:13:26 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat {
private:
  std::string _name;
  int _grade;

public:
  class GradeTooHighException : public std::exception {
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
    const char *what() const throw();
  };

  Bureaucrat(const std::string &name = "", int grade = 150);
  ~Bureaucrat();
  Bureaucrat(const Bureaucrat &other);
  Bureaucrat &operator=(const Bureaucrat &other);
  const std::string &getName() const;
  int getGrade() const;

  void promote(int grade = 1);
  void demote(int grade = 1);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &value);

#endif
