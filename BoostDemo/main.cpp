#include <iostream>
#include <boost/version.hpp>
#include <boost/config.hpp>

using namespace std;

int 
main(int argc, char* argv[], char* env[]) {
	cout << "Current boost version: " << BOOST_VERSION << endl;
	cout << "Compiler: " << BOOST_COMPILER << endl;
	return 0;
}