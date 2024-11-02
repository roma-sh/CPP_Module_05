/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:02:13 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 03:07:12 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout <<"--------------------invalid grade:--------------------------" << std::endl;
	{
		try
		{
			Bureaucrat Auslanderbehorde("Jerry", 4242);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout <<"--------------------invalid Form grade:--------------------------" << std::endl;
	{
		try
		{
			Form renewID("renew", 4242, 4);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout <<"--------------------valid test:--------------------------" << std::endl;
	{
		try
		{
			Bureaucrat Auslanderbehorde("Tom", 15);
			Form renewID("renew", 42, 4);
			Form workPermission("workPermission", 16, 16);
			std::cout << renewID << std::endl;
			std::cout << workPermission << std::endl;
			renewID.beSigned(Auslanderbehorde);
			Auslanderbehorde.signForm(workPermission);
			std::cout << renewID << std::endl;
			std::cout << workPermission << std::endl;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
