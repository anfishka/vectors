#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <algorithm>

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
		
	for (int i = 2; i*i <= n; i++)
	{
        if (n % i == 0)
        {
            return false;
        }
			
	}
	return true;
}

vector<int> getPrimes(vector<int>& nums)
{
	vector<int> primes;
	for (int n : nums)
	{
		if (isPrime(n))
		{
			primes.push_back(n);
		}
	}
	return primes;
}

void sortVector(vector<int>& nums)
{
	sort(nums.rbegin(), nums.rend());
}

vector<int> getUniqueEl(vector<int>vec1, vector<int>& vec2)
{
	vector<int>uniqueEl;
	
	for (int n : vec1)
	{
		if (find(vec2.begin(), vec2.end(), n) == vec2.end())
		{
			uniqueEl.push_back(n);
		}
	}
	for (int n : vec2)
	{
		if (find(vec1.begin(), vec1.end(), n) == vec1.end())
		{
			uniqueEl.push_back(n);
		}
	}
	return uniqueEl;
}

void removeDuplicates(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	nums.erase(unique(nums.begin(), nums.end()), nums.end());
}

vector<string> getStrStarting(vector <string>& strings, string& substring)
{
	vector<string> filteredStr;
	for (string& str : strings)
	{
		if (str.substr(0, substring.length()) == substring)
			{
			filteredStr.push_back(str);
			}
	}
	return filteredStr;
}

vector<int> multiplyVect(vector<int>& vec1, vector<int>& vec2)
{
	vector<int> res;
	for (size_t i = 0; i < vec1.size(); i++)
	{
		res.push_back(vec1[1] * vec2[i]);
	}
	return res;
}

vector<int> getSquareNums(vector<int>& nums)
{
	vector<int> squares;
	for (int n : nums)
	{
		int sqrtNum = sqrt(n);
		if (sqrtNum * sqrtNum == n)
		{
			squares.push_back(n);
		}
	}
	return squares;
}

bool isPalindrome(vector <int>& nums)
{
	vector<int> reversed = nums;
	reverse(reversed.begin(), reversed.end());
	return nums == reversed;
}

