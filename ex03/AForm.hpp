/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:54:51 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/05 21:46:14 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HH
# define AFORM_HH

#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		AForm();
		const std::string _name;
		bool _is_signed;
		const int _sign_grade;
		const int _exe_grade;
	public:
		AForm(std::string name, int sign_grade, int exe_grade);
		AForm(AForm& original);
		AForm &operator=(const AForm &copy);
		virtual ~AForm() = 0;

		std::string getName() const;
		bool getSigned() const;
		int get_signGrade() const;
		int get_exeGrade() const;
		void beSigned(Bureaucrat signer);
		virtual void execute(Bureaucrat const & executor) const = 0;

};
std::ostream& operator<<(std::ostream& os, const AForm& forma);

#endif
