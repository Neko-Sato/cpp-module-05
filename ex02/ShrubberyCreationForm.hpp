/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 08:30:27 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/20 09:49:51 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
  std::string _target;
  void _execute() const;

public:
  ShrubberyCreationForm(const std::string &target = "");
  ~ShrubberyCreationForm();
  ShrubberyCreationForm(const ShrubberyCreationForm &other);

  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
};

#endif
