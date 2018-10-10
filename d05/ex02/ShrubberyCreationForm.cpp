/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:31:41 by aorji             #+#    #+#             */
/*   Updated: 2018/10/09 16:31:42 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("ShrubberyCreationForm", "undefined", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name ) : Form("ShrubberyCreationForm", name, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & 
ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs) {
	(void)rhs;
	return *this;
}

int
ShrubberyCreationForm::validateFile(const char *path) const{
	struct stat s;

	if(stat(path,&s) == 0) {
	    if(s.st_mode & S_IFDIR) {
			std::cout <<path<<": Is a directory" << std::endl;
			return (0);
	    }
	    else if (!(s.st_mode & S_IROTH) & !(s.st_mode & S_IRGRP) & !(s.st_mode & S_IRUSR)) {
	    	std::cout <<path<<": Permission denied" << std::endl;
	    	return (0);
	    }
	    else if(s.st_mode & S_IFREG)
	    	return (1);
	}
	std::cout <<path<<": No such file or directory" << std::endl;
	return (0);
}

void
ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	executor.executeForm(*this);
	Form::execute(executor);
	std::string fileName = "<"+ getTarget() +">_shrubbery";
	std::ofstream ofs(fileName.c_str());
	if (validateFile(fileName.c_str())) {
	ofs <<"    oxoxoo    ooxoo "<< std::endl;
 	ofs <<"  ooxoxo oo  oxoxooo "<< std::endl;
 	ofs <<" oooo xxoxoo ooo ooox "<< std::endl;
 	ofs <<" oxo o oxoxo  xoxxoxo "<< std::endl;
 	ofs <<"  oxo xooxoooo o ooo "<< std::endl;
 	ofs <<"    ooo\\oo\\  /o/o "<< std::endl;
 	ofs <<"        \\  \\/ / "<< std::endl;
 	ofs <<"         |   / "<< std::endl;
 	ofs <<"         |  | "<< std::endl;
 	ofs <<"         | D| "<< std::endl;
 	ofs <<"         |  | "<< std::endl;
 	ofs <<"         |  | "<< std::endl;
 	ofs <<"  ______/____\\____ "<< std::endl << std::endl;
 	ofs <<"    oxoxoo    ooxoo "<< std::endl;
 	ofs <<"  ooxoxo oo  oxoxooo "<< std::endl;
 	ofs <<" oooo xxoxoo ooo ooox "<< std::endl;
 	ofs <<" oxo o oxoxo  xoxxoxo "<< std::endl;
 	ofs <<"  oxo xooxoooo o ooo "<< std::endl;
 	ofs <<"    ooo\\oo\\  /o/o "<< std::endl;
 	ofs <<"        \\  \\/ / "<< std::endl;
 	ofs <<"         |   / "<< std::endl;
 	ofs <<"         |  | "<< std::endl;
 	ofs <<"         | D| "<< std::endl;
 	ofs <<"         |  | "<< std::endl;
 	ofs <<"         |  | "<< std::endl;
 	ofs <<"  ______/____\\____ "<< std::endl << std::endl;
	}
	ofs.close();	
}