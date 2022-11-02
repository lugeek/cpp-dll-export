#pragma once

#include <string>

MY_LIB_EXPORT std::string simple_lib_function();

class MY_LIB_EXPORT Myclass {
    public:
        int var1 = 1;
        static int var2;
        const int var3 = 3;
        static const int var4 = 4;
        void hello();
        static void hello1();
        void hello2() const { printf("hello2"); }
        static void hello3() { printf("hello3"); }
};


// dumpbin /exports .\MyLibExample.lib
// ??0Myclass@@QEAA@XZ (public: __cdecl Myclass::Myclass(void))
// ?hello1@Myclass@@SAXXZ (public: static void __cdecl Myclass::hello1(void))
// ?hello2@Myclass@@QEBAXXZ (public: void __cdecl Myclass::hello2(void)const )
// ?hello3@Myclass@@SAXXZ (public: static void __cdecl Myclass::hello3(void))
// ?hello@Myclass@@QEAAXXZ (public: void __cdecl Myclass::hello(void))
// ?simple_lib_function@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ (class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl simple_lib_function(void))
// ?var2@Myclass@@2HA (public: static int Myclass::var2)
// ?var4@Myclass@@2HB (public: static int const Myclass::var4)

// 所有方法都能正常导出
// 只有静态成员变量被导出