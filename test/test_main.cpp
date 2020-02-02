#include <Arduino.h>
#include <unity.h>

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

void test_receiver_builtin_pin_number(void) {
    TEST_ASSERT_EQUAL(A0, PIN_A0);
    
}

void test_receiver_state_high(void){
    //int otpt = analogRead(receiver);
    TEST_ASSERT_GREATER_THAN(true,50>40);
}

int main(int argc, char **argv)
{
    UNITY_BEGIN();

    //RUN_TEST(test_receiver_builtin_pin_number());

    return UNITY_END();
}


