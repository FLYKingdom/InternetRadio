#ifndef INTERNETRADIO_LANGUAGE_HPP
#define INTERNETRADIO_LANGUAGE_HPP

#include <map>
#include <string>

namespace inetr {
	class Language {
	public:
		Language();
		Language(std::string identifier, std::string name,
			std::map<std::string, std::string> strings);

		std::string Identifier;
		std::string Name;
		std::string operator[](std::string *str);
		std::string operator[](char *str);

		std::string LocalizeString(std::string str);
		std::string LocalizeStringTokens(std::string str);
	private:
		std::map<std::string, std::string> strings;
	};
}

#endif  // !INTERNETRADIO_LANGUAGE_HPP
