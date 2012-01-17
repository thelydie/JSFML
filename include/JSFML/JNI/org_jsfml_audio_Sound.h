/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_audio_Sound */

#ifndef _Included_org_jsfml_audio_Sound
#define _Included_org_jsfml_audio_Sound
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: debug */
/* Inaccessible static: numManaged */
/* Inaccessible static: numWrapped */
/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_Sound_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeCopy
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_Sound_nativeCopy
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    play
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_play
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    pause
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_pause
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_stop
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeSetBuffer
 * Signature: (Lorg/jsfml/audio/SoundBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_nativeSetBuffer
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    setLoop
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_setLoop
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    setPlayingOffset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_setPlayingOffset
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    isLoop
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_Sound_isLoop
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    getPlayingOffset
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_Sound_getPlayingOffset
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeGetStatus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_Sound_nativeGetStatus
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    setPitch
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_setPitch
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    setVolume
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_setVolume
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    setPosition
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_setPosition
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    setRelativeToListener
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_setRelativeToListener
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    setMinDistance
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_setMinDistance
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    setAttenuation
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_setAttenuation
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    getPitch
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_audio_Sound_getPitch
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    getVolume
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_audio_Sound_getVolume
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    getPosition
 * Signature: ()Lorg/jsfml/system/Vector3f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_audio_Sound_getPosition
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    isRelativeToListener
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_Sound_isRelativeToListener
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    getMinDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_audio_Sound_getMinDistance
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    getAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_audio_Sound_getAttenuation
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
