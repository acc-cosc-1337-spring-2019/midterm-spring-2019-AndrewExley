 #include"dna_hamming.h"
 using std:: cout;
 using std:: cin;
int main() 
{
	char userChoice;
	do {
			string string1;
			string string2;
			cout << "Enter the first dna string: " << "\n";
			cin >> string1;
			cout << "Enter the second dna string: " << "\n";
			cin >> string2;

			int distance = get_dna_hamming_distance(string1,string2);
			cout << "Hamming Distance: " << distance << "\n";

			cout << "Continue? ";
			cout << "Enter 'Y' to continue. To exit press another key: ";
			cin>> userChoice;
	} while (userChoice == 'Y' || userChoice == 'y');

		cout << "Program exited";
	return 0;
}