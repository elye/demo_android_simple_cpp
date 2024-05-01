package com.elyeproj.simplecppandroid

class Native {
    companion object {
        init {
            System.loadLibrary("native-lib")
        }
    }

    external fun getCppMessage(): String

    external fun add2Values(a: Int, b:Int): Int
}
