/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:41:14 by mberthet          #+#    #+#             */
/*   Updated: 2022/05/26 14:28:16 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

std::ofstream creatNewFile(std::string infileName)
{
	std::ofstream outfile(infileName.append(".replace"), std::ios::out);
	if (!outfile.good())
	{
		std::cout << "Creation of the newfile compromised." << std::endl;
		return (NULL);
	}
	return (outfile);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: Usage: ./ex04 <filename <str1> <str2>" << std::endl;
		return (1);
	}

	std::string infileName(av[1]);
	std::ifstream infile(infileName);

	/*Creating new file*/
	if (!std::ofstream = creatNewFile(infileName)
	/*Opening and reading the content of the file*/
	if(!infile.good())
	{
		std::cout <<"Wrong filename."<< std::endl;
		return (1);
	}
	else if (infile.peek() == EOF)
	{
		std::cout << "Empty file." << std::endl;
		return (1);
	}


	/*Accessing the content of the stringstream throught its buffer*/
	std::stringstream ss;
	std::string str_buff;
	
	std::string ocDel(av[2]);
	std::string ocChg(av[3]);

	ss << infile.rdbuf();
	infile.close();
	str_buff = ss.str();

	/*Replace ocDel by ocChg in str_buff*/
	std::size_t found = str_buff.find(ocDel, 0);

	while (ocDel != ocChg && found != std::string::npos)
	{
		str_buff.erase(found, ocDel.size());
		str_buff.insert(found, ocChg);
		found = str_buff.find(ocDel, (found + 1));
	}
	outfile << str_buff.c_str();
	outfile.close();
	return (0);
}