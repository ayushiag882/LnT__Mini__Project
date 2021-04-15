#include "unity.h"
#include "header.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Student Management"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}


void test_DISPLAY(){
  student h = {25, "Ayushi", "3423423", 90.4};
  TEST_ASSERT_EQUAL(SUCCESS,display(&h));
}


void test_INSERT(){
  student h = {25, "Ayushi", "3423423", 90.4};
  TEST_ASSERT_EQUAL(SUCCESS,insert(&h));
}

void test_DELETE(){
  student h = {25, "Ayushi", "3423423", 90.4};
  TEST_ASSERT_EQUAL(SUCCESS,Delete(&h));
}
    


int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_DISPLAY);
    
    RUN_TEST(test_INSERT);

    RUN_TEST(test_DELETE);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}
