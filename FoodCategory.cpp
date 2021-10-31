#include"FoodCategory.h"
#include<string>

FoodCategory::FoodCategory()
{

}

FoodCategory::FoodCategory(int IDCate, string NameCate)
    :IDCate(IDCate),NameCate(NameCate)
{

}

FoodCategory::~FoodCategory()
{

}

int FoodCategory::Get_IDCate()
{
    return this->IDCate;
}