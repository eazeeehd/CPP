
//methods
void input_output();
void check(int day, int month);

int _tmain(int argc, _TCHAR* argv[])
{
	system ("cls");
	input_output();
	return 0;
}

void input_output()
{	
	int day, month;

	cout << "What day of the month is it" << endl;
	cin >> day;	
	cout << "What month is it (as a number 1-12)" << endl;
	cin >> month;
	check(day, month);
}

void check(int day, int month)
{
	if ((day == 25) && (month == 12))
	{
		cout << "Merry Christmas!" << endl;
	}
	else
	{
	    cout << "Awwwh No Christmas Today :(" << endl;	
	}
}
