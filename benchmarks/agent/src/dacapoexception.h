#ifndef DACAPO_EXCEPTION_H
#define DACAPO_EXCEPTION_H

#include "dacapo.h"

void exception_init();
void exception_capabilities(const jvmtiCapabilities* availableCapabilities, jvmtiCapabilities* capabilities);
void exception_callbacks(const jvmtiCapabilities* capabilities, jvmtiEventCallbacks* callbacks);

void JNICALL callbackException(jvmtiEnv *jvmti_env, JNIEnv* jni_env, jthread thread, jmethodID method, jlocation location, jobject exception, jmethodID catch_method, jlocation catch_location);
void JNICALL callbackExceptionCatch(jvmtiEnv *jvmti_env, JNIEnv* jni_env, jthread thread, jmethodID method, jlocation location, jobject exception);

#endif
