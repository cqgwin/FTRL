

#ifndef UTILS_H
#define UTILS_H

#include<string>
#include<stdio.h>
#include<vector>
#include<map>


typedef std::map<int, int> feature_items;

class utils{
public:
    static std::vector<std::string> split(const std::string &s, const std::string & seperator);
    static void libsvm_format_parse(const char* line, feature_items & x, int &y);
    static float calculate_recall(std::vector<int> &predict_y, std::vector<int> &y);
    static float calculate_precision(std::vector<int> &predict_y, std::vector<int> &y);
};

#endif 

