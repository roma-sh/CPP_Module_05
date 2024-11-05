/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:54:54 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 05:29:54 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int sign_grade, int exe_grade) :
	_name(name), _is_signed(false), _sign_grade(sign_grade), _exe_grade(exe_grade)
{
	if (_exe_grade > 150 || _sign_grade > 150)
		throw std::runtime_error("Bureaucrat::GradeTooLowException");
	else if (_exe_grade < 1 || _sign_grade < 1)
		throw std::runtime_error("Bureaucrat::GradeTooHighException");
}
AForm::AForm(AForm& original) : _name(original._name), _sign_grade(original._sign_grade), _exe_grade(original._exe_grade)
{
	this->_is_signed = original.getSigned();
}


AForm &AForm::operator=(const AForm &copy)
{
	if (this != &copy)
		this->_is_signed = copy._is_signed;
	return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const
{
	return (_name);
}
bool AForm::getSigned() const
{
	return (_is_signed);
}
int AForm::get_signGrade() const
{
	return (_sign_grade);
}
int AForm::get_exeGrade() const
{
	return (_exe_grade);
}
void AForm::beSigned(Bureaucrat signer)
{
	if (signer.getGrade() <= _sign_grade)
	{
		std::cout << _name << " is signed by: "<< signer.getName() << std::endl;
		_is_signed = true;
	}
	else
		throw std::runtime_error("AForm::GradeTooLowException");
}

std::ostream& operator<<(std::ostream& os, const AForm& forma)
{
	os <<"AForm info:  name: " << forma.getName() << ", execution grade: " << forma.get_exeGrade()
		<< ", signing grade: " << forma.get_signGrade() << ", is signed: " << forma.getSigned();
	return os;
}
