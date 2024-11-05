/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 06:54:45 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/04 01:15:28 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& original);
		Intern& operator=(const Intern& original);
		~Intern();
	AForm* makeForm(const std::string name, const std::string target);
};

#endif
