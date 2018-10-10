/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:16:22 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 20:16:45 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string name): fileName(name) {
	return;
}

Logger::~Logger() {
	return;
}

int
Logger::is_valid(const char *path) {
	struct stat s;

	if(stat(path,&s) == 0) {
	    if(s.st_mode & S_IFDIR) {
			std::cout <<path<<": Is a directory" << std::endl;
			return (0);
	    }
	    else if (!(s.st_mode & S_IWUSR) & !(s.st_mode & S_IWGRP) & !(s.st_mode & S_IWOTH)) {
	    	std::cout <<path<<": Permission denied" << std::endl;
	    	return (0);
	    }
	    else if(s.st_mode & S_IFREG)
	    	return (1);
	}
	std::cout <<path<<": No such file or directory" << std::endl;
	return (0);
}

std::string
Logger::_currentDate() {

std::string resTime;

	time_t rawtime;
	struct tm * timeinfo;
	char buffer[25];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime(buffer,25," <%d.%m.%Y %H:%M:%S> ",timeinfo);
	resTime = buffer;
	return resTime;
}

void
Logger::_logToConsole(std::string str) {
	std::cout << " <Log to console> " << str << std::endl; 
}

void
Logger::_logToFile(std::string str) {
	std::ofstream ofs;
	ofs.open(fileName, std::fstream::app);
	if (is_valid(fileName.c_str())) {
		ofs << " <Log to file>    " << str << std::endl;
	}
}

std::string 
Logger::_makeLogEntry(std::string message) {
	std::string formattedStr;

	formattedStr = _currentDate() + " <" + message + "> ";
	return formattedStr;
}

void
Logger::log(std::string const & dest, std::string const & message) {
	int i = 0;
	std::string str;

	void (Logger::*ptr[2])(std::string str) = {&Logger::_logToConsole, &Logger::_logToFile};

	std::string availableDestination[2] = {"Console", "File"};
	str = _makeLogEntry(message);

	while (i < 2) {
		if (availableDestination[i] == dest) {
			(this->*ptr[i])(str);
			break;
		}
		i++;
	}
	return ;
}