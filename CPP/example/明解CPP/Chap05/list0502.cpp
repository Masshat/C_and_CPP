// �D���T�ӤH�������B�魫�M�~�֤��̤j�Ȩ���� (��ƪ�)

#include <iostream>
using namespace std;

//--- �Ǧ^a, b, c���̤j�� ---//
int max(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main()
{
	int height[3];	              	// ����
	int weight[3];					// �魫
	int age[3];				    	// �~��

	for (int i = 0; i < 3; i++) {		// Ū�J
		cout << "[" << i + 1 << "] ";
		cout << "�����G";	cin >> height[i];
		cout << "�魫�G";	cin >> weight[i];
		cout << "�~�֡G";	cin >> age[i];
	}
    	
	int max_height = max(height[0], height[1], height[2]);	//�������̤j��
	int max_weight = max(weight[0], weight[1], weight[2]);	//�魫���̤j��
	int max_age = max(age[0], age[1], age[2]);				//�~�֤��̤j��

	cout << "�������̤j�ȬO" << max_height << "�C\n";
	cout << "�魫���̤j�ȬO" << max_weight << "�C\n";
	cout << "�~�֤��̤j�ȬO" << max_age << "�C\n";

	return 0;
}
