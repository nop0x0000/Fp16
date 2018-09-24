#include "Fp16BuildTime.h"

Fp16BuildTime::Fp16BuildTime()
: dateTime(__DATE__ " " __TIME__)
{
}

Fp16BuildTime::~Fp16BuildTime()
{
}

const char* Fp16BuildTime::GetDateTime()
{
    return dateTime;
}

