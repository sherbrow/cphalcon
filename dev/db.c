
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

/**
 * Phalcon_Db
 *
 * Phalcon_Db and its related classes provide a simple SQL database interface for Phalcon Framework.
 * The Phalcon_Db is the basic class you use to connect your PHP application to a RDBMS.
 * There is a different adapter class for each brand of RDBMS.
 *
 * This component is intended to low level database operations. If you want to interact with databases using
 * high level abstraction use Phalcon_Model.
 *
 * Phalcon_Db is an abstract class. You only can use it with a database adapter like Phalcon_Db_Mysql
 *
 * 
 */

/**
 * Phalcon_Db contructor, This method does not should to be called directly. Use Phalcon_Db::factory instead
 *
 * @param stdClass $descriptor
 */
PHP_METHOD(Phalcon_Db, __construct){

	zval *v0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_UPDATE_PROPERTY_CPY(this_ptr, "_descriptor", v0);
	RETURN_NULL();
}

/**
 * Sets a logger class to log all SQL operations sended to database server
 *
 * @param Phalcon_Logger $logger
 */
PHP_METHOD(Phalcon_Db, setLogger){

	zval *v0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_UPDATE_PROPERTY_CPY(this_ptr, "_logger", v0);
	RETURN_NULL();
}

/**
 * Sends a SQL operation made to the logger
 *
 * @param string $sqlStatement
 * @param int $type
 */
PHP_METHOD(Phalcon_Db, log){

	zval *v0 = NULL, *v1 = NULL;
	zval *t0 = NULL, *t1 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_logger", sizeof("_logger")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	if (zend_is_true(t0)) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_read_property(t1, this_ptr, "_logger", sizeof("_logger")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		Z_ADDREF_P(v0);
		p0[0] = v0;
		Z_ADDREF_P(v1);
		p0[1] = v1;
		PHALCON_CALL_METHOD_PARAMS_NORETURN(t1, "log", 2, p0, PHALCON_CALL_DEFAULT);
	}
	RETURN_NULL();
}

/**
 * Returns the first row in a SQL query result
 *
 * 
 *
 * @param string $sqlQuery
 * @return array
 */
PHP_METHOD(Phalcon_Db, fetchOne){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	zval *a0 = NULL;
	zval *p0[] = { NULL }, *p1[] = { NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "query", 1, p0, PHALCON_CALL_DEFAULT);
	PHALCON_CPY_WRT(v1, r0);
	if (zend_is_true(v1)) {
		PHALCON_ALLOC_ZVAL(r1);
		Z_ADDREF_P(v1);
		p1[0] = v1;
		PHALCON_CALL_METHOD_PARAMS(r1, this_ptr, "fetcharray", 1, p1, PHALCON_CALL_DEFAULT);
		RETURN_ZVAL(r1, 1, 0);
	} else {
		PHALCON_ALLOC_ZVAL(a0);
		array_init(a0);
		PHALCON_RETURN_CTOR(a0);
	}
	RETURN_NULL();
}

/**
 * Dumps the complete result of a query into an array
 *
 * 
 *
 * @param string $sqlQuery
 * @return array
 */
PHP_METHOD(Phalcon_Db, fetchAll){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL;
	zval *a0 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;
	zval *t0 = NULL;
	zval *p0[] = { NULL }, *p1[] = { NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT(v1, a0);
	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v0);
	p0[0] = v0;
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "query", 1, p0, PHALCON_CALL_DEFAULT);
	PHALCON_CPY_WRT(v2, r0);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_BOOL(t0, 0);
	PHALCON_ALLOC_ZVAL(r1);
	is_not_equal_function(r1, v2, t0 TSRMLS_CC);
	if (zend_is_true(r1)) {
		ws13:
		PHALCON_ALLOC_ZVAL(r2);
		Z_ADDREF_P(v2);
		p1[0] = v2;
		PHALCON_CALL_METHOD_PARAMS(r2, this_ptr, "fetcharray", 1, p1, PHALCON_CALL_DEFAULT);
		PHALCON_CPY_WRT(v3, r2);
		if (!zend_is_true(v3)) {
			goto we13;
		}
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, v3, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v1);
			phalcon_array_append(v1, copy TSRMLS_CC);
		}
		goto ws13;
		we13:
		v3 = NULL;
	}
	PHALCON_RETURN_CTOR(v1);
}

/**
 * Inserts data into a database table using custom RBDM SQL syntax
 *
 * 
 *
 * @param string $tables
 * @param array $values
 * @param array $fields
 * @param boolean $automaticQuotes
 * @return boolean
 */
