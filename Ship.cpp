class Ship {
private:
	string name;
	int size;
public:
	string GetName() {
		return name;
	}
	int GetSize() {
		return size;
	}
	Ship(string rname, int rsize) {
		size = rsize;
		name = rname;
	}

};