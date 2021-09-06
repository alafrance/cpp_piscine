#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class Phonebook {
	private:
		Contact		_Contact[8];
	public:
		Phonebook(void);
		Contact*			getContact(void);
		void 				ft_add(void);
		void 				ft_search(void);
};
#endif