#pragma once
class Process
{
private:
	int pid;
	int ticket;

public:
	Process(int pid, int ticket);
	int get_pid() const;
	void set_pid(int new_pid);
	int get_ticket();
	void set_ticket(int new_ticket);

};

