#include "HashMap.h"

int main()
{
	HashMap<std::string, int> hashMap(10);
	int int1 = 1, int2 = 2, int3 = 3;
	std::string key1 = "key1", key2 = "key2", key3 = "key3", key4 = "key4";

	try { hashMap.Put(key1, int1); }
	catch (const KeyExists)
	{
		cout << "Key Exists\n";
	}
	try { hashMap.Put(key2, int2); }
	catch (const KeyExists)
	{
		cout << "Key Exists\n";
	}

	try { hashMap.Put(key3, int3); }
	catch (const KeyExists)
	{
		cout << "Key Exists\n";
	}

	try { std::cout << hashMap[key1] << std::endl; }
	catch (const InvalidKey)
	{
		cout << "Invalid Key\n";
	}
	try { std::cout << hashMap[key2] << std::endl; }
	catch (const InvalidKey)
	{
		cout << "Invalid Key\n";
	}
	try { std::cout << hashMap[key3] << std::endl; }
	catch (const InvalidKey)
	{
		cout << "Invalid Key\n";
	}
	try { std::cout << hashMap[key4] << std::endl; }
	catch (const InvalidKey& e)
	{
		cout << "Invalid Key\n";
	}


}