#include "Repo.h"

class Service {
private:
	Repo r;
public:
	Service();
	Cheltuieli* getAll();
	int getSizeOp();
	void AddElemOp(int zi, int suma, char* tip);
	void deleteElemOp(int zi, int suma, char* tip);
	void updateElemOp(int i, int zi, int suma, char* tip);
	~Service();

};