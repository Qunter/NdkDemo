//
// Created by Administrator on 2017/7/5.
//
#include <jni.h>
#include <string>

extern "C" {
JNIEXPORT jstring JNICALL Java_qunter_ndkdemo_HelloNDK_getInfo(JNIEnv *, jclass, jobject);
}
JNIEXPORT jstring JNICALL
Java_qunter_ndkdemo_HelloNDK_getInfo(JNIEnv *env, jclass type, jobject o) {

    return env->NewStringUTF("Hello from JNI bear c++");
}