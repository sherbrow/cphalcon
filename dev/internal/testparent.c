
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

PHP_METHOD(Phalcon_Internal_TestParent, mp1){


	RETURN_STRING("mp1", 1);
}

PHP_METHOD(Phalcon_Internal_TestParent, mp2){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	phalcon_update_property_long(this_ptr, "_pp0", strlen("_pp0"), 0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_TestParent, mp7){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_pp0", sizeof("_pp0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_TestParent, smp1){


	RETURN_STRING("parent-protected", 1);
}

PHP_METHOD(Phalcon_Internal_TestParent, smp3){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_TestParent, smp6){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zzzz", &v0, &v1, &v2, &v3) == FAILURE) {
		RETURN_NULL();
	}

	if (!phalcon_is_smaller_strict_long(v1, 10)) {
		PHALCON_ALLOC_ZVAL(r0);
		mul_function(r0, v2, v3 TSRMLS_CC);
		PHALCON_RETURN_CTOR(r0);
	} else {
		if (phalcon_is_smaller_strict_long(v2, 30)) {
			PHALCON_ALLOC_ZVAL(r1);
			mul_function(r1, v1, v3 TSRMLS_CC);
			PHALCON_RETURN_CTOR(r1);
		} else {
			PHALCON_ALLOC_ZVAL(r2);
			Z_ADDREF_P(v1);
			p0[0] = v1;
			Z_ADDREF_P(v2);
			p0[1] = v2;
			PHALCON_CALL_METHOD_PARAMS(r2, v0, "mp7", 2, p0, PHALCON_CALL_DEFAULT);
			RETURN_ZVAL(r2, 1, 0);
		}
	}
	RETURN_NULL();
}

