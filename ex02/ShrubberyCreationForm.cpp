/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 04:17:37 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/02 05:43:42 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target + "_shrubbery", 145, 137)
{
	_target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original)
	: AForm(original.getName(), original.get_signGrade(), original.get_exeGrade()), _target(original._target)
{
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original)
{
	if (this != &original)
		AForm::operator=(original);
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw std::runtime_error(_target + " is not signed so cannot be executed yet");
	if (executor.getGrade() > this->get_exeGrade())
		throw std::runtime_error("Cannot execute " + _target);
	std::ofstream outfile(_target + "_shrubbery");

	if (!outfile)
		throw std::ofstream::failure("Error: Unable to open file.");
	outfile
		<<"                                                         . " << std::endl
		<<"                                              .         ; " << std::endl
		<<"                 .              .              ;%     ;; " << std::endl
		<<"                   ,           ,                :;%  %; " << std::endl
		<<"                    :         ;                   :;%;'     ., " << std::endl
		<<"           ,.        %;     %;            ;        %;'    ,; " << std::endl
		<<"             ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl
		<<"              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl
		<<"               ;%;      %;        ;%;        % ;%;  ,%;' " << std::endl
		<<"                `%;.     ;%;     %;'         `;%%;.%;' " << std::endl
		<<"                 `:;%.    ;%%. %@;        %; ;@%;%' " << std::endl
		<<"                    `:%;.  :;bd%;          %;@%;' " << std::endl
		<<"                      `@%:.  :;%.         ;@@%;' " << std::endl
		<<"                        `@%.  `;@%.      ;@@%; " << std::endl
		<<"                          `@%%. `@%%    ;@@%; " << std::endl
		<<"                            ;@%. :@%%  %@@%; " << std::endl
		<<"                              %@bd%%%bd%%:; " << std::endl
		<<"                                #@%%%%%:;; " << std::endl
		<<"                                %@@%%%::; " << std::endl
		<<"                                %@@@%(o);  . ' " << std::endl
		<<"                                %@@@o%;:(.,' " << std::endl
		<<"                            `.. %@@@o%::; " << std::endl
		<<"                               `)@@@o%::; " << std::endl
		<<"                                %@@(o)::; " << std::endl
		<<"                               .%@@@@%::; " << std::endl
		<<"                               ;%@@@@%::;. " << std::endl
		<<"                              ;%@@@@%%:;;;. " << std::endl
		<<"                          ...;%@@@@@%%:;;;;,.. " << std::endl;
	outfile.close();
}


