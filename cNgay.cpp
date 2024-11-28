#include "cNgay.h"
cNgay::cNgay(int nam,int thang,int ngay):nam(nam),thang(thang),ngay(ngay){}
istream& operator>>(istream& in, cNgay& n) {
	in >> n.nam >> n.thang >> n.ngay;
	return in;
}
ostream& operator<<(ostream& out, cNgay& n) {
	out << "Ngay:" << n.ngay << " Thang:" << n.thang << " Nam:" << n.nam << endl;
	return out;
}
bool cNgay:: operator<( cNgay& n2)  {
	if (nam < n2.nam) {
		return true;
	}
	else if (thang < n2.thang && nam == n2.nam) {
		return true;
	}
	else if (ngay < n2.ngay && thang == n2.thang && nam == n2.nam) {

		return true;

	}
	else {
		return false;
	}

}
