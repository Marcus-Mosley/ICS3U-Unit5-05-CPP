// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program gives the proper format for a Canadian Address

#include <iostream>

std::string address_format(std::string addressee, std::string str_num,
    std::string str_name, std::string city, std::string province,
    std::string postal_code, std::string apprt_num = "") {
    // Gets a users name and prints out their formal name

    std::string full_address;

    if (apprt_num.size() != 0) {
        full_address = addressee + "\n" + apprt_num + "-" + str_num + " ";
        full_address += str_name + "\n" + city + " " + province + " ";
        full_address += postal_code;
    } else {
        full_address = addressee + "\n" + str_num + " " + str_name + "\n";
        full_address += city + " " + province + " " + postal_code;
    }

    return full_address;
}


main() {
    // This function receives input

    std::string addressee;
    std::string apprt_question;
    std::string apprt_num = "";
    std::string str_num;
    std::string str_name;
    std::string city;
    std::string province;
    std::string postal_code;
    std::string full_address;

    // Input
    std::cout << "Enter the name of the addressee: ";
    std::getline(std::cin, addressee);
    std::cout << "Do you have an Apartment Number?: ";
    std::getline(std::cin, apprt_question);
    if (apprt_question == "Y" || apprt_question == "YES") {
        std::cout << "Enter the Apartment Number: ";
        std::getline(std::cin, apprt_num);
    }
    std::cout << "Enter the Street Number: ";
    std::getline(std::cin, str_num);
    std::cout << "Enter the Street Name: ";
    std::getline(std::cin, str_name);
    std::cout << "Enter the City Name: ";
    std::getline(std::cin, city);
    std::cout << "Enter the Province: ";
    std::getline(std::cin, province);
    std::cout << "Enter the Postal Code: ";
    std::getline(std::cin, postal_code);
    std::cout << " " << std::endl;

    // Call Functions
    if (apprt_num != "") {
        full_address = address_format(addressee, str_num, str_name, city,
            province, postal_code, apprt_num);
    } else {
        full_address = address_format(addressee, str_num, str_name, city,
            province, postal_code);
    }
    std::cout << full_address;
}
