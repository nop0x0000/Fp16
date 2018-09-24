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
/* }}} */

/* includes(user) {{{ */
/* }}} */

/* define macros {{{ */
/* }}} */

/* define function macros {{{ */
/* }}} */

/* typedefs for basic types{{{ */
typedef unsigned short Fp16;
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

