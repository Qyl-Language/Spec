#include "runner.hpp"
#include <iostream>
#include <fstream>

int main() {
	Generator gen = Generator("VM/build/test.qyl");

	gen.WriteHeader();
	gen.Close();

	Runner run = Runner("VM/build/test.qyl");

	std::cout << run.Functions["Test2"].End;

	return 0;
}