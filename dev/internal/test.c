
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

PHP_METHOD(Phalcon_Internal_Test, __construct){

	zval *a0 = NULL, *a1 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	zend_update_property(phalcon_internal_test_class_entry, this_ptr, "_p8", strlen("_p8"), a0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_next_index_long(a1, 1);
	add_next_index_long(a1, 2);
	add_next_index_long(a1, 3);
	zend_update_property(phalcon_internal_test_class_entry, this_ptr, "_p9", strlen("_p9"), a1 TSRMLS_CC);
}

PHP_METHOD(Phalcon_Internal_Test, e1){


	RETURN_LONG(5);
}

PHP_METHOD(Phalcon_Internal_Test, e2){


	RETURN_STRING("5", 1);
}

PHP_METHOD(Phalcon_Internal_Test, e3){

	zval *r0 = NULL;
	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 5);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, -1);
	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, e4){

	zval *v0 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_LONG(v0, 5);
	PHALCON_RETURN_NCTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, e5){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_LONG(v0, 5);
	PHALCON_CPY_WRT(v1, v0);
	PHALCON_CPY_WRT(v2, v1);
	PHALCON_RETURN_NCTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, e6){

	zval *v0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_RETURN_CHECK_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, e7){

	zval *v0 = NULL, *v1 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_CPY_WRT(v1, v0);
	PHALCON_RETURN_CHECK_CTOR(v1);
}

PHP_METHOD(Phalcon_Internal_Test, e9){


	RETURN_STRING("LOL", 1);
}

PHP_METHOD(Phalcon_Internal_Test, e10){


	RETURN_DOUBLE(1.5);
}

