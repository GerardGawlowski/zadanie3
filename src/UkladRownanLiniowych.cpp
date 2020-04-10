#include "../inc/UkladRownanLiniowych.hh"


std::istream& operator >> (std::istream& Strm, UkladRownanLiniowych& UklRown)
{
	Macierz tempm;
	Strm >> tempm;
	UklRown.setMacierz(tempm);
	Wektor temp;
	Strm >> temp;
	UklRown.setWektor(temp);
	return Strm;
}

std::ostream& operator << (std::ostream& Strm, const UkladRownanLiniowych& UklRown)
{
	UkladRownanLiniowych temp;
	temp = UklRown;
	Strm << temp.getMacierz() << temp.getWektor();
	return Strm;
}
