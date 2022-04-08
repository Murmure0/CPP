/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthet <mberthet@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:17:51 by mberthet          #+#    #+#             */
/*   Updated: 2022/04/08 18:43:07 by mberthet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << " index:" << this->_nbAccounts;
	std::cout << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts +=1;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t	timer;
	struct	tm *timeinfo;
	char	buff[16];

	time(&timer);
	timeinfo = localtime(&timer);
	strftime(buff, 16, "%Y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << buff << "]";
}

void Account::makeDeposit(int deposite)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposite;
	this->_amount += deposite;
	std::cout << ";amount:" << this->_amount;
	this->_nbDeposits += 1;
	std::cout << ";nb_deposits:" << Account::_nbDeposits << std::endl;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposite;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << " index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << " index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		std::cout << ";amount:" << this->_amount;
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		Account::_totalAmount -= withdrawal;
	}
	return (true);
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