PHP_METHOD(Phalcon_Internal_Test, e13){

	zval *v0 = NULL;
	zval *i0 = NULL, *i1 = NULL, *i2 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL, *t5 = NULL, *t6 = NULL;
	zval *t7 = NULL, *t8 = NULL, *t9 = NULL, *t10 = NULL, *t11 = NULL, *t12 = NULL;
	zval *r0 = NULL, *r1 = NULL;

	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT_PARAM(v0, i0);
	phalcon_update_property_long(v0, "uno", strlen("uno"), 1 TSRMLS_CC);
	phalcon_update_property_long(v0, "dos", strlen("dos"), 2 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(i1);
	object_init(i1);
	PHALCON_UPDATE_PROPERTY_CPY(v0, "subA", i1);
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, v0, "subA", sizeof("subA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	phalcon_update_property_long(t0, "uno", strlen("uno"), 1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, v0, "subA", sizeof("subA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	phalcon_update_property_long(t1, "dos", strlen("dos"), 2 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(i2);
	object_init(i2);
	PHALCON_ALLOC_ZVAL(t2);
	phalcon_read_property(t2, v0, "subA", sizeof("subA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_UPDATE_PROPERTY_CPY(t2, "subSubA", i2);
	PHALCON_ALLOC_ZVAL(t3);
	phalcon_read_property(t3, v0, "subA", sizeof("subA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t4);
	phalcon_read_property(t4, t3, "subSubA", sizeof("subSubA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	phalcon_update_property_long(t4, "uno", strlen("uno"), 1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t5);
	phalcon_read_property(t5, v0, "subA", sizeof("subA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t6);
	phalcon_read_property(t6, t5, "subSubA", sizeof("subSubA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	phalcon_update_property_long(t6, "dos", strlen("dos"), 2 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t7);
	phalcon_read_property(t7, v0, "uno", sizeof("uno")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t8);
	phalcon_read_property(t8, v0, "subA", sizeof("subA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t9);
	phalcon_read_property(t9, t8, "uno", sizeof("uno")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, t7, t9 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t10);
	phalcon_read_property(t10, v0, "subA", sizeof("subA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t11);
	phalcon_read_property(t11, t10, "subSubA", sizeof("subSubA")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t12);
	phalcon_read_property(t12, t11, "uno", sizeof("uno")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	mul_function(r1, r0, t12 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r1);
}

PHP_METHOD(Phalcon_Internal_Test, e14){

	zval *v0 = NULL, *v1 = NULL;
	zval *i0 = NULL;
	zval *t0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT(v1, i0);
	PHALCON_UPDATE_PROPERTY_CPY(v1, "val", v0);
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, v1, "val", sizeof("val")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, o1){

	zval *v0 = NULL;
	zval *t0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_SEPARATE_PARAM(v0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_ZVAL(t0, v0, 1, 0);
	increment_function(v0);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, o2){

	zval *v0 = NULL;
	zval *t0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_SEPARATE_PARAM(v0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_ZVAL(t0, v0, 1, 0);
	decrement_function(v0);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, o3){

	zval *v0 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, v0, t0 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o4){

	zval *v0 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v0 TSRMLS_CC);
	PHALCON_CPY_WRT_PARAM(v0, r0);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o5){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o6){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	sub_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o7){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o8){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	div_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o9){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	mod_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o10){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o11){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	sub_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o12){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o13){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	div_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o14){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	mod_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o15){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "10", 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 10);
	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o16){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 10);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_STRING(t1, "5", 1);
	PHALCON_ALLOC_ZVAL(r0);
	sub_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o17){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 5);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_STRING(t1, "7", 1);
	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o18){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "100", 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 10);
	PHALCON_ALLOC_ZVAL(r0);
	div_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o19){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 40);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_STRING(t1, "5", 1);
	PHALCON_ALLOC_ZVAL(r0);
	mod_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, o20){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL, *r6 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_LONG(v1, 150);
	PHALCON_ALLOC_ZVAL(v2);
	ZVAL_LONG(v2, 250);
	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, v1, v2 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 100);
	PHALCON_ALLOC_ZVAL(r1);
	add_function(r1, r0, t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 100);
	PHALCON_ALLOC_ZVAL(r2);
	div_function(r2, r1, t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r3);
	sub_function(r3, r2, v2 TSRMLS_CC);
	PHALCON_CPY_WRT(v1, r3);
	PHALCON_ALLOC_ZVAL(t2);
	ZVAL_LONG(t2, 5);
	PHALCON_ALLOC_ZVAL(r4);
	mul_function(r4, v2, t2 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r5);
	div_function(r5, r4, v0 TSRMLS_CC);
	PHALCON_CPY_WRT(v2, r5);
	PHALCON_ALLOC_ZVAL(r6);
	div_function(r6, v1, v2 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r6);
}

PHP_METHOD(Phalcon_Internal_Test, o21){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_STRING(v0, "memory", 0);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_STRING(v1, "yes", 0);
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CONCAT_LEFT(r0, "no, ", v0);
	PHALCON_CPY_WRT(v2, r0);
	PHALCON_ALLOC_ZVAL(r1);
	PHALCON_CONCAT_LEFT(r1, "leaks, ", v1);
	PHALCON_CPY_WRT(v3, r1);
	PHALCON_ALLOC_ZVAL(r2);
	concat_function(r2, v2, v3 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r3);
	concat_function(r3, r2, v1 TSRMLS_CC);
	PHALCON_CPY_WRT(v1, r3);
	PHALCON_RETURN_CTOR(v1);
}

PHP_METHOD(Phalcon_Internal_Test, o22){

	zval *v0 = NULL, *v1 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL, *r1 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_LONG(v0, 0);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_LONG(v1, 0);
	fs17:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 25);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v1, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe17;
	}
	PHALCON_INIT_RESULT(r1);
	concat_function(r1, v0, v1 TSRMLS_CC);
	PHALCON_CPY_WRT_PARAM(v0, r1);
	PHALCON_SEPARATE(v1);
	increment_function(v1);
	goto fs17;
	fe17:
	r0 = NULL;
	PHALCON_RETURN_CHECK_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, o23){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_LONG(v0, 0);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_LONG(v1, 0);
	fs18:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 25);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v1, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe18;
	}
	PHALCON_INIT_RESULT(r1);
	PHALCON_CONCAT_BOTH(r1,  "[", v1, "]");
	PHALCON_CPY_WRT(v2, r1);
	PHALCON_INIT_RESULT(r2);
	concat_function(r2, v0, v2 TSRMLS_CC);
	PHALCON_CPY_WRT_PARAM(v0, r2);
	PHALCON_INIT_VARTYPE(v2, IS_STRING);
	ZVAL_STRING(v2, "k", 0);
	PHALCON_SEPARATE(v1);
	increment_function(v1);
	goto fs18;
	fe18:
	r0 = NULL;
	PHALCON_RETURN_CHECK_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a0){

	zval *a0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_long(a0, 1);
	add_next_index_long(a0, 2);
	add_next_index_long(a0, 3);
	PHALCON_RETURN_CTOR(a0);
}

PHP_METHOD(Phalcon_Internal_Test, a1){

	zval *a0 = NULL;
	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_NULL(t0);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, t0);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_BOOL(t1, 0);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, t1);
	add_next_index_long(a0, 0);
	add_next_index_string(a0, "whtzup", 1);
	PHALCON_RETURN_CTOR(a0);
}

PHP_METHOD(Phalcon_Internal_Test, a2){

	zval *v0 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "well", 1);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_update_long(v0, 0, t0 TSRMLS_CC);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, a3){

	zval *v0 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "LOL", 1);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_update_long(v0, 0, t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 0);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_update_string(v0, "LOL", strlen("LOL"), t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_string(r0, v0, "LOL", strlen("LOL"), PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, a4){

	zval *v0 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	if (Z_TYPE_P(v0) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_array_fetch_long(t1, v0, 1, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t1) != IS_ARRAY) {
		convert_to_array(t1);
		phalcon_array_update_long(v0, 1, t1 TSRMLS_CC);
		Z_ADDREF_P(t1);
	}
	if (Z_TYPE_P(t1) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t2);
		phalcon_array_fetch_string(t2, t1, "LOL", strlen("LOL"), PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t2) != IS_ARRAY) {
		convert_to_array(t2);
		phalcon_array_update_string(t1, "LOL", strlen("LOL"), t2 TSRMLS_CC);
		Z_ADDREF_P(t2);
	}
	if (Z_TYPE_P(t2) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t3);
		phalcon_array_fetch_long(t3, t2, 5, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t3) != IS_ARRAY) {
		convert_to_array(t3);
		phalcon_array_update_long(t2, 5, t3 TSRMLS_CC);
		Z_ADDREF_P(t3);
	}
	phalcon_array_update_string(t3, "YEAH", strlen("YEAH"), t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_long(r0, v0, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	phalcon_array_fetch_string(r1, r0, "LOL", strlen("LOL"), PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r2);
	phalcon_array_fetch_long(r2, r1, 5, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r3);
	phalcon_array_fetch_string(r3, r2, "YEAH", strlen("YEAH"), PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(r3);
}

PHP_METHOD(Phalcon_Internal_Test, a5){

	zval *v0 = NULL, *v1 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "LOL", 1);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_update_long(v0, 0, t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 0);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_update_string(v0, "LOL", strlen("LOL"), t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	PHALCON_CPY_WRT(v1, a1);
	PHALCON_ALLOC_ZVAL(t2);
	ZVAL_STRING(t2, "LOL", 1);
	PHALCON_SEPARATE(v1);
	phalcon_array_update_string(v1, "LOL", strlen("LOL"), t2 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t3);
	ZVAL_LONG(t3, 0);
	PHALCON_SEPARATE(v1);
	phalcon_array_update_long(v1, 0, t3 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_long(r0, v1, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	phalcon_array_fetch_string(r1, v0, "LOL", strlen("LOL"), PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r2);
	add_function(r2, r0, r1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r2);
}

PHP_METHOD(Phalcon_Internal_Test, a6){

	zval *v0 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL, *r1 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_update_long(v0, 1, a1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	if (Z_TYPE_P(v0) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_array_fetch_long(t1, v0, 1, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t1) != IS_ARRAY) {
		convert_to_array(t1);
		phalcon_array_update_long(v0, 1, t1 TSRMLS_CC);
		Z_ADDREF_P(t1);
	}
	phalcon_array_update_string(t1, "LOL", strlen("LOL"), t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_long(r0, v0, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	phalcon_array_fetch_string(r1, r0, "LOL", strlen("LOL"), PHALCON_NOISY_FETCH TSRMLS_CC);
	zend_print_zval(r1, 0);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, a7){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *a0 = NULL, *a1 = NULL, *a2 = NULL, *a3 = NULL, *a4 = NULL, *a5 = NULL, *a6 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL, *t5 = NULL, *t6 = NULL;
	zval *t7 = NULL, *t8 = NULL, *t9 = NULL, *t10 = NULL, *t11 = NULL, *t12 = NULL, *t13 = NULL;
	zval *t14 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL, *r6 = NULL;
	zval *r7 = NULL, *r8 = NULL, *r9 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "LOL", 1);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_update_long(v0, 0, t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_update_long(v0, 1, a1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	if (Z_TYPE_P(v0) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t2);
		phalcon_array_fetch_long(t2, v0, 1, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t2) != IS_ARRAY) {
		convert_to_array(t2);
		phalcon_array_update_long(v0, 1, t2 TSRMLS_CC);
		Z_ADDREF_P(t2);
	}
	phalcon_array_update_string(t2, "LOL", strlen("LOL"), t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t3);
	ZVAL_LONG(t3, 0);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_update_string(v0, "LOL", strlen("LOL"), t3 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a2);
	array_init(a2);
	PHALCON_CPY_WRT(v1, a2);
	PHALCON_ALLOC_ZVAL(t4);
	ZVAL_STRING(t4, "LOL", 1);
	PHALCON_SEPARATE(v1);
	phalcon_array_update_string(v1, "LOL", strlen("LOL"), t4 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t5);
	ZVAL_LONG(t5, 0);
	PHALCON_SEPARATE(v1);
	phalcon_array_update_long(v1, 0, t5 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t6);
	ZVAL_LONG(t6, 1);
	if (Z_TYPE_P(v1) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t7);
		phalcon_array_fetch_long(t7, v1, 1, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t7) != IS_ARRAY) {
		convert_to_array(t7);
		phalcon_array_update_long(v1, 1, t7 TSRMLS_CC);
		Z_ADDREF_P(t7);
	}
	phalcon_array_update_string(t7, "LOL", strlen("LOL"), t6 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a3);
	array_init(a3);
	PHALCON_CPY_WRT(v2, a3);
	PHALCON_ALLOC_ZVAL(a4);
	array_init(a4);
	PHALCON_SEPARATE(v2);
	phalcon_array_update_long(v2, 0, a4 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a5);
	array_init(a5);
	if (Z_TYPE_P(v2) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t8);
		phalcon_array_fetch_long(t8, v2, 0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t8) != IS_ARRAY) {
		convert_to_array(t8);
		phalcon_array_update_long(v2, 0, t8 TSRMLS_CC);
		Z_ADDREF_P(t8);
	}
	phalcon_array_update_long(t8, 0, a5 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a6);
	array_init(a6);
	if (Z_TYPE_P(v2) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t9);
		phalcon_array_fetch_long(t9, v2, 0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t9) != IS_ARRAY) {
		convert_to_array(t9);
		phalcon_array_update_long(v2, 0, t9 TSRMLS_CC);
		Z_ADDREF_P(t9);
	}
	if (Z_TYPE_P(t9) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t10);
		phalcon_array_fetch_long(t10, t9, 0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t10) != IS_ARRAY) {
		convert_to_array(t10);
		phalcon_array_update_long(t9, 0, t10 TSRMLS_CC);
		Z_ADDREF_P(t10);
	}
	phalcon_array_update_long(t10, 0, a6 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t11);
	ZVAL_LONG(t11, 1);
	if (Z_TYPE_P(v2) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t12);
		phalcon_array_fetch_long(t12, v2, 0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t12) != IS_ARRAY) {
		convert_to_array(t12);
		phalcon_array_update_long(v2, 0, t12 TSRMLS_CC);
		Z_ADDREF_P(t12);
	}
	if (Z_TYPE_P(t12) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t13);
		phalcon_array_fetch_long(t13, t12, 0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t13) != IS_ARRAY) {
		convert_to_array(t13);
		phalcon_array_update_long(t12, 0, t13 TSRMLS_CC);
		Z_ADDREF_P(t13);
	}
	if (Z_TYPE_P(t13) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t14);
		phalcon_array_fetch_long(t14, t13, 0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t14) != IS_ARRAY) {
		convert_to_array(t14);
		phalcon_array_update_long(t13, 0, t14 TSRMLS_CC);
		Z_ADDREF_P(t14);
	}
	phalcon_array_update_string(t14, "LOL", strlen("LOL"), t11 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_long(r0, v1, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	phalcon_array_fetch_string(r1, r0, "LOL", strlen("LOL"), PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r2);
	phalcon_array_fetch_long(r2, v0, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r3);
	phalcon_array_fetch_string(r3, r2, "LOL", strlen("LOL"), PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r4);
	mul_function(r4, r1, r3 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r5);
	phalcon_array_fetch_long(r5, v2, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r6);
	phalcon_array_fetch_long(r6, r5, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r7);
	phalcon_array_fetch_long(r7, r6, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r8);
	phalcon_array_fetch_string(r8, r7, "LOL", strlen("LOL"), PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r9);
	mul_function(r9, r4, r8 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r9);
}

PHP_METHOD(Phalcon_Internal_Test, a10){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
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

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_assoc_long(a0, "hello1", 1);
	add_assoc_long(a0, "hello2", 2);
	add_assoc_long(a0, "hello3", 3);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	FOREACH_KV(v0, ac0, fes19, fee19, ah0, hp0, v2, v1)
		PHALCON_INIT_RESULT(r0);
		phalcon_array_fetch(r0, v0, v2, PHALCON_NOISY_FETCH TSRMLS_CC);
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
			PHALCON_SEPARATE_PARAM(v0);
			phalcon_array_update(v0, v2, copy TSRMLS_CC);
		}
	END_FOREACH(ac0, fes19, fee19, ah0, hp0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a11){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
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

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_long(a0, 1);
	add_next_index_long(a0, 2);
	add_next_index_long(a0, 3);
	add_next_index_long(a0, 4);
	add_next_index_long(a0, 5);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	FOREACH_KV(v0, ac0, fes20, fee20, ah0, hp0, v2, v1)
		PHALCON_INIT_RESULT(r0);
		phalcon_array_fetch(r0, v0, v2, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_INIT_VARTYPE(t0, IS_LONG);
		ZVAL_LONG(t0, 10);
		if (!r1) {
			PHALCON_ALLOC_ZVAL(r1);
		} else {
			if (Z_REFCOUNT_P(r1) > 1){ 
				PHALCON_SEPARATE(r1);
			}
		}
		add_function(r1, v2, t0 TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r0, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE_PARAM(v0);
			phalcon_array_update(v0, r1, copy TSRMLS_CC);
		}
	END_FOREACH(ac0, fes20, fee20, ah0, hp0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a12){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *a0 = NULL;
	zval *ac0 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	zval *t0 = NULL;
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_LONG(v0, 0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_long(a0, 1);
	add_next_index_long(a0, 2);
	add_next_index_long(a0, 3);
	add_next_index_long(a0, 4);
	add_next_index_long(a0, 5);
	PHALCON_CPY_WRT(v1, a0);
	FOREACH_V(v1, ac0, fes21, fee21, ah0, hp0, v2)
		PHALCON_INIT_RESULT(r0);
		phalcon_array_fetch(r0, v1, v0, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_INIT_VARTYPE(t0, IS_LONG);
		ZVAL_LONG(t0, 10);
		if (!r1) {
			PHALCON_ALLOC_ZVAL(r1);
		} else {
			if (Z_REFCOUNT_P(r1) > 1){ 
				PHALCON_SEPARATE(r1);
			}
		}
		add_function(r1, v0, t0 TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r0, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v1);
			phalcon_array_update(v1, r1, copy TSRMLS_CC);
		}
		PHALCON_SEPARATE_PARAM(v0);
		increment_function(v0);
	END_FOREACH(ac0, fes21, fee21, ah0, hp0);
	PHALCON_RETURN_CTOR(v1);
}

PHP_METHOD(Phalcon_Internal_Test, a13){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *ac0 = NULL;
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_next_index_long(a1, 1);
	add_next_index_long(a1, 2);
	add_next_index_long(a1, 3);
	add_next_index_long(a1, 4);
	add_next_index_long(a1, 5);
	PHALCON_CPY_WRT(v1, a1);
	FOREACH_V(v1, ac0, fes22, fee22, ah0, hp0, v2)
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, v2, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE_PARAM(v0);
			phalcon_array_append(v0, copy TSRMLS_CC);
		}
	END_FOREACH(ac0, fes22, fee22, ah0, hp0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a14){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *ac0 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_next_index_long(a1, 1);
	add_next_index_long(a1, 2);
	add_next_index_long(a1, 3);
	add_next_index_long(a1, 4);
	add_next_index_long(a1, 5);
	PHALCON_CPY_WRT(v1, a1);
	FOREACH_KV(v1, ac0, fes23, fee23, ah0, hp0, v3, v2)
		PHALCON_INIT_VARTYPE(t0, IS_LONG);
		ZVAL_LONG(t0, 2);
		if (!r0) {
			PHALCON_ALLOC_ZVAL(r0);
		} else {
			if (Z_REFCOUNT_P(r0) > 1){ 
				PHALCON_SEPARATE(r0);
			}
		}
		mul_function(r0, v3, t0 TSRMLS_CC);
		PHALCON_CPY_WRT(v3, r0);
		if (!r1) {
			PHALCON_ALLOC_ZVAL(r1);
		} else {
			if (Z_REFCOUNT_P(r1) > 1){ 
				PHALCON_SEPARATE(r1);
			}
		}
		add_function(r1, v2, v3 TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r1, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE_PARAM(v0);
			phalcon_array_update(v0, v3, copy TSRMLS_CC);
		}
	END_FOREACH(ac0, fes23, fee23, ah0, hp0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a15){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *ac0 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_next_index_long(a1, 1);
	add_next_index_long(a1, 2);
	add_next_index_long(a1, 3);
	add_next_index_long(a1, 4);
	add_next_index_long(a1, 5);
	PHALCON_CPY_WRT(v1, a1);
	FOREACH_KV(v1, ac0, fes24, fee24, ah0, hp0, v3, v2)
		PHALCON_INIT_RESULT(r0);
		phalcon_array_fetch(r0, v1, v3, PHALCON_NOISY_FETCH TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r0, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE_PARAM(v0);
			phalcon_array_update(v0, v3, copy TSRMLS_CC);
		}
		PHALCON_INIT_VARTYPE(t0, IS_LONG);
		ZVAL_LONG(t0, 100);
		if (!r1) {
			PHALCON_ALLOC_ZVAL(r1);
		} else {
			if (Z_REFCOUNT_P(r1) > 1){ 
				PHALCON_SEPARATE(r1);
			}
		}
		mul_function(r1, v3, t0 TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r1, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v1);
			phalcon_array_update(v1, v3, copy TSRMLS_CC);
		}
		PHALCON_INIT_RESULT(r2);
		phalcon_array_fetch(r2, v0, v3, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_INIT_VARTYPE(t1, IS_LONG);
		ZVAL_LONG(t1, 50);
		if (!r3) {
			PHALCON_ALLOC_ZVAL(r3);
		} else {
			if (Z_REFCOUNT_P(r3) > 1){ 
				PHALCON_SEPARATE(r3);
			}
		}
		mul_function(r3, r2, t1 TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r3, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE_PARAM(v0);
			phalcon_array_update(v0, v3, copy TSRMLS_CC);
		}
	END_FOREACH(ac0, fes24, fee24, ah0, hp0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a16){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, *v5 = NULL;
	zval *a0 = NULL, *a1 = NULL, *a2 = NULL, *a3 = NULL, *a4 = NULL;
	zval *ac0 = NULL, *ac1 = NULL;
	zval *t0 = NULL;
	HashTable *ah0, *ah1;
	HashPosition hp0, hp1;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	PHALCON_ALLOC_ZVAL(a2);
	array_init(a2);
	add_assoc_string(a2, "in", "out", 1);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "hello", a2);
	PHALCON_ALLOC_ZVAL(a3);
	array_init(a3);
	add_assoc_string(a3, "file", "type", 1);
	add_assoc_string(a3, "php", "unix", 1);
	add_assoc_string(a3, "tab", "ins", 1);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "bye", a3);
	PHALCON_ALLOC_ZVAL(a4);
	array_init(a4);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "encoding", a4);
	add_assoc_string(a1, "sucks", "yes", 1);
	PHALCON_CPY_WRT(v1, a1);
	FOREACH_KV(v1, ac0, fes25, fee25, ah0, hp0, v3, v2)
		if (Z_TYPE_P(v2) == IS_ARRAY) { 
			FOREACH_KV(v2, ac1, fes26, fee26, ah1, hp1, v5, v4)
				if (Z_TYPE_P(v0) == IS_ARRAY) {
					PHALCON_INIT_RESULT(t0);
					phalcon_array_fetch(t0, v0, v3, PHALCON_SILENT_FETCH TSRMLS_CC);
				}
				if (Z_TYPE_P(t0) != IS_ARRAY) {
					convert_to_array(t0);
					phalcon_array_update(v0, v3, t0 TSRMLS_CC);
					Z_ADDREF_P(t0);
				}
				PHALCON_ARRAY_UPDATE(t0, v5, v4);
			END_FOREACH(ac1, fes26, fee26, ah1, hp1);
		} else {
			{
				zval *copy;
				ALLOC_ZVAL(copy);
				ZVAL_ZVAL(copy, v2, 1, 0);
				Z_SET_REFCOUNT_P(copy, 1);
				Z_UNSET_ISREF_P(copy);
				PHALCON_SEPARATE_PARAM(v0);
				phalcon_array_update(v0, v3, copy TSRMLS_CC);
			}
		}
	END_FOREACH(ac0, fes25, fee25, ah0, hp0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a17){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL;
	zval *a0 = NULL, *a1 = NULL, *a2 = NULL, *a3 = NULL, *a4 = NULL, *a5 = NULL;
	zval *ac0 = NULL;
	zval *r0 = NULL;
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_assoc_long(a1, "7", 0);
	add_assoc_long(a1, "8", 1);
	add_assoc_long(a1, "9", 2);
	PHALCON_CPY_WRT(v1, a1);
	PHALCON_ALLOC_ZVAL(a2);
	array_init(a2);
	PHALCON_ALLOC_ZVAL(a3);
	array_init(a3);
	add_next_index_string(a3, "hello1", 1);
	PHALCON_SEPARATE(a2);
	add_next_index_zval(a2, a3);
	PHALCON_ALLOC_ZVAL(a4);
	array_init(a4);
	add_next_index_string(a4, "hello2", 1);
	PHALCON_SEPARATE(a2);
	add_assoc_zval(a2, "1", a4);
	PHALCON_ALLOC_ZVAL(a5);
	array_init(a5);
	add_next_index_string(a5, "hello3", 1);
	PHALCON_SEPARATE(a2);
	add_assoc_zval(a2, "2", a5);
	PHALCON_CPY_WRT(v2, a2);
	FOREACH_KV(v1, ac0, fes27, fee27, ah0, hp0, v4, v3)
		PHALCON_INIT_RESULT(r0);
		phalcon_array_fetch(r0, v2, v3, PHALCON_NOISY_FETCH TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r0, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE_PARAM(v0);
			phalcon_array_update(v0, v4, copy TSRMLS_CC);
		}
	END_FOREACH(ac0, fes27, fee27, ah0, hp0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a18){

	zval *v0 = NULL, *v1 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_string(a0, "hello1", 1);
	add_next_index_string(a0, "hello2", 1);
	add_next_index_string(a0, "hello3", 1);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	{
		zval *copy;
		ALLOC_ZVAL(copy);
		ZVAL_ZVAL(copy, v0, 1, 0);
		Z_SET_REFCOUNT_P(copy, 0);
		Z_UNSET_ISREF_P(copy);
		PHALCON_SEPARATE(a1);
		add_next_index_zval(a1, copy);
	}
	PHALCON_CPY_WRT(v1, a1);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "see", 1);
	if (Z_TYPE_P(v1) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_array_fetch_long(t1, v1, 0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t1) != IS_ARRAY) {
		convert_to_array(t1);
		phalcon_array_update_long(v1, 0, t1 TSRMLS_CC);
		Z_ADDREF_P(t1);
	}
	phalcon_array_update_long(t1, 0, t0 TSRMLS_CC);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a19){

	zval *v0 = NULL, *v1 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_string(a0, "hello1", 1);
	add_next_index_string(a0, "hello2", 1);
	add_next_index_string(a0, "hello3", 1);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_BOOL(t0, 0);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, t0);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_NULL(t1);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, t1);
	add_next_index_double(a0, 1.34);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_next_index_string(a1, "lol1", 1);
	add_next_index_string(a1, "lol2", 1);
	add_next_index_string(a1, "lol3", 1);
	add_next_index_string(a1, "lol4", 1);
	add_next_index_long(a1, 1);
	add_next_index_long(a1, 2);
	add_next_index_long(a1, 3);
	PHALCON_CPY_WRT(v1, a1);
	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, a20){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_DOUBLE(v0, 3.45);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_STRING(v1, "6.28", 0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT(v2, a0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "whtzup!", 1);
	PHALCON_SEPARATE(v2);
	phalcon_array_update(v2, v0, t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_STRING(t1, "morelol", 1);
	PHALCON_SEPARATE(v2);
	phalcon_array_update(v2, v1, t1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, a21){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, *v5 = NULL, *v6 = NULL;
	zval *v7 = NULL;
	zval *r0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL, *t5 = NULL, *t6 = NULL;
	zval *t7 = NULL, *t8 = NULL;
	zval *a0 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_NULL(v0);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_BOOL(v1, 0);
	PHALCON_ALLOC_ZVAL(v2);
	ZVAL_BOOL(v2, 1);
	PHALCON_ALLOC_ZVAL(v3);
	ZVAL_LONG(v3, 100);
	PHALCON_ALLOC_ZVAL(v4);
	ZVAL_DOUBLE(v4, 3.45);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 100);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, -1);
	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_CPY_WRT(v5, r0);
	PHALCON_ALLOC_ZVAL(v6);
	ZVAL_STRING(v6, "6.28", 0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT(v7, a0);
	PHALCON_ALLOC_ZVAL(t2);
	ZVAL_STRING(t2, "whtzup!", 1);
	if (Z_TYPE_P(v7) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t3);
		phalcon_array_fetch(t3, v7, v0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t3) != IS_ARRAY) {
		convert_to_array(t3);
		phalcon_array_update(v7, v0, t3 TSRMLS_CC);
		Z_ADDREF_P(t3);
	}
	if (Z_TYPE_P(t3) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t4);
		phalcon_array_fetch(t4, t3, v1, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t4) != IS_ARRAY) {
		convert_to_array(t4);
		phalcon_array_update(t3, v1, t4 TSRMLS_CC);
		Z_ADDREF_P(t4);
	}
	if (Z_TYPE_P(t4) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t5);
		phalcon_array_fetch(t5, t4, v2, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t5) != IS_ARRAY) {
		convert_to_array(t5);
		phalcon_array_update(t4, v2, t5 TSRMLS_CC);
		Z_ADDREF_P(t5);
	}
	if (Z_TYPE_P(t5) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t6);
		phalcon_array_fetch(t6, t5, v3, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t6) != IS_ARRAY) {
		convert_to_array(t6);
		phalcon_array_update(t5, v3, t6 TSRMLS_CC);
		Z_ADDREF_P(t6);
	}
	if (Z_TYPE_P(t6) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t7);
		phalcon_array_fetch(t7, t6, v4, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t7) != IS_ARRAY) {
		convert_to_array(t7);
		phalcon_array_update(t6, v4, t7 TSRMLS_CC);
		Z_ADDREF_P(t7);
	}
	if (Z_TYPE_P(t7) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t8);
		phalcon_array_fetch(t8, t7, v5, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t8) != IS_ARRAY) {
		convert_to_array(t8);
		phalcon_array_update(t7, v5, t8 TSRMLS_CC);
		Z_ADDREF_P(t8);
	}
	phalcon_array_update(t8, v6, t2 TSRMLS_CC);
	PHALCON_RETURN_CTOR(v7);
}

PHP_METHOD(Phalcon_Internal_Test, a22){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *a0 = NULL, *a1 = NULL, *a2 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_string(a0, "222", 1);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_next_index_string(a1, "222", 1);
	add_next_index_string(a1, "kdkdk", 1);
	PHALCON_CPY_WRT(v1, a1);
	PHALCON_ALLOC_ZVAL(a2);
	array_init(a2);
	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_SEPARATE(a2);
	add_next_index_zval(a2, r0);
	PHALCON_ALLOC_ZVAL(r1);
	add_function(r1, v1, v0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r2);
	add_function(r2, r1, v0 TSRMLS_CC);
	PHALCON_SEPARATE(a2);
	add_next_index_zval(a2, r2);
	PHALCON_CPY_WRT(v2, a2);
	PHALCON_RETURN_CTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, a23){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, *v5 = NULL, *v6 = NULL;
	zval *a0 = NULL, *a1 = NULL, *a2 = NULL, *a3 = NULL, *a4 = NULL, *a5 = NULL;
	zval *ac0 = NULL, *ac1 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL;
	zval *c0 = NULL, *c1 = NULL;
	HashTable *ah0, *ah1;
	HashPosition hp0, hp1;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	PHALCON_ALLOC_ZVAL(a2);
	array_init(a2);
	add_assoc_string(a2, "baseuri", "/phalcon/", 1);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "phalcon", a2);
	PHALCON_ALLOC_ZVAL(a3);
	array_init(a3);
	add_assoc_string(a3, "metadata", "memory", 1);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "models", a3);
	PHALCON_ALLOC_ZVAL(a4);
	array_init(a4);
	add_assoc_string(a4, "adapter", "mysql", 1);
	add_assoc_string(a4, "host", "localhost", 1);
	add_assoc_string(a4, "username", "user", 1);
	add_assoc_string(a4, "password", "passwd", 1);
	add_assoc_string(a4, "name", "demo", 1);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "database", a4);
	PHALCON_ALLOC_ZVAL(a5);
	array_init(a5);
	add_assoc_long(a5, "parent.property", 1);
	add_assoc_string(a5, "parent.property2", "yeah", 1);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "test", a5);
	PHALCON_CPY_WRT(v1, a1);
	FOREACH_KV(v1, ac0, fes28, fee28, ah0, hp0, v3, v2)
		if (Z_TYPE_P(v2) == IS_ARRAY) { 
			FOREACH_KV(v2, ac1, fes29, fee29, ah1, hp1, v5, v4)
				if (Z_TYPE_P(v0) == IS_ARRAY) {
					PHALCON_INIT_RESULT(t0);
					phalcon_array_fetch(t0, v0, v3, PHALCON_SILENT_FETCH TSRMLS_CC);
				}
				if (Z_TYPE_P(t0) != IS_ARRAY) {
					convert_to_array(t0);
					phalcon_array_update(v0, v3, t0 TSRMLS_CC);
					Z_ADDREF_P(t0);
				}
				PHALCON_ARRAY_UPDATE(t0, v5, v4);
			END_FOREACH(ac1, fes29, fee29, ah1, hp1);
		} else {
			PHALCON_INIT_RESULT(r0);
			PHALCON_INIT_VARTYPE(c0, IS_STRING);
			ZVAL_STRING(c0, ".", 1);
			PHALCON_CALL_FUNC_PARAMS_2(r0, "strpos", c0, v2, 0x005);
			if (Z_TYPE_P(r0) != IS_BOOL || (Z_TYPE_P(r0) == IS_BOOL && Z_BVAL_P(r0))) {
				PHALCON_INIT_RESULT(r1);
				PHALCON_INIT_VARTYPE(c1, IS_STRING);
				ZVAL_STRING(c1, ".", 1);
				PHALCON_CALL_FUNC_PARAMS_2(r1, "explode", c1, v2, 0x002);
				PHALCON_CPY_WRT(v6, r1);
				PHALCON_INIT_RESULT(r2);
				phalcon_array_fetch_long(r2, v6, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
				if (Z_TYPE_P(v0) == IS_ARRAY) {
					PHALCON_INIT_RESULT(t1);
					phalcon_array_fetch(t1, v0, v3, PHALCON_SILENT_FETCH TSRMLS_CC);
				}
				if (Z_TYPE_P(t1) != IS_ARRAY) {
					convert_to_array(t1);
					phalcon_array_update(v0, v3, t1 TSRMLS_CC);
					Z_ADDREF_P(t1);
				}
				PHALCON_INIT_RESULT(r3);
				phalcon_array_fetch_long(r3, v6, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
				PHALCON_ARRAY_UPDATE(t1, r3, r2);
			} else {
				{
					zval *copy;
					ALLOC_ZVAL(copy);
					ZVAL_ZVAL(copy, v2, 1, 0);
					Z_SET_REFCOUNT_P(copy, 1);
					Z_UNSET_ISREF_P(copy);
					PHALCON_SEPARATE_PARAM(v0);
					phalcon_array_update(v0, v3, copy TSRMLS_CC);
				}
			}
		}
	END_FOREACH(ac0, fes28, fee28, ah0, hp0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, a24){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *a0 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	{
		zval *copy;
		ALLOC_ZVAL(copy);
		ZVAL_ZVAL(copy, v0, 1, 0);
		Z_SET_REFCOUNT_P(copy, 0);
		Z_UNSET_ISREF_P(copy);
		PHALCON_SEPARATE(a0);
		add_next_index_zval(a0, copy);
	}
	PHALCON_CPY_WRT(v1, a0);
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CONCAT_LEFT(r0, "hello, ", v0);
	PHALCON_CPY_WRT(v2, r0);
	PHALCON_RETURN_CTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, a25){

	zval *v0 = NULL, *v1 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_STRING(v0, "h", 0);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_STRING(v1, "k", 0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_assoc_string(a0, "k", "v", 1);
	add_assoc_string(a0, "i", "d", 1);
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	if (Z_TYPE_P(t0) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_array_fetch(t1, t0, v0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t1) != IS_ARRAY) {
		convert_to_array(t1);
		phalcon_array_update(t0, v0, t1 TSRMLS_CC);
		Z_ADDREF_P(t1);
	}
	phalcon_array_update(t1, v1, a0 TSRMLS_CC);
	phalcon_update_property_zval(this_ptr, "_p9", strlen("_p9"), t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t2);
	phalcon_read_property(t2, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t2);
}

PHP_METHOD(Phalcon_Internal_Test, sa0){

	zval *a0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, a0 TSRMLS_CC);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, sa1){

	zval *t0 = NULL;

	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sa2){

	zval *a0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_long(a0, 1);
	add_next_index_long(a0, 2);
	add_next_index_long(a0, 3);
	add_next_index_string(a0, "lol", 1);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, a0 TSRMLS_CC);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, sa3){

	zval *t0 = NULL;

	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sa4){

	zval *a0 = NULL, *a1 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL, *t5 = NULL, *t6 = NULL;
	zval *t7 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, a0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	if (Z_TYPE_P(t0) != IS_ARRAY) {
		convert_to_array(t0);
	}
	phalcon_array_append(t0, a1 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, t0 TSRMLS_CC);
	
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_STRING(t1, "more-loose", 1);
	t2 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	if (Z_TYPE_P(t2) != IS_ARRAY) {
		convert_to_array(t2);
	}
	if (Z_TYPE_P(t2) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t3);
		phalcon_array_fetch_long(t3, t2, 0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t3) != IS_ARRAY) {
		convert_to_array(t3);
		phalcon_array_update_long(t2, 0, t3 TSRMLS_CC);
		Z_ADDREF_P(t3);
	}
	phalcon_array_append(t3, t1 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, t2 TSRMLS_CC);
	
	PHALCON_ALLOC_ZVAL(t4);
	ZVAL_STRING(t4, "yeah, more-loose", 1);
	t5 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	if (Z_TYPE_P(t5) != IS_ARRAY) {
		convert_to_array(t5);
	}
	if (Z_TYPE_P(t5) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t6);
		phalcon_array_fetch_long(t6, t5, 0, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t6) != IS_ARRAY) {
		convert_to_array(t6);
		phalcon_array_update_long(t5, 0, t6 TSRMLS_CC);
		Z_ADDREF_P(t6);
	}
	phalcon_array_update_long(t6, 0, t4 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, t5 TSRMLS_CC);
	
	t7 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t7);
}

