#include <jni.h>
#include <string>
#include <android/log.h>
extern "C" {
//编码

#include "libavformat/avformat.h"

}


extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_huozhenpeng_ffmpegdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject obj) {

    av_register_all();
    const char *str="hello from jni";
    return env->NewStringUTF(str);


}


