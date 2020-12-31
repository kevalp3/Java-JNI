#include <iostream>
#include <jni.h>
#include "com_test_jni_ParamerExampleJNI.h"

JNIEXPORT jlong JNICALL Java_com_test_jni_ParamerExampleJNI_sum (JNIEnv * env, jobject thisObj, jint a, jint b) {
	std::cout << "Number received for sum are " << a << " and " << b << std::endl;
	return (long) a + (long) b;
}
  
JNIEXPORT jstring JNICALL Java_com_test_jni_ParamerExampleJNI_sayHello (JNIEnv * env, jobject thisObj, jstring name, jboolean isFemale) {
	
	
	const char* nameCharPointer = env->GetStringUTFChars(name, NULL); 
	
	std::string title;
	
	if(isFemale) {
		title = "Hello!! Ms. ";
	} else {
		title = "Hello!! Mr. ";
	}
	
	std::string value = title + nameCharPointer;
	return env->NewStringUTF(value.c_str());
}