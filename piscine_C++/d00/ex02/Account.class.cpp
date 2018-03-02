#include <iostream>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Account::Account() : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
// {}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit),
                                        _nbDeposits(0), _nbWithdrawals(0)
{
    Account::_totalAmount += initial_deposit;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";created" << std::endl;
    Account::_nbAccounts++;
}

Account::~Account( void )
{
    // [20150902_120513] index:7;amount:8942;closed
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";closed" << std::endl;        
}

int     Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int     Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int     Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int     Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void    Account::displayAccountsInfos( void )
{
    // accounts:8;total:20049;deposits:0;withdrawals:0
    std::cout << "accounts:" << Account::getNbAccounts() << ";";    
    // std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";"; 
    // std::cout << "total:" << Account::_totalAmount << ";"; 
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    // std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
    // std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

// index:0;amount:42;deposits:0;withdrawals:0
void    Account::displayStatus( void ) const
{
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	// static int	_totalAmount;
	// static int	_totalNbDeposits;
    // 	int				_amount;
	// int				_nbDeposits;
    // [20150902_120513] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    _amount += deposit;
    _nbDeposits++;

    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount << ";";    
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

// [20150902_120513] index:0;p_amount:47;withdrawal:refused
// [20150902_120513] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal )
{
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (checkAmount() >= withdrawal)
    {        
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        _amount -= withdrawal;
        _nbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << _amount << ";";
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    else
    {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
}

int		Account::checkAmount( void ) const
{
    return _amount;
}