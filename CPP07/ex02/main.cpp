/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:39:11 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/29 13:02:28 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// int main(){

// 	int n = 5;
// 	Array<unsigned int> number(n);
// 	Array<unsigned int> nonumber();


// 	std::cout << "Array size : " << number.size() << std::endl;
// 	std::cout << std::endl;

// 	for(int i = 0; i < n; i++)
// 	{
// 		try{
// 			std::cout << "Array["<< i <<"] : ";
// 			std::cout <<number[i] << std::endl;}
// 		catch(const std::exception &e){
// 			std::cout << e.what() << std::endl;}
// 	}
// 	std::cout << std::endl;
		
// 	std::cout << "Everything is fine, cool. Let's try something outside of the array :" << std::endl;
// 	try {
// 		std::cout <<number[5] << std::endl;}
// 	catch(const std::exception &e){
// 		std::cout << e.what() << std::endl;}
// 	std::cout << std::endl;

// 	return 0;
// }

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
	
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
		std::cout << "Test operator = : " << std::endl;
        Array<int> tmp = numbers;
		std::cout << numbers[1] << std::endl;
		std::cout << tmp[1] << std::endl;
		std::cout << std::endl;
		std::cout << "The arrays are independant :" << std::endl;
		tmp[1] = 2;
		std::cout << numbers[1] << std::endl;
		std::cout << tmp[1] << std::endl;
		std::cout << std::endl;

		std::cout << "Test constructor by copy : " << std::endl;
        Array<int> test(tmp);
		std::cout << tmp[1] << std::endl;
		std::cout << test[1] << std::endl;
		std::cout << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << numbers[MAX_VAL-1] << std::endl;
        std::cout << numbers[MAX_VAL] << std::endl;
        // numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}

