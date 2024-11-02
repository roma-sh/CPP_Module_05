/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 06:07:05 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 06:23:05 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target + "_PresidentialPardon", 25, 5)
{
	_target = target;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original)
	: AForm(original.getName(), original.get_signGrade(), original.get_exeGrade()), _target(original._target)
{
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& original)
{
	if (this != &original)
		AForm::operator=(original);
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw std::runtime_error(_target + " is not signed so cannot be executed yet");
	if (executor.getGrade() > this->get_exeGrade())
		throw std::runtime_error("Cannot execute " + _target);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}


