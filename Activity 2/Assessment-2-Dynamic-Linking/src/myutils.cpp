#include "myutils.h"

int factorial(int num)
{
	int fact =1;
	for(int i=1; i<=num; ++i)
	{
		fact *=i;
	}
	return fact;
}

bool isPrime(int num)
{
	bool flag = true;
	if(num == 0 || num ==1)
	{
		flag = false;
	}
	else
	{
		for(int i=2;i<=num/2; ++i)
		{
			if(num%i == 0)
			{
				flag = false;
				break;	
			}
		}
	}
	return flag;
}

bool isPalindrome(int num)
{
	int n = num, digit, rev = 0;
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);
	
	if( n == rev )
	{
		return true;	
	}
	else
	{
		return false;
	}	
}

int vsum (int args, ...)
{
	va_list ap;
	va_start (ap, args);
	int sum = 0;
	for(int i = 0; i < args; ++i)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return sum;
}



