/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:54:51 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 02:54:29 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HH
# define FORM_HH

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		Form();
		const std::string _name;
		bool _is_signed;
		const int _sign_grade;
		const int _exe_grade;
	public:
		Form(std::string name, int sign_grade, int exe_grade);

		std::string getName() const;
		bool getSigned() const;
		int get_signGrade() const;
		int get_exeGrade() const;
		void beSigned(Bureaucrat signer);
};
std::ostream& operator<<(std::ostream& os, const Form& forma);

#endif
