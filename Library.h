namespace Extension
{
	typedef char*(*codLetter)(char);
	typedef char*(*Cod)(char*, int, codLetter);
	const int N = 256;

	char* inputString();
	int inputLenth();

	char* codingWords(char*, int, codLetter);
	char* codingLetter(char);
	char* codingLetter2(char);
	char* changhWord(char*, int, Cod, codLetter);
}