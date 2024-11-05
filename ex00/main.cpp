/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:02:13 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/05 01:51:31 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout <<"--------------------invalid grade:--------------------------" << std::endl;
	{
		try
		{
			Bureaucrat Auslanderbehorde("Jerry", 1344);
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout <<"--------------------valid grade and increament test:--------------------------" << std::endl;
	{
		try
		{
			Bureaucrat Auslanderbehorde("Tom", 15);
			std::cout <<Auslanderbehorde.getName()<<"'s grade is:"<<Auslanderbehorde.getGrade() << std::endl;
			Auslanderbehorde.increaseGrade();
			std::cout <<Auslanderbehorde.getName()<<"'s grade is:"<<Auslanderbehorde.getGrade() << std::endl;
			// test overloading:
			std::cout << Auslanderbehorde << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout <<"--------------------Invalid decreament test:--------------------------" << std::endl;
	{
		try
		{
			Bureaucrat Auslanderbehorde("Spike", 150);
			std::cout <<Auslanderbehorde.getName()<<"'s grade is:"<<Auslanderbehorde.getGrade() << std::endl;
			Auslanderbehorde.decreaseGrade();
			std::cout <<Auslanderbehorde.getName()<<"'s grade is:"<<Auslanderbehorde.getGrade() << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}

	}

}
