#include "PhoneBook.hpp"
#include <iostream>
#include "utils.hpp"

void home(PhoneBook &contacts);

void add(PhoneBook &contacts) {
    std::cout << "Fill the contact detail bellow\n";
    Contact contact;
    contact.fill_contact();
    contacts.add_contact(contact);
    home(contacts);
}

void search(PhoneBook &contacts) {
    std::string index = "-1";
    int i = 0;
    std::cout << std::endl;
    contacts.print_contacts();

    get_input("Contact Index to view " , index);
    i = std::stoi(index);
    if (i > contacts.get_size() - 1 || i < 0)
        std::cout << "Contact Not fount" << std::endl;
    else
        contacts.contacts[i].print_contact();
    home(contacts);
}

void home(PhoneBook &contacts) {
    std::string command;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~ PHONEBOOK ~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout  << "\033[38;5;245m"  << "~ Commands :     [ ADD | SEARCH | EXIT ]            " << std::endl << std::endl;

    while (true) {
        get_input("COMMANDS" , command);
        if (std::cin.eof() || command == "EXIT")
            return;
        if (command == "ADD" || command == "EXIT" || command == "SEARCH")
            break;
        std::cout << "Commands should be [ ADD | SEARCH | EXIT ]" << std::endl;
    }
    if (command == "ADD") {
        add(contacts);
    } else if (command == "SEARCH")
        search(contacts);
}

int main() {
    PhoneBook clients;
    home(clients);
}
