/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class oculusvr_input_OculusRift */

#ifndef _Included_oculusvr_input_OculusRift
#define _Included_oculusvr_input_OculusRift
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     oculusvr_input_OculusRift
 * Method:    initialize
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_oculusvr_input_OculusRift_initialize
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    update
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_oculusvr_input_OculusRift_update
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getHResolution
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_oculusvr_input_OculusRift_getHResolution
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getVResolution
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_oculusvr_input_OculusRift_getVResolution
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getHScreenSize
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_oculusvr_input_OculusRift_getHScreenSize
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getVScreenSize
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_oculusvr_input_OculusRift_getVScreenSize
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getVScreenCenter
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_oculusvr_input_OculusRift_getVScreenCenter
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getEyeToScreenDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_oculusvr_input_OculusRift_getEyeToScreenDistance
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getLensSeparationDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_oculusvr_input_OculusRift_getLensSeparationDistance
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getInterpupillaryDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_oculusvr_input_OculusRift_getInterpupillaryDistance
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getDistortionK
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_oculusvr_input_OculusRift_getDistortionK
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getDesktopX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_oculusvr_input_OculusRift_getDesktopX
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getDesktopY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_oculusvr_input_OculusRift_getDesktopY
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getDisplayDeviceName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_oculusvr_input_OculusRift_getDisplayDeviceName
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getDisplayId
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_oculusvr_input_OculusRift_getDisplayId
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_oculusvr_input_OculusRift_destroy
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getOrientation
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_oculusvr_input_OculusRift_getOrientation
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    getAcceleration
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_oculusvr_input_OculusRift_getAcceleration
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    reset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_oculusvr_input_OculusRift_reset
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    predictive
 * Signature: (FZ)V
 */
JNIEXPORT void JNICALL Java_oculusvr_input_OculusRift_predictive
  (JNIEnv *, jobject, jfloat, jboolean);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    latencyTestColor
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_oculusvr_input_OculusRift_latencyTestColor
  (JNIEnv *, jobject);

/*
 * Class:     oculusvr_input_OculusRift
 * Method:    latencyTestResult
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_oculusvr_input_OculusRift_latencyTestResult
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
