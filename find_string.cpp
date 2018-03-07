#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> result;

	int input_N = 0;
	cin >> input_N;

	string *S = new string[input_N];

	for (int i = 0; i < input_N; i++)
	{
		cin >> S[i];
	}

	int test_N = 0;
	cin >> test_N;

	string *Q = new string[test_N];

	for (int i = 0; i < test_N; i++)
	{
		cin >> Q[i];
	}

	int input_size = input_N;
	int test_size = test_N;

	bool exist_flag = true;

	for (int i = 0; i < test_size; i++)
	{
		for (int j = 0; j < input_size; j++)
		{
			if (Q[i].length() < S[j].length())
				continue;

			for (int k = 0; k < Q[i].length() - S[j].length() + 1; k++)
			{
				if (S[j] == Q[i].substr(k, S[j].length()))
				{
					result.push_back("YES");
					exist_flag = false;
					break;
				}
			}
		}
		if (exist_flag)
		{
			result.push_back("NO");
		}
		exist_flag = true;
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}

	return 0;
}