PHP_METHOD(Phalcon_Internal_Test, sa5){

	zval *a0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL, *t5 = NULL, *t6 = NULL;
	zval *t7 = NULL, *t8 = NULL, *t9 = NULL, *t10 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, a0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "loose", 1);
	t1 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	if (Z_TYPE_P(t1) != IS_ARRAY) {
		convert_to_array(t1);
	}
	if (Z_TYPE_P(t1) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t2);
		phalcon_array_fetch_long(t2, t1, 1, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t2) != IS_ARRAY) {
		convert_to_array(t2);
		phalcon_array_update_long(t1, 1, t2 TSRMLS_CC);
		Z_ADDREF_P(t2);
	}
	if (Z_TYPE_P(t2) == IS_ARRAY) {
		PHALCON_ALLOC_ZVAL(t3);
		phalcon_array_fetch_long(t3, t2, 2, PHALCON_SILENT_FETCH TSRMLS_CC);
	}
	if (Z_TYPE_P(t3) != IS_ARRAY) {
		convert_to_array(t3);
		phalcon_array_update_long(t2, 2, t3 TSRMLS_CC);
		Z_ADDREF_P(t3);
	}
	phalcon_array_update_long(t3, 3, t0 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, t1 TSRMLS_CC);
	
	t4 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t8);
	ZVAL_LONG(t8, 1);
	PHALCON_ALLOC_ZVAL(t7);
	phalcon_array_fetch(t7, t4, t8, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t9);
	ZVAL_LONG(t9, 2);
	PHALCON_ALLOC_ZVAL(t6);
	phalcon_array_fetch(t6, t7, t9, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t10);
	ZVAL_LONG(t10, 3);
	PHALCON_ALLOC_ZVAL(t5);
	phalcon_array_fetch(t5, t6, t10, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t5);
}

PHP_METHOD(Phalcon_Internal_Test, sa6){

	zval *a0 = NULL, *a1 = NULL;
	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *ac0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, a0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_next_index_long(a1, 1);
	add_next_index_long(a1, 2);
	add_next_index_long(a1, 3);
	add_next_index_long(a1, 4);
	add_next_index_long(a1, 5);
	PHALCON_CPY_WRT_PARAM(v0, a1);
	FOREACH_KV(v0, ac0, fes30, fee30, ah0, hp0, v2, v1)
		PHALCON_INIT_VARTYPE(t0, IS_LONG);
		ZVAL_LONG(t0, 2);
		if (!r0) {
			PHALCON_ALLOC_ZVAL(r0);
		} else {
			if (Z_REFCOUNT_P(r0) > 1){ 
				PHALCON_SEPARATE(r0);
			}
		}
		mul_function(r0, v2, t0 TSRMLS_CC);
		PHALCON_CPY_WRT(v2, r0);
		if (!r1) {
			PHALCON_ALLOC_ZVAL(r1);
		} else {
			if (Z_REFCOUNT_P(r1) > 1){ 
				PHALCON_SEPARATE(r1);
			}
		}
		add_function(r1, v1, v2 TSRMLS_CC);
		t1 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
		if (Z_TYPE_P(t1) != IS_ARRAY) {
			convert_to_array(t1);
		}
		PHALCON_ARRAY_UPDATE(t1, v2, r1);
		zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, t1 TSRMLS_CC);
		
	END_FOREACH(ac0, fes30, fee30, ah0, hp0);
	t2 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t2);
}

