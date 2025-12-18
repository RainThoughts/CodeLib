#ifndef DATE_H
#define DATE_H

class Date
{
	public:
		explicit Date(int month_, int day_, int year_);
		void setMonth(int);
		void setDay(int);
		void setYear(int);
		int getMonth();
		int getDay();
		int getYear();
		void displayDate();
	private:
		int month, day, year;
	protected:
};

#endif
