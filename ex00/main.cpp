/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:08:15 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/19 07:28:30 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <sstream>

int main() {
  {
    std::cout << "== Check constructor ==" << std::endl;
    int i = 0;
    for (i = -5; i < 155; i++) {
      try {
        std::stringstream name;
        name << "Bureaucrat" << i;
        Bureaucrat b(name.str(), i);
        std::cout << b << std::endl;
      } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
      }
    }
  }
  {
    std::cout << "== Check promote + ==" << std::endl;
    try {
      Bureaucrat b("Bureaucrat", 3);
      while (1) {
        b.promote();
        std::cout << b << std::endl;
      }
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
    std::cout << "== Check promote - ==" << std::endl;
    try {
      Bureaucrat b("Bureaucrat", 148);
      while (1) {
        b.promote(-1);
        std::cout << b << std::endl;
      }
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  {
    std::cout << "== Check demote + ==" << std::endl;
    try {
      Bureaucrat b("Bureaucrat", 148);
      while (1) {
        b.demote();
        std::cout << b << std::endl;
      }
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
    std::cout << "== Check demote - ==" << std::endl;
    try {
      Bureaucrat b("Bureaucrat", 3);
      while (1) {
        b.demote(-1);
        std::cout << b << std::endl;
      }
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  return 0;
}