PHP_METHOD(Phalcon_Internal_Test, sa7){

	zval *a0 = NULL, *a1 = NULL, *a2 = NULL, *a3 = NULL, *a4 = NULL;
	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL;
	zval *ac0 = NULL, *ac1 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL;
	HashTable *ah0, *ah1;
	HashPosition hp0, hp1;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, a0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	PHALCON_ALLOC_ZVAL(a2);
	array_init(a2);
	add_assoc_string(a2, "in", "out", 1);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "hello", a2);
	PHALCON_ALLOC_ZVAL(a3);
	array_init(a3);
	add_assoc_string(a3, "file", "type", 1);
	add_assoc_string(a3, "php", "unix", 1);
	add_assoc_string(a3, "tab", "ins", 1);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "bye", a3);
	PHALCON_ALLOC_ZVAL(a4);
	array_init(a4);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "encoding", a4);
	add_assoc_string(a1, "sucks", "yes", 1);
	PHALCON_CPY_WRT_PARAM(v0, a1);
	FOREACH_KV(v0, ac0, fes31, fee31, ah0, hp0, v2, v1)
		if (Z_TYPE_P(v1) == IS_ARRAY) { 
			FOREACH_KV(v1, ac1, fes32, fee32, ah1, hp1, v4, v3)
				t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
				if (Z_TYPE_P(t0) != IS_ARRAY) {
					convert_to_array(t0);
				}
				if (Z_TYPE_P(t0) == IS_ARRAY) {
					PHALCON_INIT_RESULT(t1);
					phalcon_array_fetch(t1, t0, v2, PHALCON_SILENT_FETCH TSRMLS_CC);
				}
				if (Z_TYPE_P(t1) != IS_ARRAY) {
					convert_to_array(t1);
					phalcon_array_update(t0, v2, t1 TSRMLS_CC);
					Z_ADDREF_P(t1);
				}
				PHALCON_ARRAY_UPDATE(t1, v4, v3);
				zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, t0 TSRMLS_CC);
				
			END_FOREACH(ac1, fes32, fee32, ah1, hp1);
		} else {
			t2 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
			if (Z_TYPE_P(t2) != IS_ARRAY) {
				convert_to_array(t2);
			}
			PHALCON_ARRAY_UPDATE(t2, v2, v1);
			zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, t2 TSRMLS_CC);
			
		}
	END_FOREACH(ac0, fes31, fee31, ah0, hp0);
	t3 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t3);
}

PHP_METHOD(Phalcon_Internal_Test, c1){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	is_equal_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, c2){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	is_not_equal_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, c3){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_or_equal_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, c4){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_or_equal_function(r0, t1, t0 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, c5){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, t1, t0 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, c6){

	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, c7){

	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	is_equal_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t2);
	ZVAL_LONG(t2, 1);
	PHALCON_ALLOC_ZVAL(t3);
	ZVAL_LONG(t3, 1);
	PHALCON_ALLOC_ZVAL(r1);
	is_smaller_or_equal_function(r1, t2, t3 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r2);
	phalcon_and_function(r2, r0, r1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r2);
}

PHP_METHOD(Phalcon_Internal_Test, c8){

	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r0);
	is_not_equal_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t2);
	ZVAL_LONG(t2, 1);
	PHALCON_ALLOC_ZVAL(t3);
	ZVAL_LONG(t3, 1);
	PHALCON_ALLOC_ZVAL(r1);
	is_smaller_function(r1, t2, t3 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r2);
	phalcon_and_function(r2, r0, r1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r2);
}

PHP_METHOD(Phalcon_Internal_Test, c9){

	zval *r0 = NULL;
	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 0);
	PHALCON_ALLOC_ZVAL(r0);
	boolean_not_function(r0, t0 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, c10){

	zval *r0 = NULL, *r1 = NULL;
	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 1);
	PHALCON_ALLOC_ZVAL(r1);
	is_not_equal_function(r1, t0, t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	boolean_not_function(r0, r1 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, c11){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *r0 = NULL, *r1 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zzz", &v0, &v1, &v2) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	is_equal_function(r0, v1, v2 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	is_equal_function(r1, v0, r0 TSRMLS_CC);
	PHALCON_RETURN_NCTOR(r1);
}

PHP_METHOD(Phalcon_Internal_Test, f1){

	zval *r0 = NULL;
	zval *c0 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(c0);
	ZVAL_STRING(c0, "LOL", 1);
	PHALCON_CALL_FUNC_PARAMS_1(r0, "strlen", c0, 0x01E);
	FREE_ZVAL(c0);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, f2){

	zval *r0 = NULL;
	zval *c0 = NULL, *c1 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(c0);
	ZVAL_STRING(c0, "hello\t", 1);
	PHALCON_ALLOC_ZVAL(c1);
	ZVAL_STRING(c1, "\t", 1);
	PHALCON_CALL_FUNC_PARAMS_2(r0, "rtrim", c0, c1, 0x01F);
	FREE_ZVAL(c0);
	FREE_ZVAL(c1);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, f3){

	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL, NULL };

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(p0[0]);
	ZVAL_STRING(p0[0], "bb", 1);
	PHALCON_ALLOC_ZVAL(p0[1]);
	ZVAL_STRING(p0[1], "xx", 1);
	PHALCON_ALLOC_ZVAL(p0[2]);
	ZVAL_STRING(p0[2], "aabbcc", 1);
	PHALCON_CALL_FUNC_PARAMS(r0, "str_replace", 3, p0, 0x017);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, f4){

	zval *r0 = NULL, *r1 = NULL;
	zval *c0 = NULL, *c1 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(c0);
	ZVAL_STRING(c0, "deux", 1);
	PHALCON_ALLOC_ZVAL(r1);
	PHALCON_ALLOC_ZVAL(c1);
	ZVAL_STRING(c1, "deux", 1);
	PHALCON_CALL_FUNC_PARAMS_1(r1, "strlen", c1, 0x01E);
	FREE_ZVAL(c1);
	PHALCON_CALL_FUNC_PARAMS_2(r0, "str_repeat", c0, r1, 0x020);
	FREE_ZVAL(c0);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, f5){

	zval *v0 = NULL;
	zval *a0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_string(a0, "b", 1);
	add_next_index_string(a0, "c", 1);
	add_next_index_string(a0, "a", 1);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	Z_SET_ISREF_P(v0);
	PHALCON_CALL_FUNC_PARAMS_1_NORETURN("asort", v0, 0x021);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, f6){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL;
	zval *c0 = NULL, *c1 = NULL, *c2 = NULL, *c3 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(c0);
	ZVAL_LONG(c0, 0);
	PHALCON_ALLOC_ZVAL(c1);
	ZVAL_LONG(c1, 100);
	PHALCON_CALL_FUNC_PARAMS_2(r0, "mt_rand", c0, c1, 0x022);
	FREE_ZVAL(c0);
	FREE_ZVAL(c1);
	PHALCON_ALLOC_ZVAL(r1);
	PHALCON_CONCAT_RIGHT(r1, r0, ".txt");
	PHALCON_CPY_WRT_PARAM(v0, r1);
	PHALCON_ALLOC_ZVAL(r2);
	PHALCON_ALLOC_ZVAL(c2);
	ZVAL_STRING(c2, "w", 1);
	PHALCON_CALL_FUNC_PARAMS_2(r2, "fopen", v0, c2, 0x023);
	FREE_ZVAL(c2);
	PHALCON_CPY_WRT_PARAM(v1, r2);
	Z_ADDREF_P(v1);
	PHALCON_ALLOC_ZVAL(c3);
	ZVAL_STRING(c3, "morelol\n", 1);
	PHALCON_CALL_FUNC_PARAMS_2_NORETURN("fwrite", v1, c3, 0x024);
	FREE_ZVAL(c3);
	Z_ADDREF_P(v1);
	PHALCON_CALL_FUNC_PARAMS_1_NORETURN("fclose", v1, 0x025);
	PHALCON_ALLOC_ZVAL(r3);
	PHALCON_CALL_FUNC_PARAMS_1(r3, "file_get_contents", v0, 0x006);
	PHALCON_CPY_WRT_PARAM(v2, r3);
	PHALCON_CALL_FUNC_PARAMS_1_NORETURN("unlink", v0, 0x026);
	PHALCON_RETURN_CHECK_CTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, f7){

	zval *r0 = NULL;
	zval *c0 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(c0);
	ZVAL_DOUBLE(c0, 3.14159);
	PHALCON_CALL_FUNC_PARAMS_1(r0, "sqrt", c0, 0x027);
	FREE_ZVAL(c0);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, f8){

	zval *r0 = NULL;
	zval *a0 = NULL;
	zval *p0[] = { NULL, NULL, NULL };

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_string(a0, ".", 1);
	add_next_index_string(a0, ",", 1);
	add_next_index_string(a0, "-", 1);
	p0[0] = a0;
	PHALCON_ALLOC_ZVAL(p0[1]);
	ZVAL_STRING(p0[1], "&", 1);
	PHALCON_ALLOC_ZVAL(p0[2]);
	ZVAL_STRING(p0[2], "-.,-.,", 1);
	PHALCON_CALL_FUNC_PARAMS(r0, "str_replace", 3, p0, 0x017);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, f9){

	zval *v0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "-1000", 1);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 400);
	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t2);
	ZVAL_BOOL(t2, 0);
	PHALCON_ALLOC_ZVAL(r1);
	mul_function(r1, r0, t2 TSRMLS_CC);
	PHALCON_CPY_WRT_PARAM(v0, r1);
	PHALCON_ALLOC_ZVAL(r2);
	Z_ADDREF_P(v0);
	PHALCON_CALL_FUNC_PARAMS_1(r2, "abs", v0, 0x028);
	RETURN_ZVAL(r2, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, f10){

	zval *v0 = NULL;
	zval *a0 = NULL;
	zval *r0 = NULL, *r1 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_long(a0, 1);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(r1);
	phalcon_array_fetch_long(r1, v0, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
	Z_ADDREF_P(r1);
	PHALCON_CALL_FUNC_PARAMS_1(r0, "is_numeric", r1, 0x029);
	if (zend_is_true(r0)) {
		RETURN_TRUE;
	} else {
		RETURN_FALSE;
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, m1){


	RETURN_STRING("private", 1);
}

PHP_METHOD(Phalcon_Internal_Test, m2){


	RETURN_STRING("protected", 1);
}

PHP_METHOD(Phalcon_Internal_Test, m3){

	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_METHOD(r0, this_ptr, "m1", PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, m4){

	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_METHOD(r0, this_ptr, "m2", PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, m5){

	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_METHOD(r0, this_ptr, "m2", PHALCON_CALL_DEFAULT);
	PHALCON_ALLOC_ZVAL(r1);
	PHALCON_CALL_METHOD(r1, this_ptr, "m1", PHALCON_CALL_DEFAULT);
	PHALCON_ALLOC_ZVAL(r2);
	concat_function(r2, r0, r1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r2);
}

PHP_METHOD(Phalcon_Internal_Test, m6){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, m7){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "m6", 2, p0, PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, m8){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;
	zval *p0[] = { NULL, NULL }, *p1[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "m6", 2, p0, PHALCON_CALL_DEFAULT);
	PHALCON_ALLOC_ZVAL(r1);
	Z_ADDREF_P(v0);
	p1[0] = v0;
	Z_ADDREF_P(v1);
	p1[1] = v1;
	PHALCON_CALL_METHOD_PARAMS(r1, this_ptr, "m6", 2, p1, PHALCON_CALL_DEFAULT);
	PHALCON_ALLOC_ZVAL(r2);
	concat_function(r2, r0, r1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r2);
}

PHP_METHOD(Phalcon_Internal_Test, m9){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, m10){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "m9", 2, p0, PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, m11){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "m10", 2, p0, PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, m12){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(v2);
	ZVAL_LONG(v2, 0);
	PHALCON_ALLOC_ZVAL(v3);
	ZVAL_LONG(v3, 0);
	fs33:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 10);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v3, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe33;
	}
	PHALCON_INIT_RESULT(r1);
	if (!r2) {
		PHALCON_ALLOC_ZVAL(r2);
	} else {
		if (Z_REFCOUNT_P(r2) > 1){ 
			PHALCON_SEPARATE(r2);
		}
	}
	add_function(r2, v3, v0 TSRMLS_CC);
	Z_ADDREF_P(r2);
	p0[0] = r2;
	PHALCON_INIT_VARTYPE(t1, IS_LONG);
	ZVAL_LONG(t1, 1);
	if (!r3) {
		PHALCON_ALLOC_ZVAL(r3);
	} else {
		if (Z_REFCOUNT_P(r3) > 1){ 
			PHALCON_SEPARATE(r3);
		}
	}
	add_function(r3, v3, t1 TSRMLS_CC);
	if (!r4) {
		PHALCON_ALLOC_ZVAL(r4);
	} else {
		if (Z_REFCOUNT_P(r4) > 1){ 
			PHALCON_SEPARATE(r4);
		}
	}
	add_function(r4, v1, r3 TSRMLS_CC);
	Z_ADDREF_P(r4);
	p0[1] = r4;
	PHALCON_CALL_METHOD_PARAMS(r1, this_ptr, "m9", 2, p0, PHALCON_CALL_DEFAULT);
	if (!r5) {
		PHALCON_ALLOC_ZVAL(r5);
	} else {
		if (Z_REFCOUNT_P(r5) > 1){ 
			PHALCON_SEPARATE(r5);
		}
	}
	add_function(r5, v2, r1 TSRMLS_CC);
	PHALCON_CPY_WRT(v2, r5);
	PHALCON_SEPARATE(v3);
	increment_function(v3);
	goto fs33;
	fe33:
	r0 = NULL;
	PHALCON_RETURN_CTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, m13){

	zval *v0 = NULL, *v1 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_LONG(v0, 100);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 10);
	PHALCON_ALLOC_ZVAL(r0);
	mul_function(r0, v1, t0 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, m14){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "m13", 2, p0, PHALCON_CALL_DEFAULT);
	PHALCON_ALLOC_ZVAL(r1);
	mul_function(r1, r0, v0 TSRMLS_CC);
	PHALCON_CPY_WRT(v2, r1);
	PHALCON_RETURN_CTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, m15){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "m13", 2, p0, PHALCON_CALL_DEFAULT);
	PHALCON_CPY_WRT(v2, r0);
	PHALCON_ALLOC_ZVAL(r1);
	mul_function(r1, v2, v0 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r1);
}

