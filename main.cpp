#include"cNgay.h"
void main()
{
	cNgay ng1; // ng1 sẽ có giá trị là ngày 1 tháng 1 năm 1
	cNgay ng2(2017, 1); // ng2 sẽ có giá trị là ngày 1 tháng 1 năm 2017
	cNgay ng3(2017, 1, 7); // ng3 sẽ có giá trị là ngày 7 tháng 1 năm 2017
	cin >> ng1;
	cout << ng1;
	
	if (ng1 < ng2)
		cout << "Ngay 1 truoc ngay 2" << endl;
	else
		cout << "Ngay 1 khong truoc ngay 2" << endl;

}
