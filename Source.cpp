#include <iostream>
#include "Process.h"
#include "Lotto_sched.h"

int main() {
	Lotto_sched scheduler;
	int process_count = 0;
	std::cout << "Enter int for how many processes you want: ";
	std::cin >> process_count;
	for (size_t i = 0; i < process_count; i++) { // initializes vector list and appends all processes
		int ticket = 0;
		std::cout << "Enter in parameters (ticket) for process " << i << ": ";
		std::cin >> ticket;
		std::cout << std::endl;
		Process process(i, ticket); // inits process based off of ticket, pid is the index of the process
		scheduler.add_process(process);
	}

	while (!scheduler.processes.empty()) { // Task schedule iterates until there are no processes left,
		scheduler.select();
	}
}

