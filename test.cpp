#include "Vector.h"

void Test1()
{
	vector<int> first;
	vector<int> second(4, 100);
	vector<int> third(second.begin(), second.end());  //��������ʼ��
	vector<int> fourth(third);
	for (size_t i = 0; i < first.size(); i++)
	{
		cout << first[i] << endl;
	}
	for (const auto& x : second)
	{
		cout << x << " ";
	}
	cout << endl;
	vector<int>::iterator it = third.begin();
	while (it != third.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
void Test2()
{
	vector<string> s1(26);
	char arr[27] = {0};
	for (size_t i = 0; i < 26; i++)
	{
		//s1[i] = 'a'+i;
		arr[i] = 'A' + i;
		Sleep(100);
		cout << arr << endl;
	}
	cout << endl;

	vector<string>::reverse_iterator rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << (*rit).c_str() << endl;
		++rit;
	}
}
void Test3()
{
	size_t sz;
	vector<int> foo;
	sz = foo.capacity();
	for (int i = 0; i < 100; i++)
	{
		foo.push_back(i);
		if (sz != foo.capacity())
		{
			sz = foo.capacity();
			cout << sz << endl;
		}
	}
}
void Test4()
{
	vector<int> my;
	for (int i = 1; i < 10; i++)
		my.push_back(i);
	my.resize(5);
	my.resize(8, 100);
	my.resize(12,8);
	for (const auto& x : my)
		cout << x << endl;
}
void Test5()
{
	vector<int> my;
	for (int i = 1; i < 10; i++)
		my.push_back(i);
	for (const auto& x : my)
		cout << x <<" ";
	cout << endl;
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));
	v.pop_back();
	v.swap(my);
	for (const auto& x : my)
		cout << x << " ";
	cout << endl; 
	for (const auto& x : v)
		cout << x << " ";
	cout << endl;
}
void Test6()
{
	int a[] = { 1, 2, 3, 4 ,3};
	vector<int> arr(a, a + sizeof(a) / sizeof(int));
	vector<int>::iterator pos = find(arr.begin(), arr.end(), 3);  //����������,���ص��ǵ�����
	arr.insert(pos, 5);  //�����ǵ�����
	for (const auto& x : arr)
	{
		cout << x << " ";
	}
	cout << endl;
	pos = find(arr.begin(), arr.end(), 3);  //�ҵĶ��ǵ�һ������
	arr.erase(pos);   //�����ǵ�������ɾ֮ǰ��һ��Ҫ����һ�£���ֹ������ʧЧ
	vector<int>::iterator it = arr.begin();
	while (it != arr.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	vector<int> swapv;
	swapv.swap(arr);
	for (size_t i = 0; i < swapv.size(); i++)
	{
		cout << swapv[i] << " ";
	}
	cout << endl;
	for (const auto& x : arr)
	{
		cout << x << " ";
	}
	cout << endl;
}
void Test7()
{
	int a[] = { 1, 2, 3, 5 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));
	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	pos=v.erase(pos);
	cout << *pos << endl;
	//while (pos != v.end())
	//{
	//	cout << *pos << endl;    //ɾ���ˣ��Ͳ��ܷ�����
	//}
	//cout << endl;
	pos = find(v.begin(), v.end(), 30);//������û�ҵ�������NULL
	v.insert(pos,8);
	for (const auto& x : v)
	{
		cout << x << " ";
	}
	cout << endl;
}
void Test8()
{
	vector<int> my;
	for (int i = 1; i < 10; i++)
		my.push_back(i);
	cout << "size: "<<my.size() << endl;   //9
	cout << "capacity: "<<my.capacity() << endl;  //9
	vector<int>::iterator it = find(my.begin(),my.end(),5);
	my.insert(it, 100);   //����
	cout << *it << endl;   //�Ƿ�����
	for (const auto& x : my)
	{
		cout << x << " ";
	}
	cout << endl;
	cout << "size: " << my.size() << endl;
	cout << "capacity: " << my.capacity() << endl;
}
void Test9()
{
	int a[] = { 1, 2, 3, 5 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));
	vector<int>::iterator pos = v.begin();
	while (pos != v.end())
	{
		cout << *(v.end() - 1) << " ";
		if (*pos % 2 == 0)
		{
			//���½���һ�£����ص���pos����һ��λ��
			pos = v.erase(pos);   //erase�ᵼ��posʧЧ
			cout << *pos << endl;
		}
		else
		{
			++pos;
		}
	}
}

int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	//Test6();
	Test7();
	//Test8();
	//Test9();
	return 0;
}