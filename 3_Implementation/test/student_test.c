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
  
  TEST_ASSERT_EQUAL(SUCCESS,display());
}


void test_INSERT(){
     
      TEST_ASSERT_EQUAL(SUCCESS,insert(67, "AYUSHI", "7055031127", 81.3));
}

    


int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_DISPLAY);
    
    RUN_TEST(test_INSERT);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}
