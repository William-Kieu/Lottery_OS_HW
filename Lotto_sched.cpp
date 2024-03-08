#include "Lotto_sched.h"
#include "Process.h"
#include <vector>
#include <iostream>

Lotto_sched::Lotto_sched() {} 

void Lotto_sched::add_process(Process& process) {
	processes.push_back(process); // adds process to process vector
}

void Lotto_sched::select() {
    int total_tickets = 0; // Initialize ticket number for total ticket sum
    for (Process process : processes) {
        total_tickets += process.get_ticket(); // Sum all tickets in lottery
    }
    int selected_ticket = rand() % total_tickets + 1; // Use rand to generate random number, add 1 since it indexes to 0
    std::cout << "Selected Ticket: " << selected_ticket << std::endl;

    int ticket_count = 0;
    int pid = -1; // Initialize pid to -1 if process is not found

    for (size_t i = 0; i < processes.size(); i++) {
        ticket_count += processes[i].get_ticket(); // adds the ticket of each process until it is greater than or equal to the select ticket, where it won the draw
        if (ticket_count >= selected_ticket) {
            std::cout << "Process with ID:" << processes[i].get_pid() << " has been selected with ticket " << selected_ticket << std::endl;
            std::cout << "Process with ID:" << processes[i].get_pid() << " has finished its task" << std::endl;
            processes.erase(processes.begin() + i); // Remove the selected process from the vector
            break;
        }
    }
}
