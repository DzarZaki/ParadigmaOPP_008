#include <iostream>
#include <vector>
using  namespace std;

class dokter;
class asisten {
public: 
	string nama;
	vector<dokter*> daftar_dokter;
};
