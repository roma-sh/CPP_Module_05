/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:02:13 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 06:20:06 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	// ############# ShrubberyCreationForm TEST ##################
	std::cout << "--------execute unsigned form atempping-------" << std::endl;
	try
	{
		Bureaucrat y("Casper" ,4);
		ShrubberyCreationForm x("forma1");
		x.execute(y);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------execute signed form atempping-------" << std::endl;
	try
	{
		Bureaucrat y("Casper" ,4);
		ShrubberyCreationForm x("forma1");
		x.beSigned(y);
		x.execute(y);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "<---------------------^---------------------->" << std::endl;
	std::cout << "<---------------------v---------------------->" << std::endl;
	std::cout << std::endl;


	// ############# RobotomyRequestForm TEST ##################
	std::cout << "--------execute unsigned form atempping-------" << std::endl;
	try
	{
		Bureaucrat y("Casper" ,4);
		RobotomyRequestForm x("forma1");
		x.execute(y);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------execute signed form atempping-------" << std::endl;
	try
	{
		Bureaucrat y("Casper" ,4);
		RobotomyRequestForm x("forma1");
		x.beSigned(y);
		x.execute(y);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	// ############# PresidentialPardonForm TEST ##################
	std::cout << std::endl;
	std::cout << "<---------------------^---------------------->" << std::endl;
	std::cout << "<---------------------v---------------------->" << std::endl;
	std::cout << std::endl;
		try
	{
		Bureaucrat y("Casper" ,4);
		PresidentialPardonForm x("forma1");
		x.execute(y);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------execute signed form atempping-------" << std::endl;
	try
	{
		Bureaucrat y("Casper" ,4);
		PresidentialPardonForm x("forma1");
		x.beSigned(y);
		x.execute(y);
		y.executeForm(x);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
