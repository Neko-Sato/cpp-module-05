# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/08/20 10:06:30 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= YourMistake

CXXFLAGS	:= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98 -g

SRCS		:= main.cpp
SRCS		+= Bureaucrat.cpp
SRCS		+= AForm.cpp
SRCS		+= ShrubberyCreationForm.cpp
SRCS		+= RobotomyRequestForm.cpp
SRCS		+= PresidentialPardonForm.cpp

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean
clean: $(NAME)
	$(RM) $^