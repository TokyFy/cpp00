#include "PhoneBook.hpp"
#include "utils.hpp"

void home(PhoneBook &contacts);

void add(PhoneBook &contacts) {
    std::cout << ITALIC GRAY UNDERLINE "\n                CONTACT DETAILS               \n" << RESET<< std::endl;
    Contact contact;
    contact.fill_contact();
    contacts.add_contact(contact);
    std::cout << std::endl;
    home(contacts);
}

bool isalldigit(std::string str)
{
    for (char a : str) {
        if(!std::isdigit(a))
            return false;
    }
    return true;
}

void search(PhoneBook &contacts) {
    std::string index = "-1";
    int i = 0;
    std::cout << std::endl;
    std::cout << ITALIC GRAY UNDERLINE "                     SEARCH                   \n" << RESET << std::endl;
    contacts.print_contacts();

    while(42)
    {
        get_input("Index ", index);
        if (std::cin.eof())
            return;
        if(isalldigit(index))
            break;
        std::cout << ITALIC GRAY << "Index should be a number" << std::endl;
    }
    i = std::stoi(index);
    if (contacts.get_size() == 0 || i > contacts.get_size() - 1 || i < 0)
        std::cout << ITALIC GRAY << "Contact Not fount\n" << std::endl;
    else
        contacts.get_contact(i).print_contact();
    home(contacts);
}

void home(PhoneBook &contacts) {
    std::string command;

    while (true) {
        get_input("COMMANDS", command);
        if (std::cin.eof() || command == "EXIT")
            return;
        if (command == "ADD" || command == "EXIT" || command == "SEARCH")
            break;
        std::cout << ITALIC GRAY << "Commands should be [ ADD | SEARCH | EXIT ]" << std::endl;
    }
    if (command == "ADD") {
        add(contacts);
    } else if (command == "SEARCH")
        search(contacts);
}

int main() {
    std::cout << ITALIC GRAY UNDERLINE "                   PHONEBOOK                  \n" << RESET << std::endl;
    PhoneBook clients;
    home(clients);
}
