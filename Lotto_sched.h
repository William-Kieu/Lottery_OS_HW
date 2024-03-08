#pragma once
#include <vector>
#include "Process.h"
class Lotto_sched
{
private:
	//std::vector<Process> processes; // vector of processes

public:
	std::vector<Process> processes; // vector of processes
	Lotto_sched(); // constructor
	void add_process(Process& process); // pass by reference to vector
	void select();
};

