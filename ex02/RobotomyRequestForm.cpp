/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 05:49:39 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 06:23:19 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
#include <string>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target + "_Robotomy", 72, 45)
{
	_target = target;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original)
	: AForm(original.getName(), original.get_signGrade(), original.get_exeGrade()), _target(original._target)
{
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& original)
{
	if (this != &original)
		AForm::operator=(original);
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw std::runtime_error(_target + " is not signed so cannot be executed yet");
	if (executor.getGrade() > this->get_exeGrade())
		throw std::runtime_error("Cannot execute " + _target);
	std::cout << "Drilling... TTTTtttTTttrtrtrttrtttrtrtr" << std::endl;
	// Seed the random number generator
	srand(static_cast<unsigned int>(time(0)));
	int random_number = 1 + rand() % 100; // 1->100
	if (random_number % 2 == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;

}


