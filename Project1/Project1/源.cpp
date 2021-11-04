#include <iostream>

#include <vector>

using namespace std;

template <typename Comparable>
void QuickSort(vector<Comparable>& items)
{

	if (items.size() > 1)
	{
		vector<Comparable> smaller; //��ű���ŦԪ��ֵС��Ԫ��
		vector<Comparable> same;  //��ź���ŦԪ��ֵ��ȵ�Ԫ��
		vector<Comparable> larger;  //��ű���ŦԪ��ֵ���Ԫ��

		auto chosenItem = items[items.size() / 2];  //ѡȡ����ŦԪΪ 1 / 2 ��

		for (auto& i : items)
		{
			if (i < chosenItem)
				smaller.push_back(std::move(i));  //������ŦԪ��ֵС��Ԫ�ش���smaller
			else if (chosenItem < i)
				larger.push_back(std::move(i));  //������ŦԪ��ֵ���Ԫ�ش���larger
			else
				same.push_back(std::move(i));  // ������ŦԪ��ֵ��ͬ��Ԫ�ش���same
		}

		QuickSort(smaller);  //�ݹ���� ��smaller��������
		QuickSort(larger);  //�ݹ���� ��larger��������
		
		//������vector��������
		std::move(begin(smaller), end(smaller), begin(items));
		std::move(begin(same), end(same), begin(items) + smaller.size());
		std::move(begin(larger), end(larger), end(items) - larger.size());

	}

}

int main()
{


	return 0;
}