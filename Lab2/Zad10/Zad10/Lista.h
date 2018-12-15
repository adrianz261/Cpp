#pragma once
#include <iostream>
#include <string>

class Lista
{
public:
	std::string imie;
	std::string nazwisko;
	unsigned int wiek;

private:
	std::unique_ptr<Lista> nextElement;

public:
	Lista(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek);
	void addElement(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek);

};