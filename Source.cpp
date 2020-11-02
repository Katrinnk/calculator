#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, y, d, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << " (+) - 1; (-) - 2; (*) - 3; (/) - 4" << endl;
	cout << "d=";
	cin >> d;
	if (d == 1)
		y = a + b;
	else
		if (d == 2)
			y = a - b;
		else
			if (d == 3)
				y = a * b;
			else
				if (d == 4)
					y = a / b;
				else
					cout << "eror";
	cout << "y=" << y<<endl;
	cout << " do you want to perfom more actions? ('yes' - 1,  'no' - 2)" <<endl;
	    cout << "c=";
	    cin >> c;
	while (c == 1)
	{
		
		cout << " (+) - 1; (-) - 2; (*) - 3; (/) - 4"<<endl ;
		cout << "d=";
		cin >> d;
		if (d == 1)
			y = a + b;
		else
			if (d == 2)
				y = a - b;
			else
				if (d == 3)
					y = a * b;
				else
					if (d == 4)
						y = a / b;
					else
						cout << "eror";
		cout << "y=" << y<<endl;
		cout << " do you want to perfom more actions? ('yes' - 1,  'no' - 2)" << endl;
		cout << "c=";
		cin >> c;
	}
		cout << "Goodbye";
	return 0;
}


