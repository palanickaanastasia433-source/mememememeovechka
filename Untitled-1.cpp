.LC0:
        .string "Current Time is:\n"
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     edi, 0
        call    time
        mov     QWORD PTR [rbp-16], rax
        lea     rax, [rbp-16]
        mov     rdi, rax
        call    ctime
        mov     QWORD PTR [rbp-8], rax
        mov     esi, OFFSET FLAT:.LC0
        mov     edi, OFFSET FLAT:std::cout
        call    std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&, char const*)
        mov     rdx, rax
        mov     rax, QWORD PTR [rbp-8]
        mov     rsi, rax
        mov     rdi, rdx
        call    std::basic_ostream<char, std::char_traits<char>>& std::operator<<<std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&, char const*)
        mov     eax, 0
        leave
        ret