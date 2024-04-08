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
			cout << "������: " << i << endl;
		}
	}
	else {
		for (int i = floor; i >= target_floor; i--) {
			cout << "������: " << i << endl;
		}
	}
}

int main() {
	Elevator a(1), b(8); // ���������� 2�� ����, a�� 1����, b�� 8���� ����
	a.Button(6); // 6�� ��ư ������ ������ư ������ ���������� 6������ �̵�
	a.CloseDoor(); // ���� �̵��� ���� ���� �� ���
	cout << endl;
	b.Button(3); // 3�� ��ư ������ ������ư ������ ���������� 3������ �̵�
	b.CloseDoor(); // ���� �̵��� ���� ���� �� ���
	return 0;
}

