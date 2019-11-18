// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>


using namespace std;
bool equal(int* a, int* b,int n)
{
	while (n--)
	{
		if (a[n] != b[n])
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		int* q = new int[m + 1];
		int* c = new int[m + 1];
		int* get = new int[m + 1];;
		q[0] = 0;
		c[0] = 0;
		get[0] = 0;
		int  sum = 0, t = 1, flag = 0, p = 0, tt = 0;

		for (int i = 1; i <= m; i++)
		{
			cin >> q[i];
			c[i] = i;
			get[q[i]] = i;
		}
		while (sum < m - 1)
		{
			/*
			cout << "res";
			for (int i = 0; i < m+1; i++)
				cout << q[i] << " ";
			cout << endl;
			cout << "rec";
			for (int i = 0; i < m+1; i++)
				cout << c[i] << " ";
			cout << endl;
			*/
			if (equal(q,c,m+1))
			{
				flag = 1;
				sum = 0x3f3f3f;
			}
			while (get[t] != t&&sum<m-1)
			{
				//cout << "t" << t << " " << "sum+tt" << sum + tt << endl;
				if (t>m||sum + tt >= m - 1)
					break;
				int tmp = q[get[t] - 1];
				//cout << q[get[t]] << endl;
				swap(q[get[t]], q[get[t] - 1]);
				//cout << "tmp" << tmp << endl;
				//cout << "op1" << " " << q[get[t]] << " " << q[get[t] - 1] << endl;
				swap(get[t], get[tmp]);
				//cout << "op2" << " " << get[t] << " " << get[tmp] << endl;
				tt++;
			}
			sum += tt;
			//cout <<"sum"<<sum << endl;;
			tt = 0;
			t++;
		}
		if (flag)
		{
			for (int i = 1; i < m+1; i++)
				cout << i  << " ";
		}
		else
		{
			for (int i = 1; i < m+1; i++)
				cout << q[i] << " ";
		}
		cout << endl;

	}
}
