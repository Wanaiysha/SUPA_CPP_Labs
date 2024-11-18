//Wan Aishah Assignment
//UOE

#include <fstream>
#include <iostream>
#include <vector>
#include <sstream> 
#include <utility> 
#include "resultant.h"

int main() {
    std::string inputfile = "input2D_float.txt";
    std::ifstream data_file(inputfile);
    std::cout << "File opened successfully." << std::endl;
    std::vector<std::pair<float, float>> data; // To store x, y pairs
    std::string line;
    float magnitude;
    //Check file 
    if (!data_file.is_open()) {
        std::cout << "Error opening file: " << inputfile << std::endl;
        return -1;
    }
     // Skip the first line (header)
    if (!std::getline(data_file, line)) {
        std::cout << "Error reading header or file is empty." << std::endl;
        return -1;
    }

    // Process data lines
    while (std::getline(data_file, line)) {
        std::stringstream line_stream(line);
        std::string x_string, y_string;

        // Split by comma
        if (std::getline(line_stream, x_string, ',') && std::getline(line_stream, y_string, ',')) {
        
                float x = std::stof(x_string); // Convert string to float
                float y = std::stof(y_string);
                data.emplace_back(x, y);   // Add to the vector
             
        } 
    }

    data_file.close();
    // Output the data
    std::cout << "Data read from file:" << std::endl;
    for (const auto& [x_val, y_val] : data) {
        std::cout << "x:y " << x_val << ":" << y_val << std::endl;
    }
    for (const auto& [x_val, y_val] : data) {
        magnitude=resultantVector(x_val,y_val);
        std::cout<< "Resultant="<<magnitude<<std::endl; 
    }
    return 0;
}
