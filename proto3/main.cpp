#include "address_book.pb.h" // include header file generated by protoc compiler
#include "leimao_addressbook.pb.h"
#include "person.pb.h"
#include "person2.pb.h"
#include "phone_type.pb.h"
#include <google/protobuf/util/time_util.h>
#include <iostream>

PERSON::Person example1();

ADDRESS_BOOK::AddressBook example2();

PHONE_TYPE::Person example3();

date::module::Person example4();

LEIMAO_ADDRESSBOOK::AddressBook example5();

int main(int argc, char **argv)
{
    // example1();
    // example2();
    // example3();
    date::module::Person person = example4();
    std::cout << "[ DEBUG ]: \n" << person.DebugString() << std::endl;

    LEIMAO_ADDRESSBOOK::AddressBook addressbook = example5();
    std::cout << "[ DEBUG ]: \n" << addressbook.DebugString() << std::endl;

    google::protobuf::ShutdownProtobufLibrary();

    return EXIT_SUCCESS;
}

PERSON::Person example1()
{
    // PERSON is namespace (package PERSON) defined in .proto file, Person is from message & person1 is variable
    PERSON::Person person01;

    const std::string name = "person01";
    int ID = 1;
    const std::string email = "person01@xyz.com";

    // setting name, ID and email fields in Person message
    person01.set_name(name); // or *person01.mutable_name() = name;
    // person01.set_id(ID);
    // person01.set_email(email); // or *person01.mutable_email() = email;

    // getting name, ID and email fields
    std::cout << "[ INFO ]: \n";
    std::cout << " Name : " << *person01.mutable_name()
              << std::endl; // mutable returns the address, so we need to dereference it
    std::cout << " Email :" << *person01.mutable_email() << ":" << std::endl;
    std::cout << " Id : " << person01.id() << std::endl;

    std::cout << "\n----------------------" << std::endl;

    // printing proto message with DebugString().
    std::cout << "[ DEBUG ]: \n" << person01.DebugString() << std::endl;

    return person01;
}

ADDRESS_BOOK::AddressBook example2()
{
    // ADDRESS_BOOK is namespace (package ADDRESS_BOOK) defined in .proto file, Person  is from message & person1 is
    // variable
    ADDRESS_BOOK::Person person01, person02, person03, person04;

    // person01 info
    const std::string name1 = "person01";
    int ID1 = 1;
    const std::string email1 = "person01@xyz.com";

    // person02 info
    const std::string name2 = "person02";
    int ID2 = 2;
    const std::string email2 = "person02@xyz.com";

    // setting person01 name, ID and email fields in Person message
    person01.set_name(name1); // or *person01.mutable_name() = name1;
    person01.set_id(ID1);
    person01.set_email(email1); // or *person01.mutable_email() = email1;
    // setting person02 name, ID and email fields in Person message
    person02.set_name(name2); // or *person02.mutable_name() = name2;
    person02.set_id(ID2);
    person02.set_email(email2); // or *person02.mutable_email() = email2;

    // Lets create array of AddressBook
    ADDRESS_BOOK::AddressBook address_book;
    address_book.add_people()->CopyFrom(person01); // populate address_book with CopyFrom()
    address_book.add_people()->CopyFrom(person02);

    // You can populate address_book like this
    address_book.add_people()->set_id(100000);
    address_book.mutable_people(address_book.people_size() - 1)->set_name("Do Thu An");

    std::cout << "--------------------------------\n";
    // Accessing the data in address_book
    std::cout << " Person01 Name : " << address_book.people(0).name() << std::endl;
    std::cout << " Person02 Name : " << address_book.people(1).name() << std::endl;
    std::cout << "--------------------------------\n";
    // AddressBook size()
    std::cout << "Address Book Size: " << address_book.people_size() << std::endl;
    std::cout << "\n---------------- Address Book ----------------" << std::endl;

    for (int i = 0; i < address_book.people_size(); ++i)
    {
        std::cout << address_book.mutable_people(i)->DebugString(); // address_book.mutable_people(i)->id();
        std::cout << "........\n";
    }
    return address_book;
}

PHONE_TYPE::Person example3()
{
    PHONE_TYPE::Person person;
    person.set_name("asd");
    person.set_id(99);
    person.set_email("asd@asd.com");
    std::cout << "Tag numer before populating the field phone_type is: " << person.phone_type()
              << std::endl;                    // this prints the tag number
    person.set_phone_type(PHONE_TYPE::MOBILE); // ENUM is defined in Person message
    if (person.IsInitialized())                // IsInitialized() method to check if it person is initialized
    {
        std::cout << "Tag number after populating the field phone_type is: " << person.phone_type() << std::endl;
    }
    std::cout << "--------------------------------\n";
    std::cout << "Person information: \n" << person.DebugString() << std::endl;
    return person;
}

date::module::Person example4()
{
    // date::module:: is namespace (package date::module::) defined in .proto file, Person is from message & person1 is
    // variable
    date::module::Person person01;
    date::module::Date date;
    date.set_day(28);
    date.set_month(6);
    date.set_year(2002);
    *person01.mutable_birthday() = date;
    person01.set_age(20);
    person01.set_id(20010001);
    std::cout << "[ INFO ]: \n" << person01.DebugString() << std::endl;
    return person01;
}

LEIMAO_ADDRESSBOOK::AddressBook example5()
{
    LEIMAO_ADDRESSBOOK::AddressBook address_book;
    LEIMAO_ADDRESSBOOK::Person person01, person02;
    LEIMAO_ADDRESSBOOK::Person::PhoneNumber *phone_number;

    person01.set_name("ANoi");
    person01.set_id(12);
    person01.set_email("anoi@emoi.com");
    phone_number = person01.add_phones();
    phone_number->set_number("0961056125");
    phone_number->set_type(LEIMAO_ADDRESSBOOK::Person::MOBILE);
    phone_number = person01.add_phones();
    phone_number->set_number("0961056125");
    phone_number->set_type(LEIMAO_ADDRESSBOOK::Person::HOME);
    *person01.mutable_last_updated() = google::protobuf::util::TimeUtil::SecondsToTimestamp(time(nullptr));

    person02.set_name("An Do");
    person02.set_id(28);
    person02.set_email("ando@emoi.com");
    phone_number = person02.add_phones();
    phone_number->set_number("0947397728");
    phone_number->set_type(LEIMAO_ADDRESSBOOK::Person::HOME);
    phone_number = person02.add_phones();
    phone_number->set_number("0947397728");
    phone_number->set_type(LEIMAO_ADDRESSBOOK::Person::WORK);
    *person02.mutable_last_updated() = google::protobuf::util::TimeUtil::SecondsToTimestamp(time(nullptr));

    address_book.add_people()->CopyFrom(person01);
    address_book.add_people()->CopyFrom(person02);

    std::cout << "[ INFO ]: \n" << address_book.DebugString() << std::endl;

    return address_book;
}