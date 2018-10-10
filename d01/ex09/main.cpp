/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:17:28 by aorji             #+#    #+#             */
/*   Updated: 2018/10/02 20:17:29 by aorji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main() {
	Logger logger("42File");

	logger.log("Console", "My first log to console");
	logger.log("Console", "My second log to console");
	logger.log("File", "My first log to file");
	logger.log("File", "My second log to file");
	logger.log("dfghk", "no log");

	return 0;
}