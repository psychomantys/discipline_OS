/*
 * =====================================================================================
 *
 *       Filename:  test_ref.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  27-11-2012 18:33:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include	<iostream>

extern "C" {
	int add_nasm(const int &a, const int &b);
	int add_gas(const int &a, const int &b);
}

using namespace std;

int main(){
	cout << "Ret: nasm: " << add_nasm(62,-20) << endl ;
	cout <<	"Ret: gas: " << add_gas(32,10) << endl ;
	return 0;
}

