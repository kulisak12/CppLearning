#include "stdafx.h"
#include <iostream>
#include <string>
#include "projectStates.h"

struct Project {
	ProjectState state;
	std::string name;
};

void printInfo(Project* p) {
	if (p->state == UNSTARTED || p->state == STOPPED) {
		std::cout << "I have to work on my " << p->name << std::endl;
	}
	else {
		std::cout << "I do not have to work on my " << p->name << std::endl;
	}
}

int main() {
	Project p1;
	p1.name = "Website";
	p1.state = IN_PROGRESS; // assigning a predefined value

	Project p2;
	p2.name = "Game";
	p2.state = ABANDONDED;

	Project p3;
	p3.name = "Bot";
	p3.state = UNSTARTED;

	printInfo(&p1);
	printInfo(&p2);
	printInfo(&p3);

	// keep the console open
	std::cout << "\nPress enter to exit...";
	std::cin.get();
	return 0;
}

