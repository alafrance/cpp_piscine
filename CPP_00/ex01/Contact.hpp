#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact {
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		int			_phone_number;
		std::string _darkest_secret;
	public:
		Contact(void);
		std::string getFirstname();
		std::string getLastname();
		std::string getDarkest_secret();
		std::string getNickname();
		int 		getPhone_number();
		void 		setFirstname(std::string);
		void 		setLastname(std::string);
		void 		setDarkest_secret(std::string);
		void 		setNickname(std::string);
		void 		setPhone_number(int);
};
#endif