/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:30:27 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 11:31:53 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
  std::string _target;
  void _execute() const;

public:
  static const std::string name;

  PresidentialPardonForm(const std::string &target = "");
  ~PresidentialPardonForm();
  PresidentialPardonForm(const PresidentialPardonForm &other);

  PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

  static AForm *create(const std::string &target);
};

#endif
