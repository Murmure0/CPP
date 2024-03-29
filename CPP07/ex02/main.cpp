/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:39:11 by mberthet          #+#    #+#             */
/*   Updated: 2022/06/30 15:05:10 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <list>

int main(){

	int n = 5;
	std::cout << "Test with unsigned int Array :" << std::endl;
	Array<unsigned int> number(n);

	std::cout << "Array size : " << number.size() << std::endl;
	std::cout << std::endl;

	for(int i = 0; i < n; i ++)
	{
		number[i] = i + 2;
	}
	for(int i = 0; i <= n; i++)
	{
		try{
			std::cout << "Array["<< i <<"] content : " << number[i] << std::endl;}
		catch(const std::exception &e){
			std::cout << e.what() << std::endl;}
	}
	std::cout << std::endl;

	std::cout << "Test with std::list<int> Array :" << std::endl;
	Array<std::list<int> > numbers(n);

	std::cout << "Array size : " << numbers.size() << std::endl;
	std::cout << std::endl;
	for(int i = 0; i < n; i++)
	{
		numbers[i].push_back(i + 10);
	}

	for(int i = 0; i <= n; i++)
	{
		try{
			//std::list<int>::iterator it = numbers[i].begin();
			// std::cout << "Array[" << i << "] content : " << *it << std::endl;}
			std::cout << "Array[" << i << "] content : " << *std::begin(numbers[i]) << std::endl;}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;}
	}

	return 0;
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
	
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
// 		std::cout << "Test operator = : " << std::endl;
//         Array<int> tmp = numbers;
// 		std::cout << numbers[1] << std::endl;
// 		std::cout << tmp[1] << std::endl;
// 		std::cout << std::endl;
// 		std::cout << "The arrays are independant :" << std::endl;
// 		tmp[1] = 2;
// 		std::cout << numbers[1] << std::endl;
// 		std::cout << tmp[1] << std::endl;
// 		std::cout << std::endl;

// 		std::cout << "Test constructor by copy : " << std::endl;
//         Array<int> test(tmp);
// 		std::cout << tmp[1] << std::endl;
// 		std::cout << test[1] << std::endl;
// 		std::cout << std::endl;
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         std::cout << numbers[MAX_VAL-1] << std::endl;
//         std::cout << numbers[MAX_VAL] << std::endl;
//         // numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }
