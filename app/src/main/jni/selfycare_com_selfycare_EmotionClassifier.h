/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class selfycare_com_selfycare_EmotionClassifier */

#ifndef _Included_selfycare_com_selfycare_EmotionClassifier
#define _Included_selfycare_com_selfycare_EmotionClassifier
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     selfycare_com_selfycare_EmotionClassifier
 * Method:    nativeInit
 * Signature: (Ljava/lang/String;Ljava/lang/String;IIIII[Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_selfycare_com_selfycare_EmotionClassifier_nativeInit
  (JNIEnv *, jclass, jstring, jstring, jint, jint, jint, jint, jint, jobjectArray);

/*
 * Class:     selfycare_com_selfycare_EmotionClassifier
 * Method:    nativeClassify
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_selfycare_com_selfycare_EmotionClassifier_nativeClassify
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     selfycare_com_selfycare_EmotionClassifier
 * Method:    nativeDestroyObject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_selfycare_com_selfycare_EmotionClassifier_nativeDestroyObject
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif