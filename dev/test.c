
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2012 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "phalcon.h"

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/require.h"
#include "kernel/object.h"
#include "kernel/debug.h"
#include "kernel/assert.h"
#include "kernel/array.h"

#include "zend_operators.h"
#include "zend_exceptions.h"
#include "zend_interfaces.h"

PHP_METHOD(Phalcon_Test, nice){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *a0 = NULL;
	zval *ac0 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	zval *t0 = NULL;
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_assoc_long(a0, "hello1", 1);
	add_assoc_long(a0, "hello2", 2);
	add_assoc_long(a0, "hello3", 3);
	PHALCON_CPY_WRT(v1, a0);
	FOREACH_KV(v1, ac0, fes11, fee11, ah0, hp0, v3, v2)
		PHALCON_INIT_RESULT(r0);
		phalcon_array_fetch(r0, v1, v3, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_INIT_VARTYPE(t0, IS_LONG);
		ZVAL_LONG(t0, 100);
		if (!r1) {
			PHALCON_ALLOC_ZVAL(r1);
		} else {
			if (Z_REFCOUNT_P(r1) > 1){ 
				PHALCON_SEPARATE(r1);
			}
		}
		add_function(r1, r0, t0 TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r1, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v1);
			phalcon_array_update(v1, v3, copy TSRMLS_CC);
		}
	END_FOREACH(ac0, fes11, fee11, ah0, hp0);
	PHALCON_CALL_FUNC_PARAMS_1_NORETURN("print_r", v1, 0x012);
	RETURN_NULL();
}