PHP_METHOD(Phalcon_Db, insert){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, *v5 = NULL, *v6 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL, *r6 = NULL;
	zval *r7 = NULL, *r8 = NULL, *r9 = NULL, *r10 = NULL, *r11 = NULL, *r12 = NULL, *r13 = NULL;
	zval *r14 = NULL, *r15 = NULL, *r16 = NULL, *r17 = NULL, *r18 = NULL, *r19 = NULL, *r20 = NULL;
	zval *r21 = NULL, *r22 = NULL, *r23 = NULL, *r24 = NULL, *r25 = NULL;
	zval *t0 = NULL;
	zval *i0 = NULL, *i1 = NULL;
	zval *ac0 = NULL;
	zval *c0 = NULL, *c1 = NULL, *c2 = NULL;
	zval *p1[] = { NULL, NULL, NULL, NULL }, *p9[] = { NULL }, *p10[] = { NULL, NULL, NULL, NULL };
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz|zz", &v0, &v1, &v2, &v3) == FAILURE) {
		RETURN_NULL();
	}

	if (!v2) {
		PHALCON_ALLOC_ZVAL(v2);
		ZVAL_NULL(v2);
	}
	if (!v3) {
		PHALCON_ALLOC_ZVAL(v3);
		ZVAL_BOOL(v3, 0);
	}
	
	PHALCON_ALLOC_ZVAL(v4);
	ZVAL_STRING(v4, "", 0);
	if (Z_TYPE_P(v1) == IS_ARRAY) { 
		PHALCON_ALLOC_ZVAL(r0);
		PHALCON_CALL_FUNC_PARAMS_1(r0, "count", v1, 0x008);
		PHALCON_ALLOC_ZVAL(t0);
		ZVAL_LONG(t0, 0);
		PHALCON_ALLOC_ZVAL(r1);
		is_equal_function(r1, r0, t0 TSRMLS_CC);
		if (zend_is_true(r1)) {
			PHALCON_ALLOC_ZVAL(i0);
			object_init_ex(i0, phalcon_db_exception_class_entry);
			PHALCON_ALLOC_ZVAL(r2);
			PHALCON_CONCAT_BOTH(r2,  "Unable to insert into ", v0, " without data");
			Z_ADDREF_P(r2);
			p1[0] = r2;
			PHALCON_ALLOC_ZVAL(p1[1]);
			ZVAL_LONG(p1[1], 0);
			PHALCON_ALLOC_ZVAL(p1[2]);
			ZVAL_BOOL(p1[2], 1);
			Z_ADDREF_P(this_ptr);
			p1[3] = this_ptr;
			PHALCON_CALL_METHOD_PARAMS_NORETURN(i0, "__construct", 4, p1, PHALCON_CALL_CHECK);
			zend_throw_exception_object(i0 TSRMLS_CC);
			Z_ADDREF_P(i0);
			return;
		} else {
			if (zend_is_true(v3)) {
				FOREACH_KV(v1, ac0, fes14, fee14, ah0, hp0, v6, v5)
					PHALCON_INIT_RESULT(r3);
					phalcon_array_fetch(r3, v1, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
					if (Z_TYPE_P(r3) == IS_OBJECT) {
						PHALCON_INIT_RESULT(r4);
						phalcon_array_fetch(r4, v1, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
						PHALCON_INIT_VARTYPE(r5, IS_BOOL);
						phalcon_instance_of(r5, r4, phalcon_db_rawvalue_class_entry TSRMLS_CC);
						if (zend_is_true(r5)) {
							PHALCON_INIT_RESULT(r6);
							PHALCON_INIT_RESULT(r7);
							PHALCON_INIT_RESULT(r8);
							phalcon_array_fetch(r8, v1, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
							PHALCON_CALL_METHOD(r7, r8, "getvalue", PHALCON_CALL_DEFAULT);
							Z_ADDREF_P(r7);
							PHALCON_CALL_FUNC_PARAMS_1(r6, "addslashes", r7, 0x01C);
							{
								zval *copy;
								ALLOC_ZVAL(copy);
								ZVAL_ZVAL(copy, r6, 1, 0);
								Z_SET_REFCOUNT_P(copy, 1);
								Z_UNSET_ISREF_P(copy);
								PHALCON_SEPARATE_PARAM(v1);
								phalcon_array_update(v1, v6, copy TSRMLS_CC);
							}
							goto fes14;
						} else {
							PHALCON_INIT_RESULT(r9);
							PHALCON_INIT_RESULT(r10);
							phalcon_array_fetch(r10, v1, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
							Z_ADDREF_P(r10);
							PHALCON_CALL_FUNC_PARAMS_1(r9, "addslashes", r10, 0x01C);
							PHALCON_INIT_RESULT(r11);
							PHALCON_CONCAT_BOTH(r11,  "'", r9, "'");
							{
								zval *copy;
								ALLOC_ZVAL(copy);
								ZVAL_ZVAL(copy, r11, 1, 0);
								Z_SET_REFCOUNT_P(copy, 1);
								Z_UNSET_ISREF_P(copy);
								PHALCON_SEPARATE_PARAM(v1);
								phalcon_array_update(v1, v6, copy TSRMLS_CC);
							}
						}
					} else {
						PHALCON_INIT_RESULT(r12);
						PHALCON_INIT_RESULT(r13);
						phalcon_array_fetch(r13, v1, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
						Z_ADDREF_P(r13);
						PHALCON_CALL_FUNC_PARAMS_1(r12, "addslashes", r13, 0x01C);
						PHALCON_INIT_RESULT(r14);
						PHALCON_CONCAT_BOTH(r14,  "'", r12, "'");
						{
							zval *copy;
							ALLOC_ZVAL(copy);
							ZVAL_ZVAL(copy, r14, 1, 0);
							Z_SET_REFCOUNT_P(copy, 1);
							Z_UNSET_ISREF_P(copy);
							PHALCON_SEPARATE_PARAM(v1);
							phalcon_array_update(v1, v6, copy TSRMLS_CC);
						}
					}
				END_FOREACH(ac0, fes14, fee14, ah0, hp0);
			}
		}
		if (Z_TYPE_P(v2) == IS_ARRAY) { 
			PHALCON_ALLOC_ZVAL(r17);
			PHALCON_CONCAT_LEFT(r17, "INSERT INTO ", v0);
			PHALCON_ALLOC_ZVAL(r18);
			PHALCON_ALLOC_ZVAL(c0);
			ZVAL_STRING(c0, ", ", 1);
			PHALCON_CALL_FUNC_PARAMS_2(r18, "join", c0, v2, 0x00B);
			FREE_ZVAL(c0);
			PHALCON_ALLOC_ZVAL(r16);
			PHALCON_CONCAT_VBOTH(r16, r17, " (", r18);
			PHALCON_ALLOC_ZVAL(r19);
			PHALCON_ALLOC_ZVAL(c1);
			ZVAL_STRING(c1, ", ", 1);
			PHALCON_CALL_FUNC_PARAMS_2(r19, "join", c1, v1, 0x00B);
			FREE_ZVAL(c1);
			PHALCON_ALLOC_ZVAL(r15);
			PHALCON_CONCAT_VBOTH(r15, r16, ") VALUES (", r19);
			PHALCON_ALLOC_ZVAL(r20);
			PHALCON_CONCAT_RIGHT(r20, r15, ")");
			PHALCON_CPY_WRT(v4, r20);
		} else {
			PHALCON_ALLOC_ZVAL(r22);
			PHALCON_CONCAT_LEFT(r22, "INSERT INTO ", v0);
			PHALCON_ALLOC_ZVAL(r23);
			PHALCON_ALLOC_ZVAL(c2);
			ZVAL_STRING(c2, ", ", 1);
			PHALCON_CALL_FUNC_PARAMS_2(r23, "join", c2, v1, 0x00B);
			FREE_ZVAL(c2);
			PHALCON_ALLOC_ZVAL(r21);
			PHALCON_CONCAT_VBOTH(r21, r22, " VALUES (", r23);
			PHALCON_ALLOC_ZVAL(r24);
			PHALCON_CONCAT_RIGHT(r24, r21, ")");
			PHALCON_CPY_WRT(v4, r24);
		}
		PHALCON_ALLOC_ZVAL(r25);
		Z_ADDREF_P(v4);
		p9[0] = v4;
		PHALCON_CALL_METHOD_PARAMS(r25, this_ptr, "query", 1, p9, PHALCON_CALL_DEFAULT);
		RETURN_ZVAL(r25, 1, 0);
	} else {
		PHALCON_ALLOC_ZVAL(i1);
		object_init_ex(i1, phalcon_db_exception_class_entry);
		PHALCON_ALLOC_ZVAL(p10[0]);
		ZVAL_STRING(p10[0], "The second parameter for insert isn't an Array", 1);
		PHALCON_ALLOC_ZVAL(p10[1]);
		ZVAL_LONG(p10[1], 0);
		PHALCON_ALLOC_ZVAL(p10[2]);
		ZVAL_BOOL(p10[2], 1);
		Z_ADDREF_P(this_ptr);
		p10[3] = this_ptr;
		PHALCON_CALL_METHOD_PARAMS_NORETURN(i1, "__construct", 4, p10, PHALCON_CALL_CHECK);
		zend_throw_exception_object(i1 TSRMLS_CC);
		Z_ADDREF_P(i1);
		return;
	}
	RETURN_NULL();
}

/**
 * Updates data on a table using custom RBDM SQL syntax
 *
 * 
 *
 * @param string $tables
 * @param array $fields
 * @param array $values
 * @param string $whereCondition
 * @param boolean $automaticQuotes
 * @return boolean
 */
PHP_METHOD(Phalcon_Db, update){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, *v5 = NULL, *v6 = NULL;
	zval *v7 = NULL, *v8 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL, *r6 = NULL;
	zval *r7 = NULL, *r8 = NULL, *r9 = NULL, *r10 = NULL, *r11 = NULL, *r12 = NULL, *r13 = NULL;
	zval *r14 = NULL, *r15 = NULL, *r16 = NULL, *r17 = NULL, *r18 = NULL, *r19 = NULL, *r20 = NULL;
	zval *r21 = NULL, *r22 = NULL, *r23 = NULL;
	zval *i0 = NULL;
	zval *a0 = NULL;
	zval *ac0 = NULL;
	zval *c0 = NULL;
	zval *t0 = NULL;
	zval *p2[] = { NULL, NULL, NULL, NULL }, *p8[] = { NULL };
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zzz|zz", &v0, &v1, &v2, &v3, &v4) == FAILURE) {
		RETURN_NULL();
	}

	if (!v3) {
		PHALCON_ALLOC_ZVAL(v3);
		ZVAL_NULL(v3);
	}
	if (!v4) {
		PHALCON_ALLOC_ZVAL(v4);
		ZVAL_BOOL(v4, 0);
	}
	
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CONCAT_BOTH(r0,  "UPDATE ", v0, " SET ");
	PHALCON_CPY_WRT(v5, r0);
	PHALCON_ALLOC_ZVAL(r1);
	PHALCON_CALL_FUNC_PARAMS_1(r1, "count", v1, 0x008);
	PHALCON_ALLOC_ZVAL(r2);
	PHALCON_CALL_FUNC_PARAMS_1(r2, "count", v2, 0x008);
	PHALCON_ALLOC_ZVAL(r3);
	is_not_equal_function(r3, r1, r2 TSRMLS_CC);
	if (zend_is_true(r3)) {
		PHALCON_ALLOC_ZVAL(i0);
		object_init_ex(i0, phalcon_db_exception_class_entry);
		PHALCON_ALLOC_ZVAL(p2[0]);
		ZVAL_STRING(p2[0], "The number of values to update is not the same as fields", 1);
		PHALCON_ALLOC_ZVAL(p2[1]);
		ZVAL_LONG(p2[1], 0);
		PHALCON_ALLOC_ZVAL(p2[2]);
		ZVAL_BOOL(p2[2], 1);
		Z_ADDREF_P(this_ptr);
		p2[3] = this_ptr;
		PHALCON_CALL_METHOD_PARAMS_NORETURN(i0, "__construct", 4, p2, PHALCON_CALL_CHECK);
		zend_throw_exception_object(i0 TSRMLS_CC);
		Z_ADDREF_P(i0);
		return;
	}
	PHALCON_ALLOC_ZVAL(v6);
	ZVAL_LONG(v6, 0);
	PHALCON_ALLOC_ZVAL(a0);
	array_init(a0);
	PHALCON_CPY_WRT(v7, a0);
	FOREACH_V(v1, ac0, fes15, fee15, ah0, hp0, v8)
		if (zend_is_true(v4)) {
			PHALCON_INIT_RESULT(r4);
			phalcon_array_fetch(r4, v2, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
			if (Z_TYPE_P(r4) == IS_OBJECT) {
				PHALCON_INIT_RESULT(r5);
				phalcon_array_fetch(r5, v2, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
				PHALCON_INIT_VARTYPE(r6, IS_BOOL);
				phalcon_instance_of(r6, r5, phalcon_db_rawvalue_class_entry TSRMLS_CC);
				if (zend_is_true(r6)) {
					PHALCON_INIT_RESULT(r7);
					PHALCON_INIT_RESULT(r8);
					PHALCON_INIT_RESULT(r9);
					phalcon_array_fetch(r9, v2, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
					PHALCON_CALL_METHOD(r8, r9, "getvalue", PHALCON_CALL_DEFAULT);
					Z_ADDREF_P(r8);
					PHALCON_CALL_FUNC_PARAMS_1(r7, "addslashes", r8, 0x01C);
					{
						zval *copy;
						ALLOC_ZVAL(copy);
						ZVAL_ZVAL(copy, r7, 1, 0);
						Z_SET_REFCOUNT_P(copy, 1);
						Z_UNSET_ISREF_P(copy);
						PHALCON_SEPARATE_PARAM(v2);
						phalcon_array_update(v2, v6, copy TSRMLS_CC);
					}
				} else {
					PHALCON_INIT_RESULT(r10);
					PHALCON_INIT_RESULT(r11);
					phalcon_array_fetch(r11, v2, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
					Z_ADDREF_P(r11);
					PHALCON_CALL_FUNC_PARAMS_1(r10, "addslashes", r11, 0x01C);
					PHALCON_INIT_RESULT(r12);
					PHALCON_CONCAT_BOTH(r12,  "'", r10, "'");
					{
						zval *copy;
						ALLOC_ZVAL(copy);
						ZVAL_ZVAL(copy, r12, 1, 0);
						Z_SET_REFCOUNT_P(copy, 1);
						Z_UNSET_ISREF_P(copy);
						PHALCON_SEPARATE_PARAM(v2);
						phalcon_array_update(v2, v6, copy TSRMLS_CC);
					}
				}
			} else {
				PHALCON_INIT_RESULT(r13);
				PHALCON_INIT_RESULT(r14);
				phalcon_array_fetch(r14, v2, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
				Z_ADDREF_P(r14);
				PHALCON_CALL_FUNC_PARAMS_1(r13, "addslashes", r14, 0x01C);
				PHALCON_INIT_RESULT(r15);
				PHALCON_CONCAT_BOTH(r15,  "'", r13, "'");
				{
					zval *copy;
					ALLOC_ZVAL(copy);
					ZVAL_ZVAL(copy, r15, 1, 0);
					Z_SET_REFCOUNT_P(copy, 1);
					Z_UNSET_ISREF_P(copy);
					PHALCON_SEPARATE_PARAM(v2);
					phalcon_array_update(v2, v6, copy TSRMLS_CC);
				}
			}
		}
		PHALCON_INIT_RESULT(r17);
		phalcon_array_fetch(r17, v2, v6, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_INIT_RESULT(r16);
		PHALCON_CONCAT_VBOTH(r16, v8, " = ", r17);
		{
			zval *copy;
			ALLOC_ZVAL(copy);
			ZVAL_ZVAL(copy, r16, 1, 0);
			Z_SET_REFCOUNT_P(copy, 1);
			Z_UNSET_ISREF_P(copy);
			PHALCON_SEPARATE(v7);
			phalcon_array_append(v7, copy TSRMLS_CC);
		}
		PHALCON_SEPARATE(v6);
		increment_function(v6);
	END_FOREACH(ac0, fes15, fee15, ah0, hp0);
	PHALCON_ALLOC_ZVAL(r18);
	PHALCON_ALLOC_ZVAL(c0);
	ZVAL_STRING(c0, ", ", 1);
	PHALCON_CALL_FUNC_PARAMS_2(r18, "join", c0, v7, 0x00B);
	FREE_ZVAL(c0);
	PHALCON_ALLOC_ZVAL(r19);
	concat_function(r19, v5, r18 TSRMLS_CC);
	PHALCON_CPY_WRT(v5, r19);
	PHALCON_ALLOC_ZVAL(t0);
	ZVAL_NULL(t0);
	PHALCON_ALLOC_ZVAL(r20);
	is_not_equal_function(r20, v3, t0 TSRMLS_CC);
	if (zend_is_true(r20)) {
		PHALCON_ALLOC_ZVAL(r21);
		PHALCON_CONCAT_LEFT(r21, " WHERE ", v3);
		PHALCON_ALLOC_ZVAL(r22);
		concat_function(r22, v5, r21 TSRMLS_CC);
		PHALCON_CPY_WRT(v5, r22);
	}
	PHALCON_ALLOC_ZVAL(r23);
	Z_ADDREF_P(v5);
	p8[0] = v5;
	PHALCON_CALL_METHOD_PARAMS(r23, this_ptr, "query", 1, p8, PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r23, 1, 0);
}

/**
 * Deletes data from a table using custom RBDM SQL syntax
 *
 * 
 *
 * @param string $tables
 * @param string $whereCondition
 * @return boolean
 */
PHP_METHOD(Phalcon_Db, delete){

	zval *v0 = NULL, *v1 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL, *r3 = NULL, *r4 = NULL, *r5 = NULL;
	zval *p1[] = { NULL }, *p2[] = { NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|z", &v0, &v1) == FAILURE) {
		RETURN_NULL();
	}

	if (!v1) {
		PHALCON_ALLOC_ZVAL(v1);
		ZVAL_STRING(v1, "", 0);
	}
	
	PHALCON_ALLOC_ZVAL(r0);
	Z_ADDREF_P(v1);
	PHALCON_CALL_FUNC_PARAMS_1(r0, "trim", v1, 0x01D);
	if (!PHALCON_COMPARE_STRING(r0, "")) {
		PHALCON_ALLOC_ZVAL(r1);
		PHALCON_ALLOC_ZVAL(r3);
		PHALCON_CONCAT_LEFT(r3, "DELETE FROM ", v0);
		PHALCON_ALLOC_ZVAL(r2);
		PHALCON_CONCAT_VBOTH(r2, r3, " WHERE ", v1);
		Z_ADDREF_P(r2);
		p1[0] = r2;
		PHALCON_CALL_METHOD_PARAMS(r1, this_ptr, "query", 1, p1, PHALCON_CALL_DEFAULT);
		RETURN_ZVAL(r1, 1, 0);
	} else {
		PHALCON_ALLOC_ZVAL(r4);
		PHALCON_ALLOC_ZVAL(r5);
		PHALCON_CONCAT_LEFT(r5, "DELETE FROM ", v0);
		Z_ADDREF_P(r5);
		p2[0] = r5;
		PHALCON_CALL_METHOD_PARAMS(r4, this_ptr, "query", 1, p2, PHALCON_CALL_DEFAULT);
		RETURN_ZVAL(r4, 1, 0);
	}
	RETURN_NULL();
}

/**
     * Starts a transaction in the connection
     *
     * @return boolean
     */
PHP_METHOD(Phalcon_Db, begin){

	zval *r0 = NULL;
	zval *p0[] = { NULL };

	zend_update_property_bool(Z_OBJCE_P(this_ptr), this_ptr, "_autoCommit", strlen("_autoCommit"), 0 TSRMLS_CC);
	zend_update_property_bool(Z_OBJCE_P(this_ptr), this_ptr, "_underTransaction", strlen("_underTransaction"), 1 TSRMLS_CC);
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_ALLOC_ZVAL(p0[0]);
	ZVAL_STRING(p0[0], "BEGIN", 1);
	PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "query", 1, p0, PHALCON_CALL_DEFAULT);
	RETURN_ZVAL(r0, 1, 0);
}

/**
     * Rollbacks the active transaction in the connection
     *
     * @return boolean
     */
PHP_METHOD(Phalcon_Db, rollback){

	zval *t0 = NULL;
	zval *r0 = NULL;
	zval *i0 = NULL;
	zval *p0[] = { NULL }, *p1[] = { NULL, NULL, NULL, NULL };

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_underTransaction", sizeof("_underTransaction")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	if (zend_is_true(t0)) {
		zend_update_property_bool(Z_OBJCE_P(this_ptr), this_ptr, "_underTransaction", strlen("_underTransaction"), 0 TSRMLS_CC);
		zend_update_property_bool(Z_OBJCE_P(this_ptr), this_ptr, "_autoCommit", strlen("_autoCommit"), 1 TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(r0);
		PHALCON_ALLOC_ZVAL(p0[0]);
		ZVAL_STRING(p0[0], "ROLLBACK", 1);
		PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "query", 1, p0, PHALCON_CALL_DEFAULT);
		RETURN_ZVAL(r0, 1, 0);
	} else {
		PHALCON_ALLOC_ZVAL(i0);
		object_init_ex(i0, phalcon_db_exception_class_entry);
		PHALCON_ALLOC_ZVAL(p1[0]);
		ZVAL_STRING(p1[0], "There is not an active transaction on relational manager", 1);
		PHALCON_ALLOC_ZVAL(p1[1]);
		ZVAL_LONG(p1[1], 0);
		PHALCON_ALLOC_ZVAL(p1[2]);
		ZVAL_BOOL(p1[2], 1);
		Z_ADDREF_P(this_ptr);
		p1[3] = this_ptr;
		PHALCON_CALL_METHOD_PARAMS_NORETURN(i0, "__construct", 4, p1, PHALCON_CALL_CHECK);
		zend_throw_exception_object(i0 TSRMLS_CC);
		Z_ADDREF_P(i0);
		return;
	}
	RETURN_NULL();
}

/**
     * Commits the active transaction in the connection
     *
     * @return boolean
     */
PHP_METHOD(Phalcon_Db, commit){

	zval *t0 = NULL;
	zval *r0 = NULL;
	zval *i0 = NULL;
	zval *p0[] = { NULL }, *p1[] = { NULL, NULL, NULL, NULL };

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_underTransaction", sizeof("_underTransaction")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	if (zend_is_true(t0)) {
		zend_update_property_bool(Z_OBJCE_P(this_ptr), this_ptr, "_underTransaction", strlen("_underTransaction"), 0 TSRMLS_CC);
		zend_update_property_bool(Z_OBJCE_P(this_ptr), this_ptr, "_autoCommit", strlen("_autoCommit"), 1 TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(r0);
		PHALCON_ALLOC_ZVAL(p0[0]);
		ZVAL_STRING(p0[0], "COMMIT", 1);
		PHALCON_CALL_METHOD_PARAMS(r0, this_ptr, "query", 1, p0, PHALCON_CALL_DEFAULT);
		RETURN_ZVAL(r0, 1, 0);
	} else {
		PHALCON_ALLOC_ZVAL(i0);
		object_init_ex(i0, phalcon_db_exception_class_entry);
		PHALCON_ALLOC_ZVAL(p1[0]);
		ZVAL_STRING(p1[0], "There is not an active transaction on relational manager", 1);
		PHALCON_ALLOC_ZVAL(p1[1]);
		ZVAL_LONG(p1[1], 0);
		PHALCON_ALLOC_ZVAL(p1[2]);
		ZVAL_BOOL(p1[2], 1);
		Z_ADDREF_P(this_ptr);
		p1[3] = this_ptr;
		PHALCON_CALL_METHOD_PARAMS_NORETURN(i0, "__construct", 4, p1, PHALCON_CALL_CHECK);
		zend_throw_exception_object(i0 TSRMLS_CC);
		Z_ADDREF_P(i0);
		return;
	}
	RETURN_NULL();
}

/**
 * Manually sets a "under transaction" state for the connection
 *
 * @param boolean $underTransaction
 */
PHP_METHOD(Phalcon_Db, setUnderTransaction){

	zval *v0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_UPDATE_PROPERTY_CPY(this_ptr, "_underTransaction", v0);
	RETURN_NULL();
}

/**
 * Checks whether connection is under database transaction
 *
 * @return boolean
 */
PHP_METHOD(Phalcon_Db, isUnderTransaction){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_underTransaction", sizeof("_underTransaction")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

/**
 * Checks whether connection have auto commit
 *
 * @return boolean
 */
PHP_METHOD(Phalcon_Db, getHaveAutoCommit){

	zval *t0 = NULL;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_autoCommit", sizeof("_autoCommit")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

/**
 * Returns database name in the internal connection
 *
 * @return string
 */
PHP_METHOD(Phalcon_Db, getDatabaseName){

	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	eval_int = phalcon_isset_property(t0, "name", strlen("name") TSRMLS_CC);
	if (eval_int) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_read_property(t1, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(t2);
		phalcon_read_property(t2, t1, "name", sizeof("name")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_RETURN_CHECK_CTOR(t2);
	} else {
		RETURN_STRING("", 1);
	}
	RETURN_NULL();
}

/**
 * Returns active schema name in the internal connection
 *
 * @return string
 */
PHP_METHOD(Phalcon_Db, getDefaultSchema){

	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL, *t4 = NULL, *t5 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	eval_int = phalcon_isset_property(t0, "schema", strlen("schema") TSRMLS_CC);
	if (eval_int) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_read_property(t1, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(t2);
		phalcon_read_property(t2, t1, "schema", sizeof("schema")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_RETURN_CHECK_CTOR(t2);
	} else {
		PHALCON_ALLOC_ZVAL(t3);
		phalcon_read_property(t3, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		eval_int = phalcon_isset_property(t3, "name", strlen("name") TSRMLS_CC);
		if (eval_int) {
			PHALCON_ALLOC_ZVAL(t4);
			phalcon_read_property(t4, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
			PHALCON_ALLOC_ZVAL(t5);
			phalcon_read_property(t5, t4, "name", sizeof("name")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
			PHALCON_RETURN_CHECK_CTOR(t5);
		} else {
			RETURN_STRING("", 1);
		}
	}
	RETURN_NULL();
}

/**
 * Returns the username which has connected to the database
 *
 * @return string
 */
PHP_METHOD(Phalcon_Db, getUsername){

	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	eval_int = phalcon_isset_property(t0, "username", strlen("username") TSRMLS_CC);
	if (eval_int) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_read_property(t1, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(t2);
		phalcon_read_property(t2, t1, "username", sizeof("username")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_RETURN_CHECK_CTOR(t2);
	} else {
		RETURN_STRING("", 1);
	}
	RETURN_NULL();
}

/**
 * Returns the username which has connected to the database
     *
 * @return string
 */
PHP_METHOD(Phalcon_Db, getHostName){

	zval *t0 = NULL, *t1 = NULL, *t2 = NULL;
	int eval_int;

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	eval_int = phalcon_isset_property(t0, "host", strlen("host") TSRMLS_CC);
	if (eval_int) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_read_property(t1, this_ptr, "_descriptor", sizeof("_descriptor")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(t2);
		phalcon_read_property(t2, t1, "host", sizeof("host")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_RETURN_CHECK_CTOR(t2);
	} else {
		RETURN_STRING("", 1);
	}
	RETURN_NULL();
}

/**
 * Gets a active connection unique identifier
 *
 * @return string
 */
PHP_METHOD(Phalcon_Db, getConnectionId){

	zval *v0 = NULL;
	zval *t0 = NULL;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "|z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	if (!v0) {
		PHALCON_ALLOC_ZVAL(v0);
		ZVAL_BOOL(v0, 0);
	}
	
	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_idConnection", sizeof("_idConnection")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	PHALCON_RETURN_CHECK_CTOR(t0);
}

/**
 * Instantiates Phalcon_Db adapter using given parameters
 *
 * @param string $adapterName
 * @param stdClass $options
 * @param boolean $persistent
 * @return Phalcon_Db
 */
PHP_METHOD(Phalcon_Db, factory){

	zval *v0 = NULL, *v1 = NULL, *v2 = NULL, *v3 = NULL, *v4 = NULL, *v5 = NULL, *v6 = NULL;
	zval *v7 = NULL;
	zval *i0 = NULL, *i1 = NULL, *i2 = NULL, *i3 = NULL, *i4 = NULL;
	zval *ac0 = NULL;
	zval *t0 = NULL;
	zval *r0 = NULL, *r1 = NULL, *r2 = NULL;
	zval *p0[] = { NULL, NULL, NULL, NULL }, *p1[] = { NULL, NULL, NULL, NULL }, *p3[] = { NULL, NULL }, *p4[] = { NULL, NULL, NULL, NULL };
	HashTable *ah0;
	HashPosition hp0;
	zval **hd;
	char *index;
	uint index_len;
	ulong num;
	int htype;
	int eval_int;
	zend_class_entry *ce0;

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz|z", &v0, &v1, &v2) == FAILURE) {
		RETURN_NULL();
	}

	if (!v2) {
		PHALCON_ALLOC_ZVAL(v2);
		ZVAL_BOOL(v2, 0);
	}
	
	if (PHALCON_COMPARE_STRING(v0, "")) {
		PHALCON_ALLOC_ZVAL(i0);
		object_init_ex(i0, phalcon_db_exception_class_entry);
		PHALCON_ALLOC_ZVAL(p0[0]);
		ZVAL_STRING(p0[0], "A valid adapter name is required", 1);
		PHALCON_ALLOC_ZVAL(p0[1]);
		ZVAL_LONG(p0[1], 0);
		PHALCON_ALLOC_ZVAL(p0[2]);
		ZVAL_BOOL(p0[2], 1);
		PHALCON_ALLOC_ZVAL(p0[3]);
		ZVAL_NULL(p0[3]);
		PHALCON_CALL_METHOD_PARAMS_NORETURN(i0, "__construct", 4, p0, PHALCON_CALL_CHECK);
		zend_throw_exception_object(i0 TSRMLS_CC);
		Z_ADDREF_P(i0);
		return;
	}
	if (Z_TYPE_P(v1) != IS_ARRAY) { 
		if (Z_TYPE_P(v1) != IS_OBJECT) {
			PHALCON_ALLOC_ZVAL(i1);
			object_init_ex(i1, phalcon_db_exception_class_entry);
			PHALCON_ALLOC_ZVAL(p1[0]);
			ZVAL_STRING(p1[0], "The parameter 'options' must be an Array or Object", 1);
			PHALCON_ALLOC_ZVAL(p1[1]);
			ZVAL_LONG(p1[1], 0);
			PHALCON_ALLOC_ZVAL(p1[2]);
			ZVAL_BOOL(p1[2], 1);
			PHALCON_ALLOC_ZVAL(p1[3]);
			ZVAL_NULL(p1[3]);
			PHALCON_CALL_METHOD_PARAMS_NORETURN(i1, "__construct", 4, p1, PHALCON_CALL_CHECK);
			zend_throw_exception_object(i1 TSRMLS_CC);
			Z_ADDREF_P(i1);
			return;
		}
	}
	if (Z_TYPE_P(v1) == IS_ARRAY) { 
		PHALCON_ALLOC_ZVAL(i2);
		object_init(i2);
		PHALCON_CPY_WRT(v3, i2);
		FOREACH_KV(v1, ac0, fes16, fee16, ah0, hp0, v5, v4)
			PHALCON_UPDATE_PROPERTY_CPY(v3, Z_STRVAL_P(v5), v4);
		END_FOREACH(ac0, fes16, fee16, ah0, hp0);
	} else {
		PHALCON_CPY_WRT(v3, v1);
	}
	eval_int = phalcon_isset_property(v3, "layer", strlen("layer") TSRMLS_CC);
	if (eval_int) {
		PHALCON_ALLOC_ZVAL(t0);
		phalcon_read_property(t0, v3, "layer", sizeof("layer")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_CPY_WRT(v6, t0);
	} else {
		PHALCON_ALLOC_ZVAL(v6);
		ZVAL_STRING(v6, "native", 0);
	}
	PHALCON_ALLOC_ZVAL(r0);
	PHALCON_CONCAT_LEFT(r0, "Phalcon_Db_", v0);
	PHALCON_CPY_WRT(v7, r0);
	PHALCON_ALLOC_ZVAL(r1);
	Z_ADDREF_P(v7);
	PHALCON_CALL_FUNC_PARAMS_1(r1, "class_exists", v7, 0x000);
	if (zend_is_true(r1)) {
		ce0 = zend_fetch_class(Z_STRVAL_P(v7), Z_STRLEN_P(v7), ZEND_FETCH_CLASS_DEFAULT TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(i3);
		object_init_ex(i3, ce0);
		Z_ADDREF_P(v3);
		p3[0] = v3;
		Z_ADDREF_P(v2);
		p3[1] = v2;
		PHALCON_CALL_METHOD_PARAMS_NORETURN(i3, "__construct", 2, p3, PHALCON_CALL_CHECK);
		PHALCON_RETURN_CTOR(i3);
	} else {
		PHALCON_ALLOC_ZVAL(i4);
		object_init_ex(i4, phalcon_db_exception_class_entry);
		PHALCON_ALLOC_ZVAL(r2);
		PHALCON_CONCAT_BOTH(r2,  "Database adapter class ", v7, " was not found");
		Z_ADDREF_P(r2);
		p4[0] = r2;
		PHALCON_ALLOC_ZVAL(p4[1]);
		ZVAL_LONG(p4[1], 0);
		PHALCON_ALLOC_ZVAL(p4[2]);
		ZVAL_BOOL(p4[2], 1);
		PHALCON_ALLOC_ZVAL(p4[3]);
		ZVAL_NULL(p4[3]);
		PHALCON_CALL_METHOD_PARAMS_NORETURN(i4, "__construct", 4, p4, PHALCON_CALL_CHECK);
		zend_throw_exception_object(i4 TSRMLS_CC);
		Z_ADDREF_P(i4);
		return;
	}
	RETURN_NULL();
}

PHP_METHOD(Phalcon_Db, _beforeQuery){

	zval *v0 = NULL;
	zval *t0 = NULL, *t1 = NULL, *t2 = NULL, *t3 = NULL;
	zval *r0 = NULL, *r1 = NULL;
	zval *p0[] = { NULL, NULL };

	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &v0) == FAILURE) {
		RETURN_NULL();
	}

	PHALCON_ALLOC_ZVAL(t0);
	phalcon_read_property(t0, this_ptr, "_logger", sizeof("_logger")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
	if (zend_is_true(t0)) {
		PHALCON_ALLOC_ZVAL(t1);
		phalcon_read_property(t1, this_ptr, "_logger", sizeof("_logger")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(t2);
		phalcon_read_property(t2, this_ptr, "_idConnection", sizeof("_idConnection")-1, PHALCON_NOISY_FETCH TSRMLS_CC);
		PHALCON_ALLOC_ZVAL(r1);
		PHALCON_CONCAT_LEFT(r1, "[", t2);
		PHALCON_ALLOC_ZVAL(r0);
		PHALCON_CONCAT_VBOTH(r0, r1, "] ", v0);
		Z_ADDREF_P(r0);
		p0[0] = r0;
		PHALCON_ALLOC_ZVAL(t3);
		phalcon_get_class_constant(t3, phalcon_logger_class_entry, "DEBUG", strlen("DEBUG") TSRMLS_CC);
		Z_ADDREF_P(t3);
		p0[1] = t3;
		PHALCON_CALL_METHOD_PARAMS_NORETURN(t1, "log", 2, p0, PHALCON_CALL_DEFAULT);
	}
	RETURN_NULL();
}

