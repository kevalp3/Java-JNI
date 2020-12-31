#include <iostream>
#include "com_test_jni_HelloWorldJNI.h"
#include <jni.h>

JNIEXPORT void JNICALL Java_com_test_jni_HelloWorldJNI_sayHello (JNIEnv *, jobject thisObj) {
    std::cout << "Hello from C++ !!" << std::endl;
}

JNIEXPORT void JNICALL Java_com_test_jni_HelloWorldJNI_sayHello2 (JNIEnv *, jobject thisObj) {
	std::cout << "Hello from C++ !!" << std::endl;
}