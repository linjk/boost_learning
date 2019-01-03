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
		// ����ʱ�����
		DateTimeUtil datetimeUtil;
		cout << "������ʱ��(Сʱ): " << datetimeUtil.max_compute_time() << endl;
		cout << "��С����ʱ��(��): " << datetimeUtil.min_compute_time() << endl;
		//
	}
	cout << "����ִ�к�ʱ(s): " << ss.str() << endl;
	return 0;
}