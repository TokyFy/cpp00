#include <iostream>
#include <string>

#include "PhoneBook.hpp"
#include "utils.hpp"

int main() {
    PhoneBook clients;
    Contact client;

    client.fill_contact();
    clients.add_contact(client);
    clients.print_contacts();
}
