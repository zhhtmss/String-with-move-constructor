#ifndef STRING_H
#define STRING_H

class String {
	char* str;
	int length;
	static int objectCount;
public:
	String();
	String(int size);
	String(const char* input);
	String(String&& other);
	~String();

	void input();
	void display();

	static int getObjectCount();
}
#endif // STRING_H
;