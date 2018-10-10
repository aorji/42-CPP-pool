/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:51:23 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 11:51:24 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int is_valid(const char *path) {
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

void replaceStr(std::string &str, char *s1, char *s2)
{
	std::string toReplace = s1;
	std::string replaceWith = s2;
	size_t pos = 0;
	size_t N;

	while (1) {
		N = str.find(toReplace, pos);
		if (N == std::string::npos)
			break;
		str.replace(N, toReplace.length(), replaceWith);
		pos = N + replaceWith.length();
	}
	return;
}

void start(char *file, char *s1, char *s2) {
	
	std::string newFileName;

	if (!is_valid(file))
			return ;
	// readPrevFile
	std::ifstream ifs(file);
	std::stringstream buffer;
	buffer << ifs.rdbuf();

	// create Result With Substitution
	std::string bufferStr = buffer.str();
	replaceStr(bufferStr, s1, s2);

	// create new file
	newFileName = file;
	newFileName += ".replace";
	std::ofstream ofs(newFileName);
	if (!is_valid(newFileName.c_str()))
		return ;

	// push result to new file
	ofs << bufferStr;
	ifs.close();
	ofs.close();
}

int main(int ac, char **av) {
	
	if (ac != 4){
		std::cout << "Usage: ./replace \"filename\" \"text to replace\" \"new text\"" << std::endl;
		return (0);
	}
	start(av[1], av[2], av[3]);
	return (0); 
}