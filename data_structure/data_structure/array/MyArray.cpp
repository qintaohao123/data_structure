#include "StdAfx.h"
#include "MyArray.h"
#include <iostream>

MyArray::MyArray(int n)
{
	//initialize the arrray by n
	for (int i=0; i<40; i++)
	{
		m_oneD_array[i] = n;
	}

	for (int i=0; i<40; i++)
	{
		for(int j=0; j<40; j++)
		{
			m_twoD_array[i][j] = 0;
		}
	}

}


MyArray::~MyArray(void)
{
}

void MyArray::CalcFactorial( int n )
{
	digit = 1;
	m_oneD_array[0] = 1;
	for (int i =1; i<=n; i++)
	{
		for (int j=0; j<digit; j++)
		{
			m_oneD_array[j]*=i;
		}
		
		for (int k=0; k<digit; k++)
		{
			if (m_oneD_array[k]>=10)
			{
				if (k==digit-1)
				{
					digit++;
				}
				m_oneD_array[k+1] += m_oneD_array[k]/10;
				m_oneD_array[k] = m_oneD_array[k]%10;
			}

		}
	}
}

ostream &operator<<(ostream &output, MyArray &exm_array)
{
	for (int i= exm_array.digit-1; i>=0; i--)
	{
		std::cout<<exm_array.m_oneD_array[i];
	}
	return output;
}
