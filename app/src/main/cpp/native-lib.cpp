#include <jni.h>

extern "C"
JNIEXPORT jint JNICALL
Java_com_elyeproj_simplecppandroid_Native_add2Values(JNIEnv *env, jobject thiz, jint a, jint b) {
    return a + b;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_elyeproj_simplecppandroid_Native_getCppMessage(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF("C++ World");
}