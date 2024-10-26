#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unity.h"

int min(int A, int B)
{
    return A < B ? A : B;
}

int solution(int A[], int N)
{
    int sum = 0;
    for(int i = 0; i < N; ++i)
    {
        sum += A[i];
    }

    int cumsum = A[0];
    int curmindiff = abs(A[0] - (sum - A[0]));
    for(int i = 1; i < N - 1; ++i)
    {
        cumsum += A[i];
        int curdif = abs(cumsum - (sum - cumsum));
        curmindiff = min(curdif, curmindiff); 
    }
    return curmindiff;
}



void setUp(void) 
{
    printf("\nUnity Test started.\n");
}

void tearDown(void) 
{
    printf("\nUnity Test ended.\n");
}
void odd_occurrences_in_array(void) 
{
    int A5_1[] = {3, 1, 2, 4, 3};
    TEST_ASSERT_EQUAL_INT( 1, solution(A5_1,5));

    int A2_1[] = {3, 1};
    TEST_ASSERT_EQUAL_INT( 2, solution(A2_1,2));

    int A2_2[] = {1, 3};
    TEST_ASSERT_EQUAL_INT( 2, solution(A2_1,2));

    int A2_3[] = {1, -3};
    TEST_ASSERT_EQUAL_INT( 4, solution(A2_3,2));

}

int main()
{

    UNITY_BEGIN();
    RUN_TEST(odd_occurrences_in_array);
    return UNITY_END();
}
