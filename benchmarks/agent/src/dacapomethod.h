#ifndef DACAPO_METHOD_H
#define DACAPO_METHOD_H

#include "dacapo.h"

void method_init();
void method_capabilities(const jvmtiCapabilities* availableCapabilities, jvmtiCapabilities* capabilities);
void method_callbacks(const jvmtiCapabilities* capabilities, jvmtiEventCallbacks* callbacks);

void JNICALL callbackMethodEntry(jvmtiEnv *jvmti_env, JNIEnv* jni_env, jthread thread, jmethodID method);
void JNICALL callbackMethodExit(jvmtiEnv *jvmti_env, JNIEnv* jni_env, jthread thread, jmethodID method, jboolean was_popped_by_exception, jvalue return_value);

#endif
