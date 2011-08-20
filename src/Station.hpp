#ifndef INTERNETRADIO_STATION_HPP
#define INTERNETRADIO_STATION_HPP

#include <string>

#include <Windows.h>

#define INTERNETRADIO_STATION_IMAGEWIDTH 200
#define INTERNETRADIO_STATION_IMAGEHEIGHT 200

namespace inetr {
	class Station {
	public:
		Station(std::string name, std::string url, std::string imagePath);
		Station(const Station &original);
		~Station();

		Station &operator=(const Station &original);

		std::string Name;
		std::string URL;
		HBITMAP Image;
	private:
		std::string imagePath;
	};
}

#endif // !INTERNETRADIO_STATION_HPP