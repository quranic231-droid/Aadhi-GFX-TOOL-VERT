#include <jni.h>
#include <string>

extern "C" {

    // ═══════════════════════════════════════════════════════════
    //  MAIN ACTIVITY
    // ═══════════════════════════════════════════════════════════
    JNIEXPORT jstring JNICALL Java_com_aadhigfx_vip_MainActivity_getLoginUrl(JNIEnv *env, jobject) {
        return env->NewStringUTF("https://quranic231-droid.github.io/Aadhi-GFX-Web/sign.html");
    }

    JNIEXPORT jstring JNICALL Java_com_aadhigfx_vip_MainActivity_getAllowedDomain(JNIEnv *env, jobject) {
        return env->NewStringUTF("quranic231-droid.github.io");
    }

    JNIEXPORT jstring JNICALL Java_com_aadhigfx_vip_MainActivity_getSecureURL(JNIEnv *env, jobject) {
        return env->NewStringUTF("https://gfx-tool-f7939-default-rtdb.firebaseio.com/");
    }

    // ═══════════════════════════════════════════════════════════
    //  DASHBOARD ACTIVITY
    // ═══════════════════════════════════════════════════════════
    JNIEXPORT jstring JNICALL Java_com_aadhigfx_vip_DashboardActivity_getDashboardUrl(JNIEnv *env, jobject) {
        return env->NewStringUTF("https://quranic231-droid.github.io/Aadhi-GFX-Web/vip.html");
    }

    JNIEXPORT jstring JNICALL Java_com_aadhigfx_vip_DashboardActivity_getAllowedDomain(JNIEnv *env, jobject) {
        return env->NewStringUTF("quranic231-droid.github.io");
    }

    JNIEXPORT jstring JNICALL Java_com_aadhigfx_vip_DashboardActivity_getSecureURL(JNIEnv *env, jobject) {
        return env->NewStringUTF("https://gfx-tool-f7939-default-rtdb.firebaseio.com/");
    }

    JNIEXPORT jstring JNICALL Java_com_aadhigfx_vip_DashboardActivity_getAntiBanCmd(JNIEnv *env, jobject) {
        return env->NewStringUTF("rm -rf /storage/emulated/0/Android/data/com.pubg.imobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs && rm -rf /storage/emulated/0/Android/data/com.pubg.imobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Crashes && sync");
    }

    // ═══════════════════════════════════════════════════════════
    //  FLOATING WINDOW SERVICE
    // ═══════════════════════════════════════════════════════════
    JNIEXPORT jstring JNICALL Java_com_aadhigfx_vip_FloatingWindowService_getFloatUrl(JNIEnv *env, jobject) {
        return env->NewStringUTF("https://quranic231-droid.github.io/Aadhi-GFX-Web/float.html");
    }
}
