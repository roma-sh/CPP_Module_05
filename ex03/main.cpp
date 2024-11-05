/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:02:13 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/05 01:53:45 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern sam;
	AForm* ptr_form;

	ptr_form = sam.makeForm("robotomy request", "target1");
	delete ptr_form;
	ptr_form = sam.makeForm("presidential pardon", "target2");
	delete ptr_form;
	ptr_form = sam.makeForm("shrubbery creation", "target3");
	delete ptr_form;
	ptr_form = sam.makeForm("blabla", "target4");
	delete ptr_form;
}
