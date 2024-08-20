/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:30:27 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 11:04:27 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private:
  std::string _target;
  void _execute() const;

public:
  static const std::string name;

  RobotomyRequestForm(const std::string &target = "");
  ~RobotomyRequestForm();
  RobotomyRequestForm(const RobotomyRequestForm &other);

  RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
};

#endif
