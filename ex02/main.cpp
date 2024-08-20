/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:45:33 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 10:20:52 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main() {
  ShrubberyCreationForm shrubbery_creation_form("Rooftop_of_42Tokyo");
  RobotomyRequestForm robotomy_request_form("Reviewer");
  PresidentialPardonForm presidential_pardon_form("Reviewer");
  Bureaucrat bureaucrat("Reviewee", 1);

  bureaucrat.executeForm(shrubbery_creation_form);
  std::cout << std::endl;
  bureaucrat.signForm(shrubbery_creation_form);
  bureaucrat.executeForm(shrubbery_creation_form);
  std::cout << std::endl;
  bureaucrat.signForm(robotomy_request_form);
  bureaucrat.executeForm(robotomy_request_form);
  std::cout << std::endl;
  bureaucrat.signForm(presidential_pardon_form);
  bureaucrat.executeForm(presidential_pardon_form);
  return 0;
}
