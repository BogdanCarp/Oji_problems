#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void solve();
void write();

int main()
{
	ifstream In("date.in");

	int tip_intrebare;
	int ordin, pozitie;

	vector < int > Perm_data;

	while (!In.eof())
	{
		In >> tip_intrebare;

		if (tip_intrebare == 1)
		{
			In >> ordin >> pozitie;

			solve1(ordin, pozitie);
		}

		else
		{
			In >> ordin;

			Perm_data.resize(ordin * 2);

			for (int i = 0; i < ordin * 2; i++)
			{
				In >> Perm_data[i];
			}

			solve2(Perm_data, ordin);
		}
	}

	return 0;
}

void solve1(int ordin, int pozitie)
{

}

void solve2(vector < int > perm, int ordin)
{

}