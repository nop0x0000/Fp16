#include "CppUTest/TestHarness.h"
#include "Fp16BuildTime.h"

TEST_GROUP(Fp16BuildTime)
{
  Fp16BuildTime* projectBuildTime;

  void setup()
  {
    projectBuildTime = new Fp16BuildTime();
  }
  void teardown()
  {
    delete projectBuildTime;
  }
};

TEST(Fp16BuildTime, Create)
{
  CHECK(0 != projectBuildTime->GetDateTime());
}

