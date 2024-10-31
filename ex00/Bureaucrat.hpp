/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:02:45 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/31 21:04:36 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur);
