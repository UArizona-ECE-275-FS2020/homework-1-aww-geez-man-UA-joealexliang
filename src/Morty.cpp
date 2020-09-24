/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

namespace C137 {

	void Morty(int start, int stop) {
		std::cout << "Morty C137 says:\n";
		for (int i = start; i <= stop; i++) {
			if (i % 15 == 0) {
				std::cout << i << ": Aww Geez Man\n";
			}
			else if (i % 3 == 0) {
				std::cout << i << ": Aww\n";
			}
			else if (i % 5 == 0) {
				std::cout << i << ": Geez\n";
			}
			else {
				std::cout << i << ": \n";
			}
		}
	}

	void Morty(int start, int stop, int step) {
		std::cout << "Morty C137 says:\n";
		for (int i = start; i <= stop; i = i + step) {
			if (i % 15 == 0) {
				std::cout << i << ": Aww Geez Man\n";
			}
			else if (i % 3 == 0) {
				std::cout << i << ": Aww\n";
			}
			else if (i % 5 == 0) {
				std::cout << i << ": Geez\n";
			}
			else {
				std::cout << i << ": \n";
			}
		}
	}

}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 

namespace Z286 {

	void Morty(int start, int stop) {
		std::cout << "Morty Z286 says:\n";
		for (int i = start; i <= stop; i++) {
			if (i % 15 == 0) {
				std::cout << i << ": naM zeeG wwA\n";
			}
			else if (i % 3 == 0) {
				std::cout << i << ": wwA\n";
			}
			else if (i % 5 == 0) {
				std::cout << i << ": zeeG\n";
			}
			else {
				std::cout << i << ": \n";
			}
		}
	}

	void Morty(int start, int stop, int step) {
		std::cout << "Morty Z286 says:\n";
		for (int i = start; i <= stop; i = i + step) {
			if (i % 15 == 0) {
				std::cout << i << ": naM zeeG wwA\n";
			}
			else if (i % 3 == 0) {
				std::cout << i << ": wwA\n";
			}
			else if (i % 5 == 0) {
				std::cout << i << ": zeeG\n";
			}
			else {
				std::cout << i << ": \n";
			}
		}
	}

}
