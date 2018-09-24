extern "C"
{
#include "Fp16.h"
#include "Fp16_private.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(Fp16)
{
    void setup()
    {
      Fp16_Create();
    }

    void teardown()
    {
       Fp16_Destroy();
    }
};

TEST(Fp16, SetSign)
{
    Fp16 var = 0xffff;
    var = Fp16_SetSign(var, Fp16_Sign_Positive);
    BITS_EQUAL(0x0000, var, 0x8000);
    var = Fp16_SetSign(var, Fp16_Sign_Negative);
    BITS_EQUAL(0xffff, var, 0x8000);
}

IGNORE_TEST(Fp16, Create)
{
  FAIL("Start here");
}