PHP_METHOD(Phalcon_Internal_Test, mp3){

	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_METHOD(r0, this_ptr, "mp1", PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, mp4){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "mp2", 2, p0, PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, mp5){

	zval *v0 = NULL;
	zval *i0 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(i0);
	object_init_ex(i0, phalcon_internal_testparent_class_entry);
	PHALCON_CALL_METHOD_NORETURN(i0, "__construct", PHALCON_CALL_CHECK);
	PHALCON_CPY_WRT_PARAM(v0, i0);
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_METHOD(r0, v0, "mp1", PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, mp6){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *i0 = NULL;
	zval *r0 = NULL;
	zval *p1[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(i0);
	object_init_ex(i0, phalcon_internal_testparent_class_entry);
	PHALCON_CALL_METHOD_NORETURN(i0, "__construct", PHALCON_CALL_CHECK);
	PHALCON_CPY_WRT(v2, i0);
	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p1[0] = v0;
	Z_ADDREF_P(v1);
	p1[1] = v1;
	PHALCON_CALL_METHOD_PARAMS(r0, v2, "mp2", 2, p1, PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, sm1){


	RETURN_STRING("private", 1);
}

PHP_METHOD(Phalcon_Internal_Test, sm2){


	RETURN_STRING("protected", 1);
}

PHP_METHOD(Phalcon_Internal_Test, sm3){

	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_SELF(r0, this_ptr, "sm1");
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, sm4){

	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_SELF(r0, this_ptr, "sm2");
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, sm5){

	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_SELF(r0, this_ptr, "sm2");
	PHALCON_ALLOC_ZVAL(r1);
	PHALCON_CALL_SELF(r1, this_ptr, "sm1");
	PHALCON_ALLOC_ZVAL(r2);
	concat_function(r2, r0, r1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r2);
}

PHP_METHOD(Phalcon_Internal_Test, sm6){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, sm7){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	Z_ADDREF_P(v1);
	p0[1] = v1;
	PHALCON_CALL_SELF_PARAMS(r0, this_ptr, "sm6", 2, p0);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, sm8){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r0);
}

PHP_METHOD(Phalcon_Internal_Test, sm9){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(v2);
	ZVAL_LONG(v2, 0);
	PHALCON_ALLOC_ZVAL(v3);
	ZVAL_LONG(v3, 0);
	fs34:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 10);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v3, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe34;
	}
	PHALCON_INIT_RESULT(r1);
	if (!r2) {
		PHALCON_ALLOC_ZVAL(r2);
	} else {
		if (Z_REFCOUNT_P(r2) > 1){ 
			PHALCON_SEPARATE(r2);
		}
	}
	add_function(r2, v3, v0 TSRMLS_CC);
	Z_ADDREF_P(r2);
	p0[0] = r2;
	PHALCON_INIT_VARTYPE(t1, IS_LONG);
	ZVAL_LONG(t1, 1);
	if (!r3) {
		PHALCON_ALLOC_ZVAL(r3);
	} else {
		if (Z_REFCOUNT_P(r3) > 1){ 
			PHALCON_SEPARATE(r3);
		}
	}
	add_function(r3, v3, t1 TSRMLS_CC);
	if (!r4) {
		PHALCON_ALLOC_ZVAL(r4);
	} else {
		if (Z_REFCOUNT_P(r4) > 1){ 
			PHALCON_SEPARATE(r4);
		}
	}
	add_function(r4, v1, r3 TSRMLS_CC);
	Z_ADDREF_P(r4);
	p0[1] = r4;
	PHALCON_CALL_SELF_PARAMS(r1, this_ptr, "sm8", 2, p0);
	if (!r5) {
		PHALCON_ALLOC_ZVAL(r5);
	} else {
		if (Z_REFCOUNT_P(r5) > 1){ 
			PHALCON_SEPARATE(r5);
		}
	}
	add_function(r5, v2, r1 TSRMLS_CC);
	PHALCON_CPY_WRT(v2, r5);
	PHALCON_SEPARATE(v3);
	increment_function(v3);
	goto fs34;
	fe34:
	r0 = NULL;
	PHALCON_RETURN_CTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, sm10){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(v2);
	ZVAL_LONG(v2, 0);
	PHALCON_ALLOC_ZVAL(v3);
	ZVAL_LONG(v3, 0);
	fs35:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 10);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v3, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe35;
	}
	PHALCON_INIT_RESULT(r1);
	if (!r2) {
		PHALCON_ALLOC_ZVAL(r2);
	} else {
		if (Z_REFCOUNT_P(r2) > 1){ 
			PHALCON_SEPARATE(r2);
		}
	}
	add_function(r2, v3, v0 TSRMLS_CC);
	Z_ADDREF_P(r2);
	p0[0] = r2;
	PHALCON_INIT_VARTYPE(t1, IS_LONG);
	ZVAL_LONG(t1, 1);
	if (!r3) {
		PHALCON_ALLOC_ZVAL(r3);
	} else {
		if (Z_REFCOUNT_P(r3) > 1){ 
			PHALCON_SEPARATE(r3);
		}
	}
	add_function(r3, v3, t1 TSRMLS_CC);
	if (!r4) {
		PHALCON_ALLOC_ZVAL(r4);
	} else {
		if (Z_REFCOUNT_P(r4) > 1){ 
			PHALCON_SEPARATE(r4);
		}
	}
	add_function(r4, v1, r3 TSRMLS_CC);
	Z_ADDREF_P(r4);
	p0[1] = r4;
	PHALCON_CALL_STATIC_PARAMS(r1, "phalcon_internal_test", "sm8", 2, p0);
	if (!r5) {
		PHALCON_ALLOC_ZVAL(r5);
	} else {
		if (Z_REFCOUNT_P(r5) > 1){ 
			PHALCON_SEPARATE(r5);
		}
	}
	add_function(r5, v2, r1 TSRMLS_CC);
	PHALCON_CPY_WRT(v2, r5);
	PHALCON_SEPARATE(v3);
	increment_function(v3);
	goto fs35;
	fe35:
	r0 = NULL;
	PHALCON_RETURN_CTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, sm11){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_STRING(v0, "sm2", 0);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_STRING(v1, "Phalcon_Internal_Test", 0);
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_ZVAL_STATIC(r0, v1, "sm2");
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, smp2){

	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_SELF(r0, this_ptr, "smp1");
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, smp4){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v1);
	p0[0] = v1;
	Z_ADDREF_P(v0);
	p0[1] = v0;
	PHALCON_CALL_PARENT_PARAMS(r0, this_ptr, "Phalcon_Internal_Test", "smp3", 2, p0);
	RETURN_ZVAL(r0, 1, 0);
}

PHP_METHOD(Phalcon_Internal_Test, smp5){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(v2);
	ZVAL_LONG(v2, 0);
	PHALCON_ALLOC_ZVAL(v3);
	ZVAL_LONG(v3, 0);
	fs36:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 10);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v3, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe36;
	}
	PHALCON_INIT_RESULT(r1);
	if (!r2) {
		PHALCON_ALLOC_ZVAL(r2);
	} else {
		if (Z_REFCOUNT_P(r2) > 1){ 
			PHALCON_SEPARATE(r2);
		}
	}
	add_function(r2, v3, v0 TSRMLS_CC);
	Z_ADDREF_P(r2);
	p0[0] = r2;
	PHALCON_INIT_VARTYPE(t1, IS_LONG);
	ZVAL_LONG(t1, 1);
	if (!r3) {
		PHALCON_ALLOC_ZVAL(r3);
	} else {
		if (Z_REFCOUNT_P(r3) > 1){ 
			PHALCON_SEPARATE(r3);
		}
	}
	add_function(r3, v3, t1 TSRMLS_CC);
	if (!r4) {
		PHALCON_ALLOC_ZVAL(r4);
	} else {
		if (Z_REFCOUNT_P(r4) > 1){ 
			PHALCON_SEPARATE(r4);
		}
	}
	add_function(r4, v1, r3 TSRMLS_CC);
	Z_ADDREF_P(r4);
	p0[1] = r4;
	PHALCON_CALL_STATIC_PARAMS(r1, "phalcon_internal_test", "smp3", 2, p0);
	if (!r5) {
		PHALCON_ALLOC_ZVAL(r5);
	} else {
		if (Z_REFCOUNT_P(r5) > 1){ 
			PHALCON_SEPARATE(r5);
		}
	}
	add_function(r5, v2, r1 TSRMLS_CC);
	PHALCON_CPY_WRT(v2, r5);
	PHALCON_SEPARATE(v3);
	increment_function(v3);
	goto fs36;
	fe36:
	r0 = NULL;
	PHALCON_RETURN_CTOR(v2);
}

PHP_METHOD(Phalcon_Internal_Test, p1){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p1", sizeof("_p1")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p2){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p2", sizeof("_p2")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p3){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p3", sizeof("_p3")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p4){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p4", sizeof("_p4")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p5){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p5", sizeof("_p5")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p6){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p6", sizeof("_p6")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p7){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p7", sizeof("_p7")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p8){


	phalcon_update_property_string(this_ptr, "_p0", strlen("_p0"), "more-lol" TSRMLS_CC);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, p9){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p10){


	phalcon_update_property_long(this_ptr, "_p0", strlen("_p0"), 14750 TSRMLS_CC);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, p11){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p12){

	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	zval *r0 = NULL, *r1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p1", sizeof("_p1")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p2", sizeof("_p2")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	concat_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t2);
	phalcon_read_property(t2, this_ptr, "_p3", sizeof("_p3")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	concat_function(r1, r0, t2 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r1);
}

PHP_METHOD(Phalcon_Internal_Test, p13){

	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	zval *r0 = NULL, *r1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p4", sizeof("_p4")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p5", sizeof("_p5")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t2);
	phalcon_read_property(t2, this_ptr, "_p6", sizeof("_p6")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	add_function(r1, r0, t2 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r1);
}

PHP_METHOD(Phalcon_Internal_Test, p14){

	zval *v0 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	concat_function(r0, t0, v0 TSRMLS_CC);
	phalcon_update_property_zval(this_ptr, "_p0", strlen("_p0"), r0 TSRMLS_CC);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, p15){

	zval *v0 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;
	zval *p0[] = { NULL };

	phalcon_update_property_string(this_ptr, "_p0", strlen("_p0"), "" TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_LONG(v0, 0);
	fs37:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 30);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v0, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe37;
	}
	Z_ADDREF_P(v0);
	p0[0] = v0;
	PHALCON_CALL_METHOD_PARAMS_NORETURN(this_ptr, "p14", 1, p0, PHALCON_CALL_DEFAULT);
	PHALCON_SEPARATE_PARAM(v0);
	increment_function(v0);
	goto fs37;
	fe37:
	r0 = NULL;
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t1);
}

PHP_METHOD(Phalcon_Internal_Test, p16){

	zval *v0 = NULL;
	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_STRING(v0, "_p0", 0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "lol", 1);
	PHALCON_UPDATE_PROPERTY_CPY(this_ptr, Z_STRVAL_P(v0), t0);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, p17){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p18){

	zval *v0 = NULL;
	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_STRING(v0, "_p0", 0);
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property_zval(t0, this_ptr, v0, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p19){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p8", sizeof("_p8")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p20){

	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "hello", 1);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p8", sizeof("_p8")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	phalcon_array_append(t1, t0 TSRMLS_CC);
	phalcon_update_property_zval(this_ptr, "_p8", strlen("_p8"), t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t2);
	phalcon_read_property(t2, this_ptr, "_p8", sizeof("_p8")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t2);
}

PHP_METHOD(Phalcon_Internal_Test, p21){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p22){

	zval *v0 = NULL;
	zval *t0 = NULL, *t1 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	{
		zval *copy;
		ALLOC_ZVAL(copy);
		ZVAL_ZVAL(copy, v0, 1, 0);
		Z_SET_REFCOUNT_P(copy, 1);
		Z_UNSET_ISREF_P(copy);
		phalcon_array_append(t0, copy TSRMLS_CC);
	}
	phalcon_update_property_zval(this_ptr, "_p9", strlen("_p9"), t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t1);
}

PHP_METHOD(Phalcon_Internal_Test, p23){

	zval *v0 = NULL;
	zval *t0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_UPDATE_PROPERTY_CPY(this_ptr, "_p9", v0);
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, p24){

	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_SEPARATE(t0);
	increment_function(t0);
	phalcon_update_property_zval(this_ptr, "_p9", strlen("_p9"), t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t1);
}

PHP_METHOD(Phalcon_Internal_Test, p25){

	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_SEPARATE(t0);
	decrement_function(t0);
	phalcon_update_property_zval(this_ptr, "_p9", strlen("_p9"), t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t1);
}

PHP_METHOD(Phalcon_Internal_Test, p26){

	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_SEPARATE(t0);
	increment_function(t0);
	phalcon_update_property_zval(this_ptr, "_p9", strlen("_p9"), t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t1);
}

PHP_METHOD(Phalcon_Internal_Test, p27){

	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_SEPARATE(t0);
	decrement_function(t0);
	phalcon_update_property_zval(this_ptr, "_p9", strlen("_p9"), t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t1);
}

PHP_METHOD(Phalcon_Internal_Test, p28){

	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_SEPARATE(t0);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_ZVAL(t1, t0, 1, 0);
	increment_function(t0);
	phalcon_update_property_zval(this_ptr, "_p9", strlen("_p9"), t0 TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t1);
}

PHP_METHOD(Phalcon_Internal_Test, p29){

	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_SEPARATE(t0);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_ZVAL(t1, t0, 1, 0);
	decrement_function(t0);
	phalcon_update_property_zval(this_ptr, "_p9", strlen("_p9"), t0 TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t1);
}

