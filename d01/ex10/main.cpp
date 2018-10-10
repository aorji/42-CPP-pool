/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:02:48 by aorji             #+#    #+#             */
/*   Updated: 2018/10/03 14:02:49 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int is_valid(char *path) {
	struct stat s;

	if(stat(path,&s) == 0) {
	    if(s.st_mode & S_IFDIR) {
			std::cout << "cat: "<<path<<": Is a directory" << std::endl;
			return (0);
	    }
	    else if (!(s.st_mode & S_IROTH) & !(s.st_mode & S_IRGRP) & !(s.st_mode & S_IRUSR)) {
	    	std::cout << "cat: "<<path<<": Permission denied" << std::endl;
	    	return (0);
	    }
	    else if(s.st_mode & S_IFREG)
	    	return (1);
	}
	std::cout << "cat: "<<path<<": No such file or directory" << std::endl;
	return (0);
}

void fromFiles(char **av) {
	int i = 0;

	while (av[++i]) {
		if (!is_valid(av[i]))
			continue ;
		std::ifstream ifs(av[i]);
		std::stringstream buffer;
		buffer << ifs.rdbuf();
		std::cout << buffer.str()<< std::endl;
		ifs.close();
	}
}

void standardInput() {

	std::string input;

	while(1) {
		if (!std::getline(std::cin, input))
			break;
		std::cout << input << std::endl;
	}
}


int main(int ac, char **av) {
	if (ac == 1) 
		standardInput();
	else
		fromFiles(av);
	return (0);
}
