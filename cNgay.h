#pragma once
#include<iostream>
#include<string>
using namespace std;
class cNgay
{
private:
	int ngay, thang, nam;
public:
	cNgay(int nam = 1, int thang = 1, int ngay = 1);
	friend istream& operator>>(istream& in, cNgay& n);
	friend ostream& operator<<(ostream& out, cNgay& n);
	bool operator<( cNgay& n2) ;

};