PHP_METHOD(Phalcon_Internal_Test, p30){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, *v5 = NULL;
	zval *a0 = NULL, *a1 = NULL, *a2 = NULL, *a3 = NULL;
	zval *i0 = NULL, *i1 = NULL;
	zval *ac0 = NULL, *ac1 = NULL;
	zval *t0 = NULL;
	HashTable *ah0, *ah1;
	HashPosition hp0, hp1;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_assoc_string(a1, "sup", "hello1", 1);
	PHALCON_SEPARATE(a0);
	add_assoc_zval(a0, "wish", a1);
	PHALCON_ALLOC_ZVAL(a2);
	array_init(a2);
	add_assoc_string(a2, "xup", "hello2", 1);
	PHALCON_SEPARATE(a0);
	add_assoc_zval(a0, "be", a2);
	PHALCON_ALLOC_ZVAL(a3);
	array_init(a3);
	add_assoc_string(a3, "zup", "hello3", 1);
	PHALCON_SEPARATE(a0);
	add_assoc_zval(a0, "today", a3);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT(v1, i0);
	FOREACH_KV(v0, ac0, fes38, fee38, ah0, hp0, v3, v2)
		if (Z_TYPE_P(v2) == IS_ARRAY) { 
			PHALCON_INIT_VAR(i1);
			object_init(i1);
			PHALCON_UPDATE_PROPERTY_CPY(v1, Z_STRVAL_P(v3), i1);
			FOREACH_KV(v2, ac1, fes39, fee39, ah1, hp1, v5, v4)
				PHALCON_INIT_VAR(t0);
				phalcon_read_property_zval(t0, v1, v3, PHALCON_NOISY_FETCH TSRMLS_CC);
				PHALCON_UPDATE_PROPERTY_CPY(t0, Z_STRVAL_P(v5), v4);
			END_FOREACH(ac1, fes39, fee39, ah1, hp1);
		} else {
			PHALCON_UPDATE_PROPERTY_CPY(v1, Z_STRVAL_P(v3), v2);
		}
	END_FOREACH(ac0, fes38, fee38, ah0, hp0);
	PHALCON_RETURN_CTOR(v1);
}

PHP_METHOD(Phalcon_Internal_Test, p31){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *i0 = NULL, *i1 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT_PARAM(v0, i0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_UPDATE_PROPERTY_CPY(v0, "a", a0);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_LONG(v1, 0);
	fs40:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 10);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v1, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe40;
	}
	PHALCON_INIT_VAR(i1);
	object_init(i1);
	PHALCON_CPY_WRT(v2, i1);
	PHALCON_INIT_VAR(t1);
	phalcon_read_property(t1, v0, "a", sizeof("a")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	{
		zval *copy;
		ALLOC_ZVAL(copy);
		ZVAL_ZVAL(copy, v2, 1, 0);
		Z_SET_REFCOUNT_P(copy, 1);
		Z_UNSET_ISREF_P(copy);
		phalcon_array_append(t1, copy TSRMLS_CC);
	}
	phalcon_update_property_zval(v0, "a", strlen("a"), t1 TSRMLS_CC);
	PHALCON_SEPARATE(v1);
	increment_function(v1);
	goto fs40;
	fe40:
	r0 = NULL;
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, sp1){

	zval *t0 = NULL;

	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp1", sizeof("_sp1")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sp2){

	zval *t0 = NULL;

	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp2", sizeof("_sp2")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sp3){

	zval *t0 = NULL;

	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp3", sizeof("_sp3")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sp4){

	zval *t0 = NULL;

	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp4", sizeof("_sp4")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sp5){

	zval *t0 = NULL;

	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp5", sizeof("_sp5")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sp6){

	zval *t0 = NULL;

	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp6", sizeof("_sp6")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sp7){

	zval *t0 = NULL;

	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp7", sizeof("_sp7")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sp8){

	zval *t0 = NULL, *t1 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_STRING(t0, "i can't handle anymore", 1);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp1", sizeof("_sp1")-1, t0 TSRMLS_CC);
	t1 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp1", sizeof("_sp1")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t1);
}

