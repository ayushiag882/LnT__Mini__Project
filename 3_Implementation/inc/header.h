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

typedef enum error_t{
	ERROR_NULL_PTR = -2,
    SUCCESS = 0,
    START_EXISTS=1,
    NO_HEAD_EXIST=2,
    INVALID_NAME=4,
    ID_EXISTS=5
}error_t;

struct Student
{
    int rollnumber;
    char name[100];
    char phone[100];
    float percentage;
    struct Student *next;
    
}* head;

/**
 * @brief DELETE RECORD
 * 
 * @param rollnumber 
 * @return error_t 
 */
error_t Delete(int rollnumber);
/**
 * @brief DISPLAY RECORD
 * 
 * @return error_t 
 */
error_t display();
/**
 * @brief INSERT RECORD
 * 
 * @param rollnumber 
 * @param name 
 * @param phone 
 * @param percentage 
 */
error_t insert(int rollnumber, char* name, char* phone, float percentage);
/**
 * @brief SEARCH RECORD
 * 
 * @param rollnumber 
 */
void search(int rollnumber);
/**
 * @brief UPDATE RECORD
 * 
 * @param rollnumber 
 */
void update(int rollnumber);

#endif


