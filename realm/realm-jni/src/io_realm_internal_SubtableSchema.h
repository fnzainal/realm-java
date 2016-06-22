/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_realm_internal_SubtableSchema */

#ifndef _Included_io_realm_internal_SubtableSchema
#define _Included_io_realm_internal_SubtableSchema
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_realm_internal_SubtableSchema
 * Method:    nativeAddColumn
 * Signature: (J[JILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_SubtableSchema_nativeAddColumn
  (JNIEnv *, jobject, jlong, jlongArray, jint, jstring);

/*
 * Class:     io_realm_internal_SubtableSchema
 * Method:    nativeRemoveColumn
 * Signature: (J[JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SubtableSchema_nativeRemoveColumn
  (JNIEnv *, jobject, jlong, jlongArray, jlong);

/*
 * Class:     io_realm_internal_SubtableSchema
 * Method:    nativeRenameColumn
 * Signature: (J[JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_SubtableSchema_nativeRenameColumn
  (JNIEnv *, jobject, jlong, jlongArray, jlong, jstring);

#ifdef __cplusplus
}
#endif
#endif