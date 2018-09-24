#ifndef D_Fp16BuildTime_H
#define D_Fp16BuildTime_H

///////////////////////////////////////////////////////////////////////////////
//
//  Fp16BuildTime is responsible for recording and reporting when
//  this project library was built
//
///////////////////////////////////////////////////////////////////////////////

class Fp16BuildTime
  {
  public:
    explicit Fp16BuildTime();
    virtual ~Fp16BuildTime();
    
    const char* GetDateTime();

  private:
      
    const char* dateTime;

    Fp16BuildTime(const Fp16BuildTime&);
    Fp16BuildTime& operator=(const Fp16BuildTime&);

  };

#endif  // D_Fp16BuildTime_H
