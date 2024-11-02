/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:02:33 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 06:21:42 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw std::runtime_error("Bureaucrat::GradeTooLowException");
	if (grade < 1)
		throw std::runtime_error("Bureaucrat::GradeTooHighException");
	// _name = name; // not allowed because _name is const
	// _grade = grade;
}

std::string Bureaucrat::getName() const
{
	return (_name);
}
int Bureaucrat::getGrade() const
{
	return (_grade);
}
void Bureaucrat::increaseGrade()
{
	if (_grade == 1)
		throw std::runtime_error("Bureaucrat::GradeTooHighException");
	_grade--;
}
void Bureaucrat::decreaseGrade()
{
	if (_grade == 150)
		throw std::runtime_error("Bureaucrat::GradeTooLowException");
	_grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur)
{
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return os;
}

void Bureaucrat::signForm(AForm& forma)
{
	if (this->getGrade() <= forma.get_signGrade())
	{
		forma.beSigned(*this);
		std::cout << this->getName() << " signed " << forma.getName() << std::endl;
	}
	else
		std::cout << this->getName() << " couldn\'t sign " << forma.getName()
		<<" because the sign grade is not enough" << std::endl;

}

void Bureaucrat::executeForm(AForm const & form)
{
	if (this->getGrade() <= form.get_exeGrade() && form.getSigned())
	{
		std::cout <<this->_name << " executed " << form.getName() << std::endl;
		form.execute(*this);
	}
	else
		std::cout <<this->_name << "cannot executed" << form.getName() << std::endl;
}
