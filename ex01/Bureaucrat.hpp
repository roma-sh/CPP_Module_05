/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:02:45 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 03:04:24 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HH
# define BUREAUCRAT_HH

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	private:
		Bureaucrat();
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat(std::string name, int grade);

		std::string getName() const;
		int getGrade() const;
		void increaseGrade();
		void decreaseGrade();
		void signForm(Form& forma);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur);

#endif
