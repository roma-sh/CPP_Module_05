/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 06:54:33 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/05 01:48:33 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& original)
{(void) original;}

Intern& Intern::operator=(const Intern& original)
{
	(void)original;
	return *this;
}

Intern::~Intern()
{}

AForm* Intern::makeForm(const std::string name,const std::string target)
{
	std::string formNames[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};

	AForm* form[] = {
		new PresidentialPardonForm(target),
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target)
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << " form" << std::endl;
			return (form[i]);
		}
	}
	std::cout<< name << " is invalid Form " << std::endl;
	return (NULL);
}

