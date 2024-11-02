/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:54:54 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 02:59:40 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int sign_grade, int exe_grade) :
	_name(name), _is_signed(false), _sign_grade(sign_grade), _exe_grade(exe_grade)
{
	if (_exe_grade > 150 || _sign_grade > 150)
		throw std::runtime_error("Bureaucrat::GradeTooLowException");
	else if (_exe_grade < 1 || _sign_grade < 1)
		throw std::runtime_error("Bureaucrat::GradeTooHighException");
}
std::string Form::getName() const
{
	return (_name);
}
bool Form::getSigned() const
{
	return (_is_signed);
}
int Form::get_signGrade() const
{
	return (_sign_grade);
}
int Form::get_exeGrade() const
{
	return (_exe_grade);
}
void Form::beSigned(Bureaucrat signer)
{
	if (signer.getGrade() <= _sign_grade)
	{
		std::cout << _name << " is signed by: "<< signer.getName() << std::endl;
		_is_signed = true;
	}
	else
		throw std::runtime_error("Form::GradeTooLowException");
}

std::ostream& operator<<(std::ostream& os, const Form& forma)
{
	os <<"Form info:  name: " << forma.getName() << ", execution grade: " << forma.get_exeGrade()
		<< ", signing grade: " << forma.get_signGrade() << ", is signed: " << forma.getSigned();
	return os;
}