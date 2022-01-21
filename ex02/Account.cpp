#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += this->_amount;
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= _amount;
}

void Account::_displayTimestamp()
{
	time_t cur_time;
	struct tm *tm_time;

	time(&cur_time);
	tm_time = localtime(&cur_time);
	std::cout << '[' << tm_time->tm_year + 1900 << tm_time->tm_mon + 1 << tm_time->tm_mday << '_' << tm_time->tm_hour
		<< tm_time->tm_min << tm_time->tm_sec << ']';
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"
		<< this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts <<";total:" << _totalAmount << ";deposits:"
		<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int old_amount = this->_amount;

	this->_nbDeposits++;
	_totalNbDeposits++;
	this->_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << old_amount << ";deposit:"
		<< deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"
			  << _amount << ";withdrawal:";
	if (_amount - withdrawal >= 0)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	else
		std::cout << "refused" << std::endl;
	return (false);
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const
{
	return (_amount > 0);
}
