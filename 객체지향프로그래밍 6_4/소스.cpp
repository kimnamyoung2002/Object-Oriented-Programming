#include <iostream>

using namespace std;

class Elevator {
private:
	int floor;
	int target_floor;

public:
	Elevator(int b) : floor(b), target_floor(-1) {};
	void Button(int a);
	void CloseDoor();
};

void Elevator::Button(int a1) {
	target_floor = a1;
}

void Elevator::CloseDoor() {
	if (floor < target_floor) {
		for (int i = floor; i <= target_floor; i++) {
			cout << "ÇöÀçÃþ: " << i << endl;
		}
	}
	else {
		for (int i = floor; i >= target_floor; i--) {
			cout << "ÇöÀçÃþ: " << i << endl;
		}
	}
}

int main() {
	Elevator a(1), b(8); // ¿¤¸®º£ÀÌÅÍ 2°³ »ý¼º, a´Â 1Ãþ¿¡, b´Â 8Ãþ¿¡ Á¸Àç
	a.Button(6); // 6Ãþ ¹öÆ° ´©¸£°í ´ÝÈû¹öÆ° ´©¸£¸é ÇöÀçÃþ¿¡¼­ 6ÃþÀ¸·Î ÀÌµ¿
	a.CloseDoor(); // ÇÑÃþ ÀÌµ¿½Ã ¸¶´Ù ÇöÀç Ãþ Ãâ·Â
	cout << endl;
	b.Button(3); // 3Ãþ ¹öÆ° ´©¸£°í ´ÝÈû¹öÆ° ´©¸£¸é ÇöÀçÃþ¿¡¼­ 3ÃþÀ¸·Î ÀÌµ¿
	b.CloseDoor(); // ÇÑÃþ ÀÌµ¿½Ã ¸¶´Ù ÇöÀç Ãþ Ãâ·Â
	return 0;
}

