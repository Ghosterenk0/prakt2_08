#include <iostream>
//zd3
struct Contact {
	char name[255];
	char phone[15];
};

Contact AddContact() {
	Contact contact;
	std::cin >> contact.name;
	std::cin >> contact.phone;
	return contact;
}
void UpdateContactName(Contact contact) {
	std::cout << "Введите новое имя";
	std::cin >> contact.name;
}
void UpdateContactPhone(Contact contact) {
	std::cout << "Введите новый номер";
	std::cin >> contact.phone;
}

void DeleteContact(Contact con) {

}

int main()
{
	Contact con1 = AddContact();
	UpdateContactName(con1);
	UpdateContactPhone(con1);
}
