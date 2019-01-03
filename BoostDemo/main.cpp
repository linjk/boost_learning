#include <iostream>
#include <sstream>
#include <boost/version.hpp>
#include <boost/config.hpp>
//
#include <boost\progress.hpp>
#include "DateTimeUtil.h"

using namespace boost;

using namespace std;

int 
main(int argc, char* argv[], char* env[]) {
	std::stringstream ss;
	{
		progress_timer pt(ss);

		cout << "Current boost version: " << BOOST_VERSION << endl;
		cout << "Compiler: " << BOOST_COMPILER << endl;
		cout << "---------------------------------------" << endl;
		// 日期时间测试
		DateTimeUtil datetimeUtil;
		cout << "最大计量时间(小时): " << datetimeUtil.max_compute_time() << endl;
		cout << "最小计量时间(秒): " << datetimeUtil.min_compute_time() << endl;
		//
	}
	cout << "程序执行耗时(s): " << ss.str() << endl;
	return 0;
}