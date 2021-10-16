


## Score: 40/50 (80.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==57== Memcheck, a memory error detector
==57== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==57== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==57== Command: ./test -r xml "test_find"
==57== 
==57== 
==57== HEAP SUMMARY:
==57==     in use at exit: 0 bytes in 0 blocks
==57==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==57== 
==57== All heap blocks were freed -- no leaks are possible
==57== 
==57== For counts of detected and suppressed errors, rerun with: -v
==57== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==61== Memcheck, a memory error detector
==61== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==61== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==61== Command: ./test -r xml "test_insert_big"
==61== 
==61== 
==61== HEAP SUMMARY:
==61==     in use at exit: 0 bytes in 0 blocks
==61==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==61== 
==61== All heap blocks were freed -- no leaks are possible
==61== 
==61== For counts of detected and suppressed errors, rerun with: -v
==61== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✗ - [0/10] - test_remove_big

- **Points**: 0 / 10

```
==64== Memcheck, a memory error detector
==64== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==64== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==64== Command: ./test -r xml "test_remove_big"
==64== 
==64== 
==64== HEAP SUMMARY:
==64==     in use at exit: 56 bytes in 1 blocks
==64==   total heap usage: 1,706 allocs, 1,705 frees, 219,624 bytes allocated
==64== 
==64== 56 bytes in 1 blocks are definitely lost in loss record 1 of 1
==64==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==64==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==64==    by 0x435D89: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:138)
==64==    by 0x435E40: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:142)
==64==    by 0x435E40: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:142)
==64==    by 0x435E07: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Node*&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:140)
==64==    by 0x435482: AVLTree<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insert(int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (avltree.cpp:130)
==64==    by 0x4299B8: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:124)
==64==    by 0x469D72: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==64==    by 0x45A4C6: Catch::TestCase::invoke() const (catch.hpp:10793)
==64==    by 0x45A3FC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==64==    by 0x456956: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==64== 
==64== LEAK SUMMARY:
==64==    definitely lost: 56 bytes in 1 blocks
==64==    indirectly lost: 0 bytes in 0 blocks
==64==      possibly lost: 0 bytes in 0 blocks
==64==    still reachable: 0 bytes in 0 blocks
==64==         suppressed: 0 bytes in 0 blocks
==64== 
==64== For counts of detected and suppressed errors, rerun with: -v
==64== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



---

This report was generated for **cbhatia3** using **9050f6080283956e31b8389ac785f372cc8fe448** (latest commit as of **October 15th 2021, 7:57 pm**)
