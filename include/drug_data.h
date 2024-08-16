// drug_data.h
#ifndef DRUG_DATA_H
#define DRUG_DATA_H

#include <string>

struct hill_data {
    double hill[14];  // Fixed size array for 14 parameters
};

struct herg_data {
    double herg[6];   // Fixed size array for 6 parameters
};

hill_data load_hill(const char* filename);
herg_data load_herg(const char* filename);

#endif // DRUG_DATA_H