/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:16:56 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 20:17:14 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

class Logger {

public:
	std::string fileName;

	Logger(std::string name);
	~Logger();

	void log(std::string const & dest, std::string const & message);

private:
	void _logToConsole(std::string str);
	void _logToFile(std::string str);
	std::string _makeLogEntry(std::string message);

	static std::string _currentDate();
	static int is_valid(const char *path);

};

#endif