void menu()
{
    setlocale(LC_ALL, "");
    int choice;                                                                                                                                                         
                                                                                                                                                                  
    do{
        cout << "\x1b[44m  1111111    222222222222222     333333333333333          444444444  555555555555555555         6666666677777777777777777777     888888888          999999999     \n";
        cout << "1::::::1   2:::::::::::::::22  3:::::::::::::::33       4::::::::4  5::::::::::::::::5        6::::::6 7::::::::::::::::::7   88:::::::::88      99:::::::::99    \n";
        cout << "1:::::::1   2::::::222222:::::2 3::::::33333::::::3     4:::::::::4  5::::::::::::::::5       6::::::6  7::::::::::::::::::7 88:::::::::::::88  99:::::::::::::99 \n";
        cout << "111:::::1   2222222     2:::::2 3333333     3:::::3    4::::44::::4  5:::::555555555555      6::::::6   777777777777:::::::78::::::88888::::::89::::::99999::::::9\n";
        cout << "   1::::1               2:::::2             3:::::3   4::::4 4::::4  5:::::5                6::::::6               7::::::7 8:::::8     8:::::89:::::9     9:::::9\n";
        cout << "   1::::1               2:::::2             3:::::3  4::::4  4::::4  5:::::5               6::::::6               7::::::7  8:::::8     8:::::89:::::9     9:::::9\n";
        cout << "   1::::1            2222::::2      33333333:::::3  4::::4   4::::4  5:::::5555555555     6::::::6               7::::::7    8:::::88888:::::8  9:::::99999::::::9\n";
        cout << "   1::::l       22222::::::22       3:::::::::::3  4::::444444::::4445:::::::::::::::5   6::::::::66666         7::::::7      8:::::::::::::8    99::::::::::::::9\n";
        cout << "   1::::l     22::::::::222         33333333:::::3 4::::::::::::::::4555555555555:::::5 6::::::::::::::66      7::::::7      8:::::88888:::::8     99999::::::::9 \n";
        cout << "   1::::l    2:::::22222                    3:::::34444444444:::::444            5:::::56::::::66666:::::6    7::::::7      8:::::8     8:::::8         9::::::9  \n";
        cout << "   1::::l   2:::::2                         3:::::3          4::::4              5:::::56:::::6     6:::::6  7::::::7       8:::::8     8:::::8        9::::::9   \n";
        cout << "   1::::l   2:::::2                         3:::::3          4::::4  5555555     5:::::56:::::6     6:::::6 7::::::7        8:::::8     8:::::8       9::::::9    \n";
        cout << "111::::::1112:::::2       2222223333333     3:::::3          4::::4  5::::::55555::::::56::::::66666::::::67::::::7         8::::::88888::::::8      9::::::9     \n";
        cout << "1::::::::::12::::::2222222:::::23::::::33333::::::3        44::::::44 55:::::::::::::55  66:::::::::::::667::::::7           88:::::::::::::88      9::::::9      \n";
        cout << "1::::::::::12::::::::::::::::::23:::::::::::::::33         4::::::::4   55:::::::::55      66:::::::::66 7::::::7              88:::::::::88       9::::::9       \n";
        cout << "11111111111122222222222222222222 333333333333333           4444444444     555555555          666666666  77777777                 888888888        99999999        \033[0m\n";
        

        cout << "\x1b[43mМеню:\n" << endl;
        cout << "\t\t1. Функция для получения вектора, содержащего только простые числа\n" << endl;
        cout << "\t\t2. Функция для сортировки вектора в порядке убывания\n" << endl;
        cout << "\t\t3. Функция для получения вектора, содержащего элементы, присутствующие только в одном из векторов\n" << endl;
        cout << "\t\t4. Функция для удаления повторяющихся элементов из вектора\n" << endl;
        cout << "\t\t5. Функция для получения вектора, содержащего только строки, начинающиеся с заданной подстроки\n" << endl;
        cout << "\t\t6. Функция для умножения соответствующих элементов двух векторов\n" << endl;
        cout << "\t\t7. Функция для получения вектора, содержащего только числа, являющиеся квадратами других чисел\n" << endl;
        cout << "\t\t8. Функция для проверки, является ли вектор палиндромом\n" << endl;
        cout << "\t\t9. Выход\n" << endl;

        cout << "\nВыберите, как будет обработан вектор (от 1 до 9): \n";
        cin >> choice;

        switch (choice) {
        case 1: {
            int n;
            cout << "\nВведите размер вектора: \n";
            cin >> n;

            vector<int> nums(n);
            cout << "\nВведите элементы вектора: \n";
            for (int i = 0; i < n; i++) {
                cin >> nums[i];
            }

            vector<int> primes = getPrimes(nums);
            cout << "\nВектор с простыми числами: ";
            for (int prime : primes) {
                cout << prime << " ";
            }
            cout << endl;
            break;
        }
        case 2: {
            int n;
            cout << "\nВведите размер вектора: \n";
            cin >> n;

            vector<int> nums(n);
            cout << "\nВведите элементы вектора: \n";
            for (int i = 0; i < n; i++) {
                cin >> nums[i];
            }

            sortVector(nums);
            cout << "\nОтсортированный вектор: ";
            for (int num : nums) {
                cout << num << " ";
            }
            cout << endl;
            break;
        }
        case 3: {
            int n;
            cout << "\nВведите размер первого вектора: \n";
            cin >> n;

            vector<int> vec1(n);
            cout << "\nВведите элементы первого вектора: \n";
            for (int i = 0; i < n; i++) {
                cin >> vec1[i];
            }

            cout << "\nВведите размер второго вектора: \n";
            cin >> n;

            vector<int> vec2(n);
            cout << "\nВведите элементы второго вектора: \n";
            for (int i = 0; i < n; i++) {
                cin >> vec2[i];
            }

            vector<int> uniqueElements = getUniqueEl(vec1, vec2);
            cout << "\nВектор с уникальными элементами: \n";
            for (int num : uniqueElements) {
                cout << num << " ";
            }
            cout << endl;
            break;
        }
        case 4: {
            int n;
            cout << "\nВведите размер вектора: \n";
            cin >> n;

            vector<int> nums(n);
            cout << "\nВведите элементы вектора: \n";
            for (int i = 0; i < n; i++) {
                cin >> nums[i];
            }

            removeDuplicates(nums);
            cout << "\nОбновленный вектор: ";
            for (int num : nums) {
                cout << num << " ";
            }
            cout << endl;
            break;
        }
        case 5: {
            int n;
            cout << "\nВведите размер вектора строк: \n";
            cin >> n;

            vector<string> strings(n);
            cout << "\nВведите строки: \n";
            for (int i = 0; i < n; i++) {
                cin >> strings[i];
            }

            string substring;
            cout << "\nВведите подстроку: \n";
            cin >> substring;

            vector<string> filteredStrings = getStrStarting(strings, substring);
            cout << "\nВектор строк, начинающихся с подстроки: ";
            for (const string& str : filteredStrings) {
                cout << str << " ";
            }
            cout << endl;
            break;
        }
        case 6: {
            int n;
            cout << "\nВведите размер векторов: \n";
            cin >> n;

            vector<int> vec1(n);
            cout << "\nВведите элементы первого вектора: \n";
            for (int i = 0; i < n; i++) {
                cin >> vec1[i];
            }

            vector<int> vec2(n);
            cout << "\nВведите элементы второго вектора: \n";
            for (int i = 0; i < n; i++) {
                cin >> vec2[i];
            }

            vector<int> result = multiplyVect(vec1, vec2);
            cout << "\nРезультат умножения: ";
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
            break;
        }
        case 7: {
            int n;
            cout << "\nВведите размер вектора: \n";
            cin >> n;

            vector<int> nums(n);
            cout << "Введите элементы вектора: ";
            for (int i = 0; i < n; i++) {
                cin >> nums[i];
            }

            vector<int> squares = getSquareNums(nums);
            cout << "\nВектор с квадратами чисел: ";
            for (int square : squares) {
                cout << square << " ";
            }
            cout << endl;
            break;
        }
        case 8: {
            int n;
            cout << "\nВведите размер вектора: ";
            cin >> n;

            vector<int> nums(n);
            cout << "\nВведите элементы вектора: ";
            for (int i = 0; i < n; i++) {
                cin >> nums[i];
            }

            bool palindrome = isPalindrome(nums);
            if (palindrome) {
                cout << "\nВектор является палиндромом." << endl;
            }
            else {
                cout << "\nВектор не является палиндромом." << endl;
            }
            break;
        }
        case 9: {
            cout << "\nВыход.\n" << endl;
            return;
            }
        default:
            cout << "\nНеверный номер " << endl;
        }
    }while (choice != 9);
    
   
}

void main() {
    menu();
}