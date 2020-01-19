#include "../../include/ft_printf.h"

int main()
{
  char * string = "string";
  int test = 0;

ft_printf("\n1---->");
ft_printf("");                                ft_printf("\n2---->");  ft_printf( ""); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("\\n");                             ft_printf("\n2---->");  ft_printf( "\\n"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("test");                            ft_printf("\n2---->");  ft_printf( "test"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("test\\n");                         ft_printf("\n2---->");  ft_printf( "test\\n"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("1234");                            ft_printf("\n2---->");  ft_printf( "1234"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%%");                              ft_printf("\n2---->");  ft_printf( "%"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%5%");                             ft_printf("\n2---->");  ft_printf( "    %"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-5%");                            ft_printf("\n2---->");  ft_printf( "%    "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%.0%");                            ft_printf("\n2---->");  ft_printf( "%"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%%", "test");                      ft_printf("\n2---->");  ft_printf( "%"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%   %", "test");                   ft_printf("\n2---->");  ft_printf( "%"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%x", 42);                          ft_printf("\n2---->");  ft_printf( "2a"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%X", 42);                          ft_printf("\n2---->");  ft_printf( "2A"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%x", 0);                           ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%X", 0);                           ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%x", -42);                         ft_printf("\n2---->");  ft_printf( "ffffffd6"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%X", -42);                         ft_printf("\n2---->");  ft_printf( "FFFFFFD6"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%x", 4294967296);                  ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%X", 4294967296);                  ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%x", test);                        ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%10x", 42);                        ft_printf("\n2---->");  ft_printf( "        2a"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-10x", 42);                       ft_printf("\n2---->");  ft_printf( "2a        "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%lx", 4294967296);                 ft_printf("\n2---->");  ft_printf( "100000000"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%llX", 4294967296);                ft_printf("\n2---->");  ft_printf( "100000000"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%hx", 4294967296);                 ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%hhX", 4294967296);                ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%jx", 4294967295);                 ft_printf("\n2---->");  ft_printf( "ffffffff"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%jx", 4294967296);                 ft_printf("\n2---->");  ft_printf( "100000000"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%jx", -4294967296);                ft_printf("\n2---->");  ft_printf( "ffffffff00000000"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%jx", -4294967297);                ft_printf("\n2---->");  ft_printf( "fffffffeffffffff"); ft_printf("\n"); ft_printf("\n1---->");
printf("%llx\n", 9223372036854775807);       ft_printf("\n2---->");  ft_printf( "7fffffffffffffff"); ft_printf("\n"); ft_printf("\n1---->");
printf("%llx\n", 9223372036854775808);       ft_printf("\n2---->");  ft_printf( "8000000000000000"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%010x", 542);                      ft_printf("\n2---->");  ft_printf( "000000021e"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-15x", 542);                      ft_printf("\n2---->");  ft_printf( "21e            "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%2x", 542);                        ft_printf("\n2---->");  ft_printf( "21e"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%.2x", 5427);                      ft_printf("\n2---->");  ft_printf( "1533"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%5.2x", 5427);                     ft_printf("\n2---->");  ft_printf( " 1533"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%#x", 42);                         ft_printf("\n2---->");  ft_printf( "0x2a"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%#llx", 9223372036854775807);      ft_printf("\n2---->");  ft_printf( "0x7fffffffffffffff"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%#x", 0);                          ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%#x", 42);                         ft_printf("\n2---->");  ft_printf( "0x2a"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%#X", 42);                         ft_printf("\n2---->");  ft_printf( "0X2A"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%#8x", 42);                        ft_printf("\n2---->");  ft_printf( "    0x2a"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%#08x", 42);                       ft_printf("\n2---->");  ft_printf( "0x00002a"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%#-08x", 42);                      ft_printf("\n2---->");  ft_printf( "0x2a    "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %#.x %#.0x", 0, 0);    ft_printf("\n2---->");  ft_printf( "@moulitest:  "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %.x %.0x", 0, 0);      ft_printf("\n2---->");  ft_printf( "@moulitest:  "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %5.x %5.0x", 0, 0);    ft_printf("\n2---->");  ft_printf( "@moulitest:            "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s", "abc");                       ft_printf("\n2---->");  ft_printf( "abc"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s", "this is a string");          ft_printf("\n2---->");  ft_printf( "this is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s ", "this is a string");         ft_printf("\n2---->");  ft_printf( "this is a string "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s  ", "this is a string");        ft_printf("\n2---->");  ft_printf( "this is a string  "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("this is a %s", "string");          ft_printf("\n2---->");  ft_printf( "this is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s is a string", "this");          ft_printf("\n2---->");  ft_printf( "this is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("Line Feed %s", "\\n");             ft_printf("\n2---->");  ft_printf( "Line Feed \\n"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%10s is a string", "this");        ft_printf("\n2---->");  ft_printf( "      this is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%.2s is a string", "this");        ft_printf("\n2---->");  ft_printf( "th is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%5.2s is a string", "this");       ft_printf("\n2---->");  ft_printf( "   th is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%10s is a string", "");            ft_printf("\n2---->");  ft_printf( "           is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%.2s is a string", "");            ft_printf("\n2---->");  ft_printf( " is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%5.2s is a string", "");           ft_printf("\n2---->");  ft_printf( "      is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-10s is a string", "this");       ft_printf("\n2---->");  ft_printf( "this       is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-.2s is a string", "this");       ft_printf("\n2---->");  ft_printf( "th is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-5.2s is a string", "this");      ft_printf("\n2---->");  ft_printf( "th    is a string"); ft_printf("\n"); ft_printf("\n1---->");

ft_printf("%-10s is a string", "");           ft_printf("\n2---->");  ft_printf( "           is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-.2s is a string", "");           ft_printf("\n2---->");  ft_printf( " is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-5.2s is a string", "");          ft_printf("\n2---->");  ft_printf( "      is a string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s %s", "this", "is");             ft_printf("\n2---->");  ft_printf( "this is"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s %s %s", "this", "is", "a");     ft_printf("\n2---->");  ft_printf( "this is a"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s %s %s %s", "this", "is", "a", "multi"); ft_printf("\n2---->");  ft_printf( "this is a multi"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s %s %s %s string. gg!", "this", "is", "a", "multi", "string"); ft_printf("\n2---->");  ft_printf("this is a multi string. gg!"); ft_printf("\n"); ft_printf("\n1---->");

ft_printf("%s%s%s%s%s", "this", "is", "a", "multi", "string"); ft_printf("\n2---->");  ft_printf( "thisisamultistring"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %s", NULL);            ft_printf("\n2---->");  ft_printf( "@moulitest: (null)"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%.2c", NULL);                      ft_printf("\n2---->");  ft_printf( "^@"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%s %s", NULL, string);             ft_printf("\n2---->");  ft_printf( "(null) string"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%c", 42);                          ft_printf("\n2---->");  ft_printf( "*"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%5c", 42);                         ft_printf("\n2---->");  ft_printf( "    *"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-5c", 42);                        ft_printf("\n2---->");  ft_printf( "*    "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %c", 0);               ft_printf("\n2---->");  ft_printf( "@moulitest: ^@"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%2c", 0);                          ft_printf("\n2---->");  ft_printf( " ^@"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("null %c and text", 0);             ft_printf("\n2---->");  ft_printf( "null ^@ and text"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("% c", 0);                          ft_printf("\n2---->");  ft_printf( "^@"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%o", 40);                          ft_printf("\n2---->");  ft_printf( "50"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%5o", 41);                         ft_printf("\n2---->");  ft_printf( "   51"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%05o", 42);                        ft_printf("\n2---->");  ft_printf( "00052"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-5o", 2500);                      ft_printf("\n2---->");  ft_printf( "4704 "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%#6o", 2500);                      ft_printf("\n2---->");  ft_printf( " 04704"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-#6o", 2500);                     ft_printf("\n2---->");  ft_printf( "04704 "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-05o", 2500);                     ft_printf("\n2---->");  ft_printf( "4704 "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-5.10o", 2500);                   ft_printf("\n2---->");  ft_printf( "0000004704"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-10.5o", 2500);                   ft_printf("\n2---->");  ft_printf( "04704     "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %o", 0);               ft_printf("\n2---->");  ft_printf( "@moulitest: 0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %.o %.0o", 0, 0);      ft_printf("\n2---->");  ft_printf( "@moulitest:  "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %5.o %5.0o", 0, 0);    ft_printf("\n2---->");  ft_printf( "@moulitest:            "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %#.o %#.0o", 0, 0);    ft_printf("\n2---->");  ft_printf( "@moulitest: 0 0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %.10o", 42);           ft_printf("\n2---->");  ft_printf( "@moulitest: 0000000052"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d", 1);                           ft_printf("\n2---->");  ft_printf( "1"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("the %d", 1);                       ft_printf("\n2---->");  ft_printf( "the 1"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d is one", 1);                    ft_printf("\n2---->");  ft_printf( "1 is one"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d", -1);                          ft_printf("\n2---->");  ft_printf( "-1"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d", 4242);                        ft_printf("\n2---->");  ft_printf( "4242"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d", -4242);                       ft_printf("\n2---->");  ft_printf( "-4242"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d", 2147483647);                  ft_printf("\n2---->");  ft_printf( "2147483647"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d", 2147483648);                  ft_printf("\n2---->");  ft_printf( "-2147483648"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d", -2147483648);                 ft_printf("\n2---->");  ft_printf( "-2147483648"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d", -2147483649);                 ft_printf("\n2---->");  ft_printf( "2147483647"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("% d", 42);                         ft_printf("\n2---->");  ft_printf( " 42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("% d", -42);                        ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%+d", 42);                         ft_printf("\n2---->");  ft_printf( "+42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%+d", -42);                        ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%+d", 0);                          ft_printf("\n2---->");  ft_printf( "+0"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%+d", 4242424242424242424242);     ft_printf("\n2---->");  ft_printf( "-1"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("% +d", 42);                        ft_printf("\n2---->");  ft_printf( "+42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("% +d", -42);                       ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%+ d", 42);                        ft_printf("\n2---->");  ft_printf( "+42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%+ d", -42);                       ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%  +d", 42);                       ft_printf("\n2---->");  ft_printf( "+42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%  +d", -42);                      ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%+  d", 42);                       ft_printf("\n2---->");  ft_printf( "+42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%+  d", -42);                      ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("% ++d", 42);                       ft_printf("\n2---->");  ft_printf( "+42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("% ++d", -42);                      ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%++ d", 42);                       ft_printf("\n2---->");  ft_printf( "+42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%++ d", -42);                      ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%0d", -42);                        ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%00d", -42);                       ft_printf("\n2---->");  ft_printf( "-42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%5d", 42);                         ft_printf("\n2---->");  ft_printf( "   42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%05d", 42);                        ft_printf("\n2---->");  ft_printf( "00042"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%0+5d", 42);                       ft_printf("\n2---->");  ft_printf( "+0042"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%5d", -42);                        ft_printf("\n2---->");  ft_printf( "  -42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%05d", -42);                       ft_printf("\n2---->");  ft_printf( "-0042"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%0+5d", -42);                      ft_printf("\n2---->");  ft_printf( "-0042"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-5d", 42);                        ft_printf("\n2---->");  ft_printf( "42   "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-05d", 42);                       ft_printf("\n2---->");  ft_printf( "42   "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-5d", -42);                       ft_printf("\n2---->");  ft_printf( "-42  "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-05d", -42);                      ft_printf("\n2---->");  ft_printf( "-42  "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%hd", 32767);                      ft_printf("\n2---->");  ft_printf( "32767"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%hd", −32768);                   ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%hd", 32768);                      ft_printf("\n2---->");  ft_printf( "-32768"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%hd", −32769);                   ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%hhd", 127);                       ft_printf("\n2---->");  ft_printf( "127"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%hhd", 128);                       ft_printf("\n2---->");  ft_printf( "-128"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%hhd", -128);                      ft_printf("\n2---->");  ft_printf( "-128"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%hhd", -129);                      ft_printf("\n2---->");  ft_printf( "127"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%ld", 2147483647);                 ft_printf("\n2---->");  ft_printf( "2147483647"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%ld", -2147483648);                ft_printf("\n2---->");  ft_printf( "-2147483648"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%ld", 2147483648);                 ft_printf("\n2---->");  ft_printf( "2147483648"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%ld", -2147483649);                ft_printf("\n2---->");  ft_printf( "-2147483649"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%lld", 9223372036854775807);       ft_printf("\n2---->");  ft_printf( "9223372036854775807"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%lld", -9223372036854775808);      ft_printf("\n2---->");  ft_printf( "-9223372036854775808"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%jd", 9223372036854775807);        ft_printf("\n2---->");  ft_printf( "9223372036854775807"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%jd", -9223372036854775808);       ft_printf("\n2---->");  ft_printf( "-9223372036854775808"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%zd", 4294967295);                 ft_printf("\n2---->");  ft_printf( "4294967295"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%zd", 4294967296);                 ft_printf("\n2---->");  ft_printf( "4294967296"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%zd", -0);                         ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
// ft_printf("%zd", -1);                         ft_printf("\n2---->");  ft_printf( "-1"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d", 1);                           ft_printf("\n2---->");  ft_printf( "1"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d %d", 1, -2);                    ft_printf("\n2---->");  ft_printf( "1 -2"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d %d %d", 1, -2, 33);             ft_printf("\n2---->");  ft_printf( "1 -2 33"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d %d %d %d", 1, -2, 33, 42);      ft_printf("\n2---->");  ft_printf( "1 -2 33 42"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%d %d %d %d gg!", 1, -2, 33, 42, 0); ft_printf("\n2---->");  ft_printf( "1 -2 33 42 gg!"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%4.15d", 42);                      ft_printf("\n2---->");  ft_printf( "000000000000042"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%.2d", 4242);                      ft_printf("\n2---->");  ft_printf( "4242"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%.10d", 4242);                     ft_printf("\n2---->");  ft_printf( "0000004242"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%10.5d", 4242);                    ft_printf("\n2---->");  ft_printf( "     04242"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-10.5d", 4242);                   ft_printf("\n2---->");  ft_printf( "04242     "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("% 10.5d", 4242);                   ft_printf("\n2---->");  ft_printf( "     04242"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%+10.5d", 4242);                   ft_printf("\n2---->");  ft_printf( "    +04242"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-+10.5d", 4242);                  ft_printf("\n2---->");  ft_printf( "+04242    "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%03.2d", 0);                       ft_printf("\n2---->");  ft_printf( " 00"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%03.2d", 1);                       ft_printf("\n2---->");  ft_printf( " 01"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%03.2d", -1);                      ft_printf("\n2---->");  ft_printf( "-01"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %.10d", -42);          ft_printf("\n2---->");  ft_printf( "@moulitest: -0000000042"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %.d %.0d", 42, 43);    ft_printf("\n2---->");  ft_printf( "@moulitest: 42 43"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %.d %.0d", 0, 0);      ft_printf("\n2---->");  ft_printf( "@moulitest:  "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %5.d %5.0d", 0, 0);    ft_printf("\n2---->");  ft_printf( "@moulitest:            "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%u", 0);                           ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%u", 1);                           ft_printf("\n2---->");  ft_printf( "1"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%u", -1);                          ft_printf("\n2---->");  ft_printf( "4294967295"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%u", 4294967295);                  ft_printf("\n2---->");  ft_printf( "4294967295"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%u", 4294967296);                  ft_printf("\n2---->");  ft_printf( "0"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%5u", 4294967295);                 ft_printf("\n2---->");  ft_printf( "4294967295"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%15u", 4294967295);                ft_printf("\n2---->");  ft_printf( "     4294967295"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%-15u", 4294967295);               ft_printf("\n2---->");  ft_printf( "4294967295     "); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%015u", 4294967295);               ft_printf("\n2---->");  ft_printf( "000004294967295"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("% u", 4294967295);                 ft_printf("\n2---->");  ft_printf( "4294967295"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%+u", 4294967295);                 ft_printf("\n2---->");  ft_printf( "4294967295"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%lu", 4294967295);                 ft_printf("\n2---->");  ft_printf( "4294967295"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%lu", 4294967296);                 ft_printf("\n2---->");  ft_printf( "4294967296"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%lu", -42);                        ft_printf("\n2---->");  ft_printf( "4294967254"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%llu", 4999999999);                ft_printf("\n2---->");  ft_printf( "4999999999"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%ju", 4999999999);                 ft_printf("\n2---->");  ft_printf( "4999999999"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%ju", 4294967296);                 ft_printf("\n2---->");  ft_printf( "4294967296"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%U", 4294967295);                  ft_printf("\n2---->");  ft_printf( "4294967295"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%hU", 4294967296);                 ft_printf("\n2---->");  ft_printf( "4294967296"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("%U", 4294967296);                  ft_printf("\n2---->");  ft_printf( "4294967296"); ft_printf("\n"); ft_printf("\n1---->");
ft_printf("@moulitest: %.5u", 42);            ft_printf("\n2---->");  ft_printf( "@moulitest: 00042"); ft_printf("\n"); 


  return 0;
}
