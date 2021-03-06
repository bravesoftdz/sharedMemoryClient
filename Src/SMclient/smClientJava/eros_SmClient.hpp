/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class eros_SmClient */

#ifndef _Included_eros_SmClient
#define _Included_eros_SmClient
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     eros_SmClient
 * Method:    openMemory
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_eros_SmClient_openMemory
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     eros_SmClient
 * Method:    getInt
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_eros_SmClient_getInt
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     eros_SmClient
 * Method:    setInt
 * Signature: (Ljava/lang/String;II)V
 */
JNIEXPORT void JNICALL Java_eros_SmClient_setInt
  (JNIEnv *, jobject, jstring, jint, jint);

/*
 * Class:     eros_SmClient
 * Method:    setFloat
 * Signature: (Ljava/lang/String;IF)V
 */
JNIEXPORT void JNICALL Java_eros_SmClient_setFloat
  (JNIEnv *, jobject, jstring, jint, jfloat);

/*
 * Class:     eros_SmClient
 * Method:    getFloat
 * Signature: (Ljava/lang/String;I)F
 */
JNIEXPORT jfloat JNICALL Java_eros_SmClient_getFloat
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     eros_SmClient
 * Method:    setDouble
 * Signature: (Ljava/lang/String;ID)V
 */
JNIEXPORT void JNICALL Java_eros_SmClient_setDouble
  (JNIEnv *, jobject, jstring, jint, jdouble);

/*
 * Class:     eros_SmClient
 * Method:    getDouble
 * Signature: (Ljava/lang/String;I)D
 */
JNIEXPORT jdouble JNICALL Java_eros_SmClient_getDouble
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     eros_SmClient
 * Method:    setString
 * Signature: (Ljava/lang/String;ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_eros_SmClient_setString
  (JNIEnv *, jobject, jstring, jint, jstring);

/*
 * Class:     eros_SmClient
 * Method:    getString
 * Signature: (Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_eros_SmClient_getString
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     eros_SmClient
 * Method:    createMemory
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_eros_SmClient_createMemory
  (JNIEnv *, jobject, jstring, jint, jint);

/*
 * Class:     eros_SmClient
 * Method:    freeMemories
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_eros_SmClient_freeMemories
  (JNIEnv *, jobject);

/*
 * Class:     eros_SmClient
 * Method:    freeViews
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_eros_SmClient_freeViews
  (JNIEnv *, jobject);
  
#ifdef __cplusplus
}
#endif
#endif
