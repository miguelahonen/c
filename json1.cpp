#include "json/json.h"
#include "json/value.h"
#include "jsoncpp.cpp"
#include <iostream>
#include <fstream>
using namespace std;

Json::Value people;

int main(int argc, char* argv[]) {
	string fileName = argv[1];
	cout << "Using a file: " << fileName << endl;
	std::ifstream people_file(fileName, std::ifstream::binary);
	people_file >> people;
/*
	cout << "Name: " << people["1"]["name"] << endl;
	cout << "Age: " << people["1"]["age"] << endl;
	cout << "Profession: " << people["1"]["profession"] << endl;

	cout << "Name: " << people["2"]["name"] << endl;
	cout << "Age: " << people["2"]["age"] << endl;
	cout << "Profession: " << people["2"]["profession"] << endl;
	//cout << people["profession"];
*/

	for (int i = 1; i <= people.size(); i++) {
		cout << std::to_string(i) << ":" << endl;
		Json::Value::Members member = people[std::to_string(i)].getMemberNames();
		for (Json::Value::Members::iterator iter = member.begin(); iter != member.end(); ++iter) {
       	 		cout << *iter << " : " << people[std::to_string(i)][*iter] << endl;
    		}	
    	}
	return 0;
}


/*
https://stackoverflow.com/questions/3202136/using-g-to-compile-multiple-cpp-and-h-files

Amalgamating header...
Writing amalgamated header to 'dist/json/json.h'
Amalgamating forward header...
Writing amalgamated forward header to 'dist/json/json-forwards.h'
Amalgamating source...
Writing amalgamated source to 'dist/jsoncpp.cpp'
Source successfully amalgamated

https://stackoverflow.com/questions/43007108/error-while-parsing-json-from-a-file-in-c-using-jsoncpp-library
*/
