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
	// 日期时间测试
	DateTimeUtil datetimeUtil;
	cout << "最大计量时间(小时): " << datetimeUtil.max_compute_time() << endl;
	cout << "最小计量时间(秒): " << datetimeUtil.min_compute_time() << endl;
	//
	return 0;
}