#ifndef DATETIMEUTIL_H
#define DATETIMEUTIL_H

/**
	Description: Boost ʱ�䡢������صĿ�
	Date: 2019/01/02 19:10:03
	Author: LinJK

	1. timer��
		�����ࣺ 
		- timer             : С�͵ļ�ʱ�����ṩ���뼶��ļ�ʱ���ȺͲ���������λ�����ֿռ�boost
			ע�⣺
				���ʺϸ߾��ȵ�ʱ����������侫�������ڲ���ϵͳ�������������������ƽ̨�������Ҫ���
			ʱ��β��������졢�µȣ�Ӧʹ��cpu_timer�����
		- progress_timer
		- progress_display
	2. 
**/

#include <boost\timer.hpp>

using namespace boost;

class DateTimeUtil {
public:
	// �ɶ��������ʱ�䣬��СʱΪ��λ
	double max_compute_time() const { return _boost_timer.elapsed_max() / 3600; }
	// �ɶ�������Сʱ�䣬����Ϊ��λ
	double min_compute_time() const { return _boost_timer.elapsed_min(); }
private:
	// ע�⣺timer����һ�����������乹�캯���ͻ�������ʱ������ʹ���亯��elapsed()����ȡ�Ѿ���ʱ��ʱ�䳤��
	timer _boost_timer;
};

#endif