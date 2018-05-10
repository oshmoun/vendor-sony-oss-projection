/*
 * Copyright (C) 2018 AngeloGioacchino Del Regno <kholk11@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <jni.h>
#include <string>

#define LOG_TAG "ProjectorSettingsJNI"
#include <android/log.h>
#include <stdio.h>

extern "C" {
#include <comm_server/ucomm_ext.h>
}

extern "C"
JNIEXPORT jint JNICALL
Java_sonyxperiadev_projectorsettings_MainActivity_ucommsvrSetFocus(
        JNIEnv *env, jobject obj,
        jint focus) {

    return ucommsvr_set_focus((int)focus);
}

extern "C"
JNIEXPORT jint JNICALL
Java_sonyxperiadev_projectorsettings_MainActivity_ucommsvrDoAutoFocus(
        JNIEnv *env,
        jobject obj) {

    return ucommsvr_do_autofocus();
}

extern "C"
JNIEXPORT jint JNICALL
Java_sonyxperiadev_projectorsettings_MainActivity_ucommsvrSetKeystone(
        JNIEnv *env, jobject obj,
        jint ksval) {

    return ucommsvr_set_keystone((int)ksval);
}

extern "C"
JNIEXPORT jint JNICALL
Java_sonyxperiadev_projectorsettings_MainActivity_ucommsvrGetKeystone(
        JNIEnv *env,
        jobject /*this*/) {

    return ucommsvr_get_keystone();
}

extern "C"
JNIEXPORT jint JNICALL
Java_sonyxperiadev_projectorsettings_MainActivity_ucommsvrGetFocus(
        JNIEnv *env,
        jobject /*this*/) {

    return ucommsvr_get_focus();
}

