#pragma once
#include <iostream>

class Plant
{
private:
	std::string codedName;
	std::string species;
	std::string months;
	std::string digitizedScan;

public:
	Plant();
	Plant(const std::string codedName, const std::string species, const std::string months, const std::string digitizedScan);
	

	std::string toString() const;

	std::string getCodedName() const { return codedName; }
	std::string getSpecies() const { return species; }
	std::string getMonths() const { return months; }
	std::string getScan() const { return digitizedScan; }
	friend std::istream & operator >> (std::istream &is, Plant &plantie);
	friend std::ostream & operator<<(std::ostream & os, const Plant & plantie);
};


bool operator == (const Plant& firstPlant, const Plant& secondPlant);
