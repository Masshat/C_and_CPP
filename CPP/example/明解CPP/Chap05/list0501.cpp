// �D���T�ӤH�������B�魫�M�~�֤��̤j�Ȩ����

#include <iostream>
using namespace std;

int main()
{
	int height[3];					// ����
	int weight[3];					// �魫
	int age[3];					// �~��

	for (int i = 0; i < 3; i++) {		// Ū�J
		cout << "[" << i + 1 << "] ";
		cout << "�����G";	cin >> height[i];
		cout << "�魫�G";	cin >> weight[i];
		cout << "�~�֡G";	cin >> age[i];
	}

	int max_height = height[0];						// �������̤j��

	if (height[1] > max_height) max_height = height[1];
	if (height[2] > max_height) max_height = height[2];

	int max_weight = weight[0];						// �魫���̤j��

	if (weight[1] > max_weight) max_weight = weight[1];
	if (weight[2] > max_weight) max_weight = weight[2];

	int max_age = age[0];							// �~�֤��̤j��

	if (age[1] > max_age) max_age = age[1];
	if (age[2] > max_age) max_age = age[2];

	cout << "�������̤j�ȬO" << max_height << "�C\n";
	cout << "�魫���̤j�ȬO" << max_weight << "�C\n";
	cout << "�~�֤��̤j�ȬO" << max_age << "�C\n";

	return 0;
}
