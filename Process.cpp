#include "Process.h"

Process::Process(int pid, int ticket) : pid(pid), ticket(ticket) {}

// Getter for pid
int Process::get_pid() const {
    return pid;
}

// Setter for pid: Set the pid of the process
void Process::set_pid(int new_pid) {
    pid = new_pid;
}

// Getter for ticket
int Process::get_ticket() {
    return ticket;
}

// Setter for ticket
void Process::set_ticket(int new_ticket) {
    ticket = new_ticket;
}
