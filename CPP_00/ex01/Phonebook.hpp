 #ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class Phonebook {
	private:
		int			nbContact;
		Contact		_Contact[8];
	public:
		Phonebook(void);
		Contact*			getContact(void);
		std::string				format_string(std::string);
		void 				ft_add(void);
		void 				ft_search(void);
};
#endif