PHP_METHOD(Phalcon_Internal_Test, sp9){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL;
	zval *t0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, v0, v1 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp1", sizeof("_sp1")-1, r0 TSRMLS_CC);
	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp1", sizeof("_sp1")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, sp10){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	zval *r0 = NULL, *r1 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zzz", &v0, &v1, &v2) == FAILURE) {
		RETURN_NULL();
	}

	zend_update_static_property(phalcon_internal_test_class_entry, "_sp1", sizeof("_sp1")-1, v0 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp2", sizeof("_sp2")-1, v1 TSRMLS_CC);
	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp1", sizeof("_sp1")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	t1 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp2", sizeof("_sp2")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	add_function(r1, r0, v2 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp3", sizeof("_sp3")-1, r1 TSRMLS_CC);
	t2 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp3", sizeof("_sp3")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t2);
}

PHP_METHOD(Phalcon_Internal_Test, sp11){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	zval *r0 = NULL, *r1 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zzz", &v0, &v1, &v2) == FAILURE) {
		RETURN_NULL();
	}

	zend_update_static_property(phalcon_internal_test_class_entry, "_sp1", sizeof("_sp1")-1, v0 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp2", sizeof("_sp2")-1, v1 TSRMLS_CC);
	t0 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp1", sizeof("_sp1")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	t1 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp2", sizeof("_sp2")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	add_function(r0, t0, t1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r1);
	add_function(r1, r0, v2 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp3", sizeof("_sp3")-1, r1 TSRMLS_CC);
	t2 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp3", sizeof("_sp3")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t2);
}

PHP_METHOD(Phalcon_Internal_Test, cc1){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_get_class_constant(t0, phalcon_internal_test_class_entry, "C1", strlen("C1") TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, cc2){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_get_class_constant(t0, phalcon_internal_test_class_entry, "C2", strlen("C2") TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, cc3){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_get_class_constant(t0, phalcon_internal_test_class_entry, "C3", strlen("C3") TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, cc4){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_get_class_constant(t0, phalcon_internal_test_class_entry, "C4", strlen("C4") TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, cc5){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_get_class_constant(t0, phalcon_internal_test_class_entry, "C5", strlen("C5") TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, cc6){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_get_class_constant(t0, phalcon_internal_test_class_entry, "C6", strlen("C6") TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

PHP_METHOD(Phalcon_Internal_Test, is1){

	zval *v0 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_BOOL(t0, 0);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, t0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	eval_int = phalcon_array_isset_long(v0, 0);
	if (eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is2){

	zval *v0 = NULL;
	zval *i0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT_PARAM(v0, i0);
	phalcon_update_property_long(v0, "b", strlen("b"), 15 TSRMLS_CC);
	eval_int = phalcon_isset_property(v0, "b", strlen("b") TSRMLS_CC);
	if (eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is3){

	zval *v0 = NULL;
	zval *a0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	eval_int = phalcon_array_isset_long(v0, 0);
	if (eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is4){

	zval *v0 = NULL;
	zval *i0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT_PARAM(v0, i0);
	phalcon_update_property_long(v0, "c", strlen("c"), 10 TSRMLS_CC);
	eval_int = phalcon_isset_property(v0, "b", strlen("b") TSRMLS_CC);
	if (eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is5){

	zval *v0 = NULL;
	zval *a0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	eval_int = phalcon_array_isset_long(v0, 0);
	if (!eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is6){

	zval *v0 = NULL;
	zval *i0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT_PARAM(v0, i0);
	phalcon_update_property_long(v0, "c", strlen("c"), 10 TSRMLS_CC);
	eval_int = phalcon_isset_property(v0, "b", strlen("b") TSRMLS_CC);
	if (!eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is7){

	zval *v0 = NULL, *v1 = NULL;
	zval *a0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_string(a0, "hello", 1);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_LONG(v1, 0);
	eval_int = phalcon_array_isset(v0, v1);
	if (eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is8){

	zval *v0 = NULL;
	zval *i0 = NULL;
	zval *t0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT_PARAM(v0, i0);
	phalcon_update_property_string(v0, "host", strlen("host"), "192.168.0.20" TSRMLS_CC);
	phalcon_update_property_string(v0, "username", strlen("username"), "support" TSRMLS_CC);
	phalcon_update_property_string(v0, "password", strlen("password"), "H45pov682v" TSRMLS_CC);
	phalcon_update_property_string(v0, "name", strlen("name"), "demo" TSRMLS_CC);
	eval_int = phalcon_isset_property(v0, "host", strlen("host") TSRMLS_CC);
	if (eval_int) {
		PHALCON_ALLOC_ZVAL(t0);
		phalcon_read_property(t0, v0, "host", sizeof("host")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_RETURN_CHECK_CTOR(t0);
	} else {
		RETURN_FALSE;
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is9){

	zval *v0 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_assoc_string(a1, "1", "hello", 1);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, a1);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_BOOL(t0, 0);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, t0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_long(r0, v0, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
	eval_int = phalcon_array_isset_long(r0, 0);
	if (eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is10){

	zval *v0 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_assoc_string(a1, "1", "hello", 1);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, a1);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_BOOL(t0, 0);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, t0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_long(r0, v0, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
	eval_int = phalcon_array_isset_long(r0, 1);
	if (eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is11){

	zval *a0 = NULL, *a1 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_assoc_string(a1, "1", "hello", 1);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, a1);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_BOOL(t0, 0);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, t0);
	PHALCON_UPDATE_PROPERTY_CPY(this_ptr, "_p9", a0);
	PHALCON_ALLOC_ZVAL(t1);
	phalcon_read_property(t1, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_long(r0, t1, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
	eval_int = phalcon_array_isset_long(r0, 1);
	if (eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, is12){

	zval *v0 = NULL, *v1 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_STRING(v0, "hello", 0);
	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_STRING(v1, "lol", 0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_UPDATE_PROPERTY_CPY(this_ptr, "_p9", a0);
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p9", sizeof("_p9")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch(r0, t0, v0, PHALCON_NOISY_FETCH TSRMLS_CC);
	eval_int = phalcon_array_isset(r0, v1);
	if (eval_int) {
		RETURN_LONG(1);
	} else {
		RETURN_LONG(2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, un1){

	zval *v0 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_BOOL(t0, 0);
	PHALCON_SEPARATE(a0);
	add_next_index_zval(a0, t0);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_SEPARATE_PARAM(v0);
	phalcon_array_unset_long(v0, 0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, un2){

	zval *v0 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	add_next_index_long(a1, 0);
	add_next_index_long(a1, 1);
	add_next_index_long(a1, 2);
	PHALCON_SEPARATE(a0);
	add_assoc_zval(a0, "lost", a1);
	add_next_index_string(a0, "hello", 1);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_string(r0, v0, "lost", strlen("lost"), PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_SEPARATE(r0);
	phalcon_array_unset_long(r0, 1);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, un3){

	zval *v0 = NULL, *v1 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_long(a0, 0);
	add_next_index_long(a0, 1);
	add_next_index_long(a0, 2);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	{
		zval *copy;
		ALLOC_ZVAL(copy);
		ZVAL_ZVAL(copy, v0, 1, 0);
		Z_SET_REFCOUNT_P(copy, 0);
		Z_UNSET_ISREF_P(copy);
		PHALCON_SEPARATE(a1);
		add_next_index_zval(a1, copy);
	}
	add_next_index_string(a1, "hello", 1);
	PHALCON_CPY_WRT_PARAM(v1, a1);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_array_fetch_long(r0, v1, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_SEPARATE(r0);
	phalcon_array_unset_long(r0, 1);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, iof1){

	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(r0);
	phalcon_instance_of(r0, this_ptr, phalcon_internal_test_class_entry TSRMLS_CC);
	if (zend_is_true(r0)) {
		RETURN_TRUE;
	} else {
		RETURN_FALSE;
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, iof2){

	zval *v0 = NULL;
	zval *i0 = NULL;
	zval *r0 = NULL;
	zend_class_entry *ce0;

	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT_PARAM(v0, i0);
		ce0 = zend_fetch_class("stdclass", strlen("stdclass"), ZEND_FETCH_CLASS_DEFAULT TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_instance_of(r0, v0, ce0 TSRMLS_CC);
	if (zend_is_true(r0)) {
		RETURN_TRUE;
	} else {
		RETURN_FALSE;
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, iof3){

	zval *v0 = NULL;
	zval *i0 = NULL;
	zval *r0 = NULL;

	PHALCON_ALLOC_ZVAL(i0);
	object_init_ex(i0, phalcon_internal_testparent_class_entry);
	PHALCON_CALL_METHOD_NORETURN(i0, "__construct", PHALCON_CALL_CHECK);
	PHALCON_CPY_WRT_PARAM(v0, i0);
	PHALCON_ALLOC_ZVAL(r0);
	phalcon_instance_of(r0, v0, phalcon_internal_testparent_class_entry TSRMLS_CC);
	if (zend_is_true(r0)) {
		RETURN_TRUE;
	} else {
		RETURN_FALSE;
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, t1){

	zval *v0 = NULL, *v1 = NULL;
	zval *t0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_LONG(v0, 17);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 100);
	PHALCON_SEPARATE_PARAM(v1);
	phalcon_array_update_long(v1, 0, t0 TSRMLS_CC);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, t2){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *a0 = NULL;
	zval *ac0 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;
	zval *p0[] = { NULL, NULL };
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_STRING(v0, "", 0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_long(a0, 1);
	add_next_index_long(a0, 2);
	add_next_index_long(a0, 3);
	add_next_index_long(a0, 4);
	PHALCON_CPY_WRT_PARAM(v1, a0);
	FOREACH_KV(v1, ac0, fes41, fee41, ah0, hp0, v3, v2)
		Z_ADDREF_P(v3);
		p0[0] = v3;
		Z_ADDREF_P(v1);
		p0[1] = v1;
		PHALCON_CALL_METHOD_PARAMS_NORETURN(this_ptr, "t1", 2, p0, PHALCON_CALL_DEFAULT);
		PHALCON_INIT_RESULT(r0);
		phalcon_array_fetch_long(r0, v1, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_INIT_RESULT(r1);
		concat_function(r1, v3, r0 TSRMLS_CC);
		PHALCON_INIT_RESULT(r2);
		concat_function(r2, v0, r1 TSRMLS_CC);
		PHALCON_CPY_WRT_PARAM(v0, r2);
	END_FOREACH(ac0, fes41, fee41, ah0, hp0);
	PHALCON_RETURN_CTOR(v0);
}

PHP_METHOD(Phalcon_Internal_Test, t3){

	zval *v0 = NULL, *v1 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 5);
	PHALCON_ALLOC_ZVAL(r0);
	mod_function(r0, v1, t0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(t1);
	ZVAL_LONG(t1, 0);
	PHALCON_ALLOC_ZVAL(r1);
	is_equal_function(r1, r0, t1 TSRMLS_CC);
	if (zend_is_true(r1)) {
		t2 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
		PHALCON_RETURN_CHECK_CTOR(t2);
	} else {
		PHALCON_ALLOC_ZVAL(t3);
		ZVAL_LONG(t3, 15);
		PHALCON_ALLOC_ZVAL(r2);
		mul_function(r2, v1, t3 TSRMLS_CC);
		PHALCON_RETURN_CTOR(r2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, t4){

	zval *v0 = NULL, *v1 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(v1);
	ZVAL_LONG(v1, 25);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 5);
	PHALCON_ALLOC_ZVAL(r0);
	is_equal_function(r0, v0, t0 TSRMLS_CC);
	if (zend_is_true(r0)) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_read_property(t1, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_RETURN_CHECK_CTOR(t1);
	} else {
		PHALCON_ALLOC_ZVAL(r1);
		PHALCON_CALL_FUNC_PARAMS_1(r1, "sqrt", v1, 0x027);
		PHALCON_ALLOC_ZVAL(r2);
		add_function(r2, r1, v0 TSRMLS_CC);
		PHALCON_RETURN_CTOR(r2);
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, t5){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *a0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL, *t5 = NULL, *t6 = NULL;
	zval *t7 = NULL, *t8 = NULL, *t9 = NULL, *t10 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL, *r6 = NULL;
	zval *r7 = NULL;
	zval *p0[] = { NULL, NULL }, *p1[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zzz", &v0, &v1, &v2) == FAILURE) {
		RETURN_NULL();
	}

	phalcon_update_property_long(this_ptr, "_p0", strlen("_p0"), 0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT(v3, a0);
	ws42:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_BOOL(t0, 1);
	if (!zend_is_true(t0)) {
		goto we42;
	}
	if (!r0) {
		PHALCON_ALLOC_ZVAL(r0);
	} else {
		if (Z_REFCOUNT_P(r0) > 1){ 
			PHALCON_SEPARATE(r0);
		}
	}
	mul_function(r0, v0, v1 TSRMLS_CC);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, r0 TSRMLS_CC);
	PHALCON_INIT_VARTYPE(t1, IS_LONG);
	ZVAL_LONG(t1, 10);
	if (!r1) {
		PHALCON_ALLOC_ZVAL(r1);
	} else {
		if (Z_REFCOUNT_P(r1) > 1){ 
			PHALCON_SEPARATE(r1);
		}
	}
	add_function(r1, v0, t1 TSRMLS_CC);
	PHALCON_CPY_WRT_PARAM(v0, r1);
	PHALCON_INIT_VAR(t2);
	phalcon_read_property(t2, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_INIT_VARTYPE(t3, IS_LONG);
	ZVAL_LONG(t3, 2);
	if (!r2) {
		PHALCON_ALLOC_ZVAL(r2);
	} else {
		if (Z_REFCOUNT_P(r2) > 1){ 
			PHALCON_SEPARATE(r2);
		}
	}
	mod_function(r2, t2, t3 TSRMLS_CC);
	PHALCON_INIT_VARTYPE(t4, IS_LONG);
	ZVAL_LONG(t4, 0);
	if (!r3) {
		PHALCON_ALLOC_ZVAL(r3);
	} else {
		if (Z_REFCOUNT_P(r3) > 1){ 
			PHALCON_SEPARATE(r3);
		}
	}
	is_equal_function(r3, r2, t4 TSRMLS_CC);
	if (zend_is_true(r3)) {
		PHALCON_INIT_RESULT(r4);
		PHALCON_INIT_VARTYPE(t5, IS_LONG);
		ZVAL_LONG(t5, 1);
		if (!r5) {
			PHALCON_ALLOC_ZVAL(r5);
		} else {
			if (Z_REFCOUNT_P(r5) > 1){ 
				PHALCON_SEPARATE(r5);
			}
		}
		add_function(r5, v2, t5 TSRMLS_CC);
		Z_ADDREF_P(r5);
		p0[0] = r5;
		t6 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
		Z_ADDREF_P(t6);
		p0[1] = t6;
		PHALCON_CALL_SELF_PARAMS(r4, this_ptr, "t4", 2, p0);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r4, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v3);
			phalcon_array_append(v3, copy TSRMLS_CC);
		}
	} else {
		PHALCON_INIT_RESULT(r6);
		Z_ADDREF_P(v0);
		p1[0] = v0;
		Z_ADDREF_P(v1);
		p1[1] = v1;
		PHALCON_CALL_METHOD_PARAMS(r6, this_ptr, "t3", 2, p1, PHALCON_CALL_DEFAULT);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r6, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v3);
			phalcon_array_append(v3, copy TSRMLS_CC);
		}
	}
	PHALCON_INIT_VAR(t7);
	phalcon_read_property(t7, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_INIT_VARTYPE(t8, IS_LONG);
	ZVAL_LONG(t8, 3);
	if (!r7) {
		PHALCON_ALLOC_ZVAL(r7);
	} else {
		if (Z_REFCOUNT_P(r7) > 1){ 
			PHALCON_SEPARATE(r7);
		}
	}
	mul_function(r7, t7, t8 TSRMLS_CC);
	PHALCON_CPY_WRT_PARAM(v1, r7);
	PHALCON_INIT_VAR(t9);
	phalcon_read_property(t9, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_SEPARATE(t9);
	increment_function(t9);
	phalcon_update_property_zval(this_ptr, "_p0", strlen("_p0"), t9 TSRMLS_CC);
	PHALCON_INIT_VAR(t10);
	phalcon_read_property(t10, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	if (!phalcon_is_smaller_strict_long(t10, 10)) {
		goto we42;
	}
	goto ws42;
	we42:
	t0 = NULL;
	PHALCON_RETURN_CTOR(v3);
}

PHP_METHOD(Phalcon_Internal_Test, t6){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL;
	zval *a0 = NULL;
	zval *i0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL, *r6 = NULL;
	zval *r7 = NULL, *r8 = NULL, *r9 = NULL, *r10 = NULL;
	zval *p1[] = { NULL, NULL, NULL, NULL }, *p2[] = { NULL, NULL, NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zzz", &v0, &v1, &v2) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_long(a0, 0);
	add_next_index_long(a0, 25);
	PHALCON_CPY_WRT(v3, a0);
	PHALCON_ALLOC_ZVAL(i0);
	object_init_ex(i0, phalcon_internal_testparent_class_entry);
	PHALCON_CALL_METHOD_NORETURN(i0, "__construct", PHALCON_CALL_CHECK);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, i0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(v4);
	ZVAL_LONG(v4, 0);
	fs43:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 10);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v4, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe43;
	}
	if (phalcon_is_smaller_strict_long(v4, 5)) {
		PHALCON_INIT_RESULT(r1);
		phalcon_array_fetch_long(r1, v3, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_INIT_RESULT(r2);
		t1 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
		Z_ADDREF_P(t1);
		p1[0] = t1;
		Z_ADDREF_P(v4);
		p1[1] = v4;
		Z_ADDREF_P(v0);
		p1[2] = v0;
		Z_ADDREF_P(v1);
		p1[3] = v1;
		PHALCON_CALL_STATIC_PARAMS(r2, "phalcon_internal_testparent", "smp6", 4, p1);
		if (!r3) {
			PHALCON_ALLOC_ZVAL(r3);
		} else {
			if (Z_REFCOUNT_P(r3) > 1){ 
				PHALCON_SEPARATE(r3);
			}
		}
		add_function(r3, r1, r2 TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r3, 1, 0);
			Z_SET_REFCOUNT_P(copy, 0);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v3);
			phalcon_array_update_long(v3, 1, copy TSRMLS_CC);
		}
	} else {
		PHALCON_INIT_RESULT(r4);
		phalcon_array_fetch_long(r4, v3, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_INIT_RESULT(r5);
		t2 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
		Z_ADDREF_P(t2);
		p2[0] = t2;
		PHALCON_INIT_RESULT(r6);
		phalcon_array_fetch_long(r6, v3, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_SEPARATE(r6);
		PHALCON_INIT_VAR(t3);
		ZVAL_ZVAL(t3, r6, 1, 0);
		increment_function(r6);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r6, 1, 0);
			Z_SET_REFCOUNT_P(copy, 0);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v3);
			phalcon_array_update_long(v3, 0, copy TSRMLS_CC);
		}
		Z_ADDREF_P(t3);
		p2[1] = t3;
		Z_ADDREF_P(v1);
		p2[2] = v1;
		Z_ADDREF_P(v2);
		p2[3] = v2;
		PHALCON_CALL_SELF_PARAMS(r5, this_ptr, "smp6", 4, p2);
		if (!r7) {
			PHALCON_ALLOC_ZVAL(r7);
		} else {
			if (Z_REFCOUNT_P(r7) > 1){ 
				PHALCON_SEPARATE(r7);
			}
		}
		add_function(r7, r4, r5 TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r7, 1, 0);
			Z_SET_REFCOUNT_P(copy, 0);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v3);
			phalcon_array_update_long(v3, 1, copy TSRMLS_CC);
		}
	}
	PHALCON_SEPARATE(v4);
	increment_function(v4);
	goto fs43;
	fe43:
	r0 = NULL;
	PHALCON_ALLOC_ZVAL(r8);
	phalcon_array_fetch_long(r8, v3, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r9);
	t4 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_CALL_METHOD(r9, t4, "mp7", PHALCON_CALL_DEFAULT);
	PHALCON_ALLOC_ZVAL(r10);
	add_function(r10, r8, r9 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r10);
}

PHP_METHOD(Phalcon_Internal_Test, t7){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL;
	zval *a0 = NULL;
	zval *i0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL, *t5 = NULL, *t6 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL, *r6 = NULL;
	zval *r7 = NULL, *r8 = NULL, *r9 = NULL, *r10 = NULL, *r11 = NULL, *r12 = NULL, *r13 = NULL;
	zval *r14 = NULL, *r15 = NULL;
	zval *p1[] = { NULL, NULL, NULL, NULL }, *p2[] = { NULL, NULL, NULL, NULL }, *p3[] = { NULL, NULL, NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_long(a0, 0);
	add_next_index_long(a0, 25);
	PHALCON_CPY_WRT(v2, a0);
	PHALCON_ALLOC_ZVAL(i0);
	object_init_ex(i0, phalcon_internal_testparent_class_entry);
	PHALCON_CALL_METHOD_NORETURN(i0, "__construct", PHALCON_CALL_CHECK);
	zend_update_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, i0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(v3);
	ZVAL_LONG(v3, 0);
	fs44:
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_LONG(t0, 10);
	PHALCON_ALLOC_ZVAL(r0);
	is_smaller_function(r0, v3, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto fe44;
	}
	PHALCON_CPY_WRT(v4, v0);
	fs45:
	PHALCON_INIT_VARTYPE(t1, IS_LONG);
	ZVAL_LONG(t1, 0);
	PHALCON_INIT_VARTYPE(r1, IS_BOOL);
	is_smaller_function(r1, t1, v4 TSRMLS_CC);
	if (!zend_is_true(r1)) {
		goto fe45;
	}
	if (phalcon_is_smaller_strict_long(v3, 5)) {
		PHALCON_INIT_RESULT(r2);
		phalcon_array_fetch_long(r2, v2, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_INIT_RESULT(r3);
		t2 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
		Z_ADDREF_P(t2);
		p1[0] = t2;
		Z_ADDREF_P(v3);
		p1[1] = v3;
		Z_ADDREF_P(v0);
		p1[2] = v0;
		Z_ADDREF_P(v1);
		p1[3] = v1;
		PHALCON_CALL_STATIC_PARAMS(r3, "phalcon_internal_testparent", "smp6", 4, p1);
		if (!r4) {
			PHALCON_ALLOC_ZVAL(r4);
		} else {
			if (Z_REFCOUNT_P(r4) > 1){ 
				PHALCON_SEPARATE(r4);
			}
		}
		add_function(r4, r2, r3 TSRMLS_CC);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r4, 1, 0);
			Z_SET_REFCOUNT_P(copy, 0);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v2);
			phalcon_array_update_long(v2, 1, copy TSRMLS_CC);
		}
	} else {
		if (!phalcon_is_smaller_strict_long(v4, 4)) {
			PHALCON_INIT_RESULT(r5);
			phalcon_array_fetch_long(r5, v2, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
			PHALCON_INIT_RESULT(r6);
			t3 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
			Z_ADDREF_P(t3);
			p2[0] = t3;
			PHALCON_INIT_RESULT(r7);
			phalcon_array_fetch_long(r7, v2, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
			PHALCON_SEPARATE(r7);
			decrement_function(r7);
			{
				zval *copy;
				ALLOC_ZVAL(copy);
				ZVAL_ZVAL(copy, r7, 1, 0);
				Z_SET_REFCOUNT_P(copy, 0);
				Z_UNSET_ISREF_P(copy);
				PHALCON_SEPARATE(v2);
				phalcon_array_update_long(v2, 0, copy TSRMLS_CC);
			}
			Z_ADDREF_P(r7);
			p2[1] = r7;
			Z_ADDREF_P(v1);
			p2[2] = v1;
			Z_ADDREF_P(v4);
			p2[3] = v4;
			PHALCON_CALL_SELF_PARAMS(r6, this_ptr, "smp6", 4, p2);
			if (!r8) {
				PHALCON_ALLOC_ZVAL(r8);
			} else {
				if (Z_REFCOUNT_P(r8) > 1){ 
					PHALCON_SEPARATE(r8);
				}
			}
			add_function(r8, r5, r6 TSRMLS_CC);
			{
				zval *copy;
				ALLOC_ZVAL(copy);
				ZVAL_ZVAL(copy, r8, 1, 0);
				Z_SET_REFCOUNT_P(copy, 0);
				Z_UNSET_ISREF_P(copy);
				PHALCON_SEPARATE(v2);
				phalcon_array_update_long(v2, 1, copy TSRMLS_CC);
			}
		} else {
			PHALCON_INIT_RESULT(r9);
			phalcon_array_fetch_long(r9, v2, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
			PHALCON_INIT_RESULT(r10);
			t4 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
			Z_ADDREF_P(t4);
			p3[0] = t4;
			PHALCON_INIT_RESULT(r11);
			phalcon_array_fetch_long(r11, v2, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
			PHALCON_SEPARATE(r11);
			PHALCON_INIT_VAR(t5);
			ZVAL_ZVAL(t5, r11, 1, 0);
			increment_function(r11);
			{
				zval *copy;
				ALLOC_ZVAL(copy);
				ZVAL_ZVAL(copy, r11, 1, 0);
				Z_SET_REFCOUNT_P(copy, 0);
				Z_UNSET_ISREF_P(copy);
				PHALCON_SEPARATE(v2);
				phalcon_array_update_long(v2, 0, copy TSRMLS_CC);
			}
			Z_ADDREF_P(t5);
			p3[1] = t5;
			Z_ADDREF_P(v0);
			p3[2] = v0;
			Z_ADDREF_P(v4);
			p3[3] = v4;
			PHALCON_CALL_SELF_PARAMS(r10, this_ptr, "smp6", 4, p3);
			if (!r12) {
				PHALCON_ALLOC_ZVAL(r12);
			} else {
				if (Z_REFCOUNT_P(r12) > 1){ 
					PHALCON_SEPARATE(r12);
				}
			}
			add_function(r12, r9, r10 TSRMLS_CC);
			{
				zval *copy;
				ALLOC_ZVAL(copy);
				ZVAL_ZVAL(copy, r12, 1, 0);
				Z_SET_REFCOUNT_P(copy, 0);
				Z_UNSET_ISREF_P(copy);
				PHALCON_SEPARATE(v2);
				phalcon_array_update_long(v2, 1, copy TSRMLS_CC);
			}
		}
	}
	PHALCON_SEPARATE(v4);
	decrement_function(v4);
	goto fs45;
	fe45:
	r1 = NULL;
	PHALCON_SEPARATE(v3);
	increment_function(v3);
	goto fs44;
	fe44:
	r0 = NULL;
	PHALCON_ALLOC_ZVAL(r13);
	phalcon_array_fetch_long(r13, v2, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r14);
	t6 = zend_read_static_property(phalcon_internal_test_class_entry, "_sp0", sizeof("_sp0")-1, (zend_bool) ZEND_FETCH_CLASS_SILENT TSRMLS_CC);
	PHALCON_CALL_METHOD(r14, t6, "mp7", PHALCON_CALL_DEFAULT);
	PHALCON_ALLOC_ZVAL(r15);
	add_function(r15, r13, r14 TSRMLS_CC);
	PHALCON_RETURN_CTOR(r15);
}

PHP_METHOD(Phalcon_Internal_Test, t8){

	zval *v0 = NULL, *v1 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, t9){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, *v5 = NULL, *v6 = NULL;
	zval *v7 = NULL;
	zval *a0 = NULL, *a1 = NULL;
	zval *i0 = NULL, *i1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	zval *p1[] = { NULL, NULL, NULL }, *p2[] = { NULL, NULL, NULL };

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_string(a0, "cedula", 1);
	add_next_index_string(a0, "nombre", 1);
	add_next_index_string(a0, "saldo", 1);
	add_next_index_string(a0, "estado", 1);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	PHALCON_UPDATE_PROPERTY_CPY(this_ptr, "_p0", a1);
	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT_PARAM(v1, i0);
	phalcon_update_property_string(v1, "cedula", strlen("cedula"), "hello" TSRMLS_CC);
	zend_update_property_null(Z_OBJCE_P(v1), v1, "nombre", strlen("nombre") TSRMLS_CC);
	zend_update_property_null(Z_OBJCE_P(v1), v1, "saldo", strlen("saldo") TSRMLS_CC);
	zend_update_property_null(Z_OBJCE_P(v1), v1, "estado", strlen("estado") TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_FUNC_PARAMS_1(r0, "count", v0, 0x008);
	PHALCON_CPY_WRT(v2, r0);
	PHALCON_ALLOC_ZVAL(v3);
	ZVAL_LONG(v3, 0);
	fs46:
	PHALCON_ALLOC_ZVAL(r1);
	is_smaller_function(r1, v3, v2 TSRMLS_CC);
	if (!zend_is_true(r1)) {
		goto fe46;
	}
	PHALCON_INIT_RESULT(r2);
	phalcon_array_fetch(r2, v0, v3, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_CPY_WRT(v4, r2);
	PHALCON_INIT_VAR(t0);
	phalcon_read_property_zval(t0, v1, v4, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_CPY_WRT(v5, t0);
	PHALCON_INIT_RESULT(r3);
	PHALCON_INIT_VARTYPE(p1[0], IS_STRING);
	ZVAL_STRING(p1[0], "_id", 1);
	PHALCON_INIT_VARTYPE(p1[1], IS_STRING);
	ZVAL_STRING(p1[1], "", 1);
	p1[2] = v4;
	PHALCON_CALL_FUNC_PARAMS(r3, "str_replace", 3, p1, 0x017);
	PHALCON_CPY_WRT(v6, r3);
	PHALCON_INIT_VAR(i1);
	object_init_ex(i1, phalcon_model_message_class_entry);
	PHALCON_INIT_RESULT(r4);
	PHALCON_CONCAT_RIGHT(r4, v6, " is required");
	Z_ADDREF_P(r4);
	p2[0] = r4;
	Z_ADDREF_P(v4);
	p2[1] = v4;
	PHALCON_INIT_VARTYPE(p2[2], IS_STRING);
	ZVAL_STRING(p2[2], "PresenceOf", 1);
	PHALCON_CALL_METHOD_PARAMS_NORETURN(i1, "__construct", 3, p2, PHALCON_CALL_CHECK);
	PHALCON_CPY_WRT(v7, i1);
	PHALCON_INIT_VAR(t1);
	phalcon_read_property(t1, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	{
		zval *copy;
		ALLOC_ZVAL(copy);
		ZVAL_ZVAL(copy, v7, 1, 0);
		Z_SET_REFCOUNT_P(copy, 1);
		Z_UNSET_ISREF_P(copy);
		phalcon_array_append(t1, copy TSRMLS_CC);
	}
	phalcon_update_property_zval(this_ptr, "_p0", strlen("_p0"), t1 TSRMLS_CC);
	PHALCON_SEPARATE(v3);
	increment_function(v3);
	goto fs46;
	fe46:
	r1 = NULL;
	PHALCON_ALLOC_ZVAL(t2);
	phalcon_read_property(t2, this_ptr, "_p0", sizeof("_p0")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t2);
}

PHP_METHOD(Phalcon_Internal_Test, t10){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, *v5 = NULL;
	zval *a0 = NULL, *a1 = NULL, *a2 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL;
	zval *i0 = NULL;
	zval *ac0 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL;
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;
	int eval_int;

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	add_next_index_string(a0, "cedula", 1);
	add_next_index_string(a0, "nombre", 1);
	add_next_index_string(a0, "saldo", 1);
	add_next_index_string(a0, "estado", 1);
	PHALCON_CPY_WRT_PARAM(v0, a0);
	PHALCON_ALLOC_ZVAL(a1);
	array_init(a1);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_BOOL(t0, 1);
	PHALCON_SEPARATE(a1);
	add_assoc_zval(a1, "saldo", t0);
	PHALCON_CPY_WRT_PARAM(v1, a1);
	PHALCON_ALLOC_ZVAL(i0);
	object_init(i0);
	PHALCON_CPY_WRT(v2, i0);
	phalcon_update_property_string(v2, "cedula", strlen("cedula"), "hello" TSRMLS_CC);
	phalcon_update_property_string(v2, "nombre", strlen("nombre"), "LOL" TSRMLS_CC);
	phalcon_update_property_long(v2, "saldo", strlen("saldo"), 0 TSRMLS_CC);
	phalcon_update_property_string(v2, "estado", strlen("estado"), "X" TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(a2);
	array_init(a2);
	PHALCON_CPY_WRT(v3, a2);
	FOREACH_V(v0, ac0, fes47, fee47, ah0, hp0, v4)
		PHALCON_INIT_VAR(t1);
		phalcon_read_property_zval(t1, v2, v4, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_CPY_WRT(v5, t1);
		PHALCON_INIT_VARTYPE(t2, IS_STRING);
		ZVAL_STRING(t2, "", 1);
		PHALCON_INIT_VARTYPE(r0, IS_BOOL);
		is_identical_function(r0, t2, v5 TSRMLS_CC);
		PHALCON_INIT_VARTYPE(t3, IS_NULL);
		ZVAL_NULL(t3);
		PHALCON_INIT_VARTYPE(r1, IS_BOOL);
		is_identical_function(r1, t3, v5 TSRMLS_CC);
		PHALCON_INIT_VARTYPE(r2, IS_BOOL);
		ZVAL_BOOL(r2, zend_is_true(r0) || zend_is_true(r1));
		if (zend_is_true(r2)) {
			PHALCON_INIT_VARTYPE(t4, IS_STRING);
			ZVAL_STRING(t4, "NULL", 1);
			{
				zval *copy;
				ALLOC_ZVAL(copy);
				ZVAL_ZVAL(copy, t4, 1, 0);
				Z_SET_REFCOUNT_P(copy, 1);
				Z_UNSET_ISREF_P(copy);
				PHALCON_SEPARATE(v3);
				phalcon_array_append(v3, copy TSRMLS_CC);
			}
		} else {
			eval_int = phalcon_array_isset(v1, v4);
			if (eval_int) {
				{
					zval *copy;
					ALLOC_ZVAL(copy);
					ZVAL_ZVAL(copy, v5, 1, 0);
					Z_SET_REFCOUNT_P(copy, 1);
					Z_UNSET_ISREF_P(copy);
					PHALCON_SEPARATE(v3);
					phalcon_array_append(v3, copy TSRMLS_CC);
				}
			} else {
				PHALCON_INIT_RESULT(r3);
				PHALCON_CONCAT_BOTH(r3,  "'", v5, "'");
				{
					zval *copy;
					ALLOC_ZVAL(copy);
					ZVAL_ZVAL(copy, r3, 1, 0);
					Z_SET_REFCOUNT_P(copy, 1);
					Z_UNSET_ISREF_P(copy);
					PHALCON_SEPARATE(v3);
					phalcon_array_append(v3, copy TSRMLS_CC);
				}
			}
		}
	END_FOREACH(ac0, fes47, fee47, ah0, hp0);
	PHALCON_RETURN_CTOR(v3);
}

PHP_METHOD(Phalcon_Internal_Test, t11){

	zval *v0 = NULL, *v1 = NULL;
	zval *i0 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	zval *p0[] = { NULL }, *p1[] = { NULL };

	PHALCON_ALLOC_ZVAL(v0);
	ZVAL_LONG(v0, 0);
	phalcon_update_property_string(this_ptr, "_p2", strlen("_p2"), "lol" TSRMLS_CC);
	zend_update_property_bool(Z_OBJCE_P(this_ptr), this_ptr, "_p4", strlen("_p4"), 0 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(i0);
	object_init_ex(i0, phalcon_internal_testdummy_class_entry);
	Z_ADDREF_P(this_ptr);
	p0[0] = this_ptr;
	PHALCON_CALL_METHOD_PARAMS_NORETURN(i0, "__construct", 1, p0, PHALCON_CALL_CHECK);
	PHALCON_CPY_WRT_PARAM(v1, i0);
	ws48:
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_p4", sizeof("_p4")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	boolean_not_function(r0, t0 TSRMLS_CC);
	if (!zend_is_true(r0)) {
		goto we48;
	}
	PHALCON_INIT_VARTYPE(t1, IS_LONG);
	ZVAL_LONG(t1, 1);
	if (!r1) {
		PHALCON_ALLOC_ZVAL(r1);
	} else {
		if (Z_REFCOUNT_P(r1) > 1){ 
			PHALCON_SEPARATE(r1);
		}
	}
	is_equal_function(r1, v0, t1 TSRMLS_CC);
	if (zend_is_true(r1)) {
		PHALCON_INIT_VARTYPE(p1[0], IS_STRING);
		ZVAL_STRING(p1[0], "x/y", 1);
		PHALCON_CALL_METHOD_PARAMS_NORETURN(v1, "f1", 1, p1, PHALCON_CALL_DEFAULT);
	}
	PHALCON_SEPARATE_PARAM(v0);
	increment_function(v0);
	if (!phalcon_is_smaller_strict_long(v0, 2)) {
		zend_update_property_bool(Z_OBJCE_P(this_ptr), this_ptr, "_p4", strlen("_p4"), 1 TSRMLS_CC);
	}
	goto ws48;
	we48:
	r0 = NULL;
	PHALCON_ALLOC_ZVAL(t2);
	phalcon_read_property(t2, this_ptr, "_p2", sizeof("_p2")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t2);
}

PHP_METHOD(Phalcon_Internal_Test, t12){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL;
	zval *c0 = NULL;
	zval *p1[] = { NULL }, *p2[] = { NULL };
	int eval_int;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(c0);
	ZVAL_STRING(c0, "/", 1);
	PHALCON_CALL_FUNC_PARAMS_2(r0, "explode", c0, v0, 0x002);
	FREE_ZVAL(c0);
	PHALCON_CPY_WRT(v1, r0);
	eval_int = phalcon_array_isset_long(v1, 0);
	if (eval_int) {
		PHALCON_ALLOC_ZVAL(r1);
		phalcon_array_fetch_long(r1, v1, 0, PHALCON_NOISY_FETCH TSRMLS_CC);
		p1[0] = r1;
		phalcon_filter_alphanum(&r2, p1[0]);
		PHALCON_UPDATE_PROPERTY_CPY(this_ptr, "_p1", r2);
		PHALCON_SEPARATE(v1);
		phalcon_array_unset_long(v1, 0);
	}
	eval_int = phalcon_array_isset_long(v1, 1);
	if (eval_int) {
		PHALCON_ALLOC_ZVAL(r3);
		phalcon_array_fetch_long(r3, v1, 1, PHALCON_NOISY_FETCH TSRMLS_CC);
		p2[0] = r3;
		phalcon_filter_alphanum(&r4, p2[0]);
		PHALCON_UPDATE_PROPERTY_CPY(this_ptr, "_p2", r4);
		PHALCON_SEPARATE(v1);
		phalcon_array_unset_long(v1, 1);
	}
	zend_update_property_bool(Z_OBJCE_P(this_ptr), this_ptr, "_p4", strlen("_p4"), 0 TSRMLS_CC);
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Internal_Test, si1){

	zval *r0 = NULL;
	zend_bool silence;

	php_printf("lol!");
	silence = PG(display_errors);
	PG(display_errors) = 0;
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CALL_FUNC(r0, "session_start", 0x02A);
	PG(display_errors) = silence;
	RETURN_NULL();
}

