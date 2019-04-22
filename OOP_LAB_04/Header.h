#pragma once
#define N 5

void inclusionSort(int*, int);

class Excursion
{
protected:
	char name[10];
	int day;
	int month;
	int year;
	int duration;
	int price;
public:
	Excursion();
	~Excursion();
	void SetName(const char*);
	void SetDate(int, int, int);
	void SetDuration(int);
	void SetPrice(double);
	char* GetName() { return name; }
	int GetDay() { return day; }
	int GetMonth() { return month; }
	int GetYear() { return year; }
	int GetDuration() { return duration; }
	int GetPrice() { return price; }
};

class PedExcursion :
	public Excursion
{
private:
	char guide[20];
	int fraction;
	int numb;
public:
	PedExcursion();
	~PedExcursion();
	void SetGuide(const char*);
	void SetFraction(double);
	void SetNumb(int);
	char* GetGuide() { return guide; }
	int GetFraction() { return fraction; }
	int GetNumb() { return numb; }
	double Income();
	//double cmp(char*, char*);
};
