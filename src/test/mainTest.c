#include <check.h>

START_TEST (test_running) {
    int a = 5;
    ck_assert_int_eq(a, 5);
}

int main (void) {
    return 0;
}
