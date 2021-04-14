#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * @file header.h
 * @author ayushi (ayushiag882@gmail.com)
 * @brief  mini_project
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __HEADER_H__
#define __HEADER_H__
struct Student
{
    int rollnumber;
    char name[100];
    char phone[100];
    float percentage;
    struct Student *next;
    
}* head;

#endif


