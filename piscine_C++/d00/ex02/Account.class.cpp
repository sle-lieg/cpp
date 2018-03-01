#include <iostream>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Account::Account() : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
// {}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit),
                                        _nbDeposits(1), _nbWithdrawals(0)
{
    Account::_totalAmount += initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    Account::_nbAccounts++;
}

Account::~Account()
{}

void    Account::displayAccountsInfos( void )
{
    // accounts:8;total:20049;deposits:0;withdrawals:0
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";"; 
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}