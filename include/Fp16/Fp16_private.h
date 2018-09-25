/**
 * @file
 * TODO: Write file desctiption here.
 *
 * @addtogroup 
 * TODO: Write module desctiption here.
 *
 * @{
 */
#ifndef FP16_PRIVATE_H
#define FP16_PRIVATE_H

#ifdef __cplusplus
extern "C"
{
#endif

/* includes(system) {{{ */
/* }}} */

/* includes(user) {{{ */
#include "Fp16.h"
/* }}} */

/* define macros {{{ */
/* }}} */

/* define function macros {{{ */
/* }}} */

/* typedefs for basic types{{{ */
/* }}} */

/* enum definitions by typedef{{{ */
typedef enum {
    Fp16_Sign_Positive,
    Fp16_Sign_Negative
} Fp16_Sign;
/* }}} */

/* struct / union definitions by typedef{{{ */
/* }}} */

/* extern variable declarations{{{ */
extern Fp16 (*Fp16_SetSign)(Fp16 var, Fp16_Sign sign);
extern Fp16_Sign (*Fp16_GetSign)(Fp16 var);
/* }}} */

/* function prototypes {{{ */
/* }}} */

/* inline functions {{{ */
/* }}} */

#ifdef __cplusplus
}
#endif

#endif /* FP16_PRIVATE_H */
/** @} */

