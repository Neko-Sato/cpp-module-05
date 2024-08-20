/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:35:17 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 11:38:57 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int main() {
  Bureaucrat A("A", 1);
  Intern someRandomIntern;
  AForm *rrf;
  rrf = someRandomIntern.makeForm("robotomy request", "Bender");
  A.signForm(*rrf);
  A.executeForm(*rrf);
  delete rrf;
  rrf = someRandomIntern.makeForm("put on underpants", "Bender");
  std::cout << rrf << std::endl;
  return 0;
}