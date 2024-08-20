/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:43:30 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 11:31:27 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
public:
  Intern();
  ~Intern();
  Intern(const Intern &other);
  Intern &operator=(const Intern &other);

  AForm *makeForm(const std::string &formName, const std::string &target);
};

#endif
