#include <iostream>
#include <boost/version.hpp>
#include <boost/config.hpp>
//
#include "DateTimeUtil.h"

using namespace std;

int 
main(int argc, char* argv[], char* env[]) {
	cout << "Current boost version: " << BOOST_VERSION << endl;
	cout << "Compiler: " << BOOST_COMPILER << endl;
	cout << "---------------------------------------" << endl;
	// ����ʱ�����
	DateTimeUtil datetimeUtil;
	cout << "������ʱ��(Сʱ): " << datetimeUtil.max_compute_time() << endl;
	cout << "��С����ʱ��(��): " << datetimeUtil.min_compute_time() << endl;
	//
	return 0;
}