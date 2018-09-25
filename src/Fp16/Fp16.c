/**
 * @file
 * TODO: Write file desctiption here.
 *
 * @addtogroup Fp16
 * @{
 */

/* includes(system) {{{ */
/* }}} */

/* includes(user) {{{ */
#include "Fp16.h"
#include "Fp16_private.h"
/* }}} */

/* define macros (file scope) {{{ */
/* }}} */

/* define function macros (file scope) {{{ */
/* }}} */

/* typedefs (file scope) {{{ */
/* }}} */

/* enum definitions (file scope) {{{ */
/* }}} */

/* struct / union definitions (file scope) {{{ */
/* }}} */

/* static variables declarations (file scope) {{{ */
/* }}} */

/* static funcsion prototypes {{{ */
static Fp16 SetSign(Fp16 var, Fp16_Sign sign);
static Fp16_Sign GetSign(Fp16 var);
/* }}} */

/* variable declarations {{{ */
Fp16 (*Fp16_SetSign)(Fp16 var, Fp16_Sign sign) = SetSign;
Fp16_Sign (*Fp16_GetSign)(Fp16 var) = GetSign;
/* }}} */

/* functions {{{ */
static Fp16 SetSign(Fp16 var, Fp16_Sign sign)
{
    return (sign == Fp16_Sign_Positive) ? (var & 0x7fff) : (var | 0x8000);
}

static Fp16_Sign GetSign(Fp16 var)
{
    return (var & 0x8000) ? (Fp16_Sign_Negative) : (Fp16_Sign_Positive);
}

void Fp16_Create(void)
{
}

void Fp16_Destroy(void)
{
}
/* }}} */

/** @} */

