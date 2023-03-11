#pragma once
#include <exception>
#include <ostream>
class CustomExceptions :
    public std::exception {};

class InvalidKey :
	public CustomExceptions {};

class KeyExists :
	public CustomExceptions {};