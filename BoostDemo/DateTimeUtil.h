#ifndef DATETIMEUTIL_H
#define DATETIMEUTIL_H

/**
	Description: Boost 时间、日期相关的库
	Date: 2019/01/02 19:10:03
	Author: LinJK

	1. timer库
		包含类： 
		- timer             : 小型的计时器，提供毫秒级别的计时精度和操作函数，位于名字空间boost
			注意：
				不适合高精度的时间测量任务，其精度依赖于操作系统或编译器，难以做到跨平台，如果需要跨大
			时间段测量，如天、月等，应使用cpu_timer组件。
		- progress_timer
		- progress_display
	2. 
**/

#include <boost\timer.hpp>

using namespace boost;

class DateTimeUtil {
public:
	// 可度量的最大时间，以小时为单位
	double max_compute_time() const { return _boost_timer.elapsed_max() / 3600; }
	// 可度量的最小时间，以秒为单位
	double min_compute_time() const { return _boost_timer.elapsed_min(); }
private:
	// 注意：timer对象一旦被声明，其构造函数就会启动计时，可以使用其函数elapsed()来获取已经计时的时间长度
	timer _boost_timer;
};

#endif