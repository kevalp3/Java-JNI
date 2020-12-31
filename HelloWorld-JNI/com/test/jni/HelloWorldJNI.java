package com.test.jni;

public class HelloWorldJNI {
	
	static {
		System.loadLibrary("native");
	}
	
	public static void main(String[] args) {
		HelloWorldJNI jni = new HelloWorldJNI();
		jni.sayHello();
		jni.sayHello2();
	}
	
	private native void sayHello();
	private native void sayHello2();
}