#include "../unity/unity.h"
#include "../inc/bill_operations.h"

/* Prototypes for all the test functions */
void test_voltage(void);
void test_time(void);
void test_current(void);

void setUp(){}
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_voltage);
  RUN_TEST(test_time);
  RUN_TEST(test_current);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_voltage(void){
    TEST_ASSERT_EQUAL(230, voltage(47.9,4.8));//(z,icos)
    TEST_ASSERT_EQUAL(110, voltage(18,6));//(r,i)
}

void test_time(void){
    TEST_ASSERT_EQUAL(36, time(40));
    TEST_ASSERT_EQUAL(72, time(80));
    TEST_ASSERT_EQUAL(121.5, time(135));
}

void test_current(void){
    TEST_ASSERT_EQUAL(9.44, current(8));
    TEST_ASSERT_EQUAL(7.08, current(6));
    TEST_ASSERT_EQUAL(0.944, current(0.8));

}
