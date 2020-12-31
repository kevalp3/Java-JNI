package com.test.jni;

public class ParamerExampleJNI {
	
	static {
		System.loadLibrary("native");
	}
	
	public static void main(String[] args) {
		ParamerExampleJNI jni = new ParamerExampleJNI();
		System.out.println(jni.sum(10,20));
		System.out.println(jni.sayHello("ABC", false));
		System.out.println(jni.sayHello("XYZ", true));
	}
	
	private native long sum(int a, int b);
	private native String sayHello(String name, boolean isFemale);
}