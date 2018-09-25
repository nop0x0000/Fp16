/**
 * @file
 * TODO: Write file desctiption here.
 *
 * @addtogroup Fp16
 * TODO: Write module desctiption here.
 *
 * @{
 */
#ifndef FP16_H
#define FP16_H

#ifdef __cplusplus
extern "C"
{
#endif

/* includes(system) {{{ */
#include <limits.h>
/* }}} */

/* includes(user) {{{ */
/* }}} */

/* define macros {{{ */
/* }}} */

/* define function macros {{{ */
/* }}} */

/* typedefs for basic types{{{ */
#if UCHAR_MAX >= 0xffff
    typedef unsigned char Fp16;
#elif USHRT_MAX >= 0xffff
    typedef unsigned short Fp16;
#elif UINT_MAX >= 0xffff
    typedef unsigned int Fp16;
#elif ULONG_MAX >= 0xffff
    typedef unsigned long Fp16;
#else
    #error Not found 16bit type.
#endif
/* }}} */

/* enum definitions by typedef{{{ */
/* }}} */

/* struct / union definitions by typedef{{{ */
/* }}} */

/* extern variable declarations{{{ */
/* }}} */

/* function prototypes {{{ */
void Fp16_Create(void);
void Fp16_Destroy(void);
/* }}} */

/* inline functions {{{ */
/* }}} */

#ifdef __cplusplus
}
#endif

#endif /* FP16_H */
/** @} */

