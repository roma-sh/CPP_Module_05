/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:02:33 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/05 21:32:51 by rshatra          ###   ########.fr       */
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
Bureaucrat::Bureaucrat(Bureaucrat& original)
	: _name(original._name), _grade(original._grade)
{

}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& original)
{
	if (this != &original)
	{
		this->_grade = original._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

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

void Bureaucrat::signForm(Form& forma)
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
