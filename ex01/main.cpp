/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 07:08:15 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/19 08:36:04 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <sstream>

int main() {
  Bureaucrat A("A", 20);
  Bureaucrat B("B", 5);
  Form form_a("form_a", 10, 150);
  Form form_b("form_b", 10, 150);

  A.signForm(form_a);
  B.signForm(form_b);
  return 0;
}
