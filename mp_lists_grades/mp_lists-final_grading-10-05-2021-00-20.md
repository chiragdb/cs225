---

This report was generated for **cbhatia3** using **b3e86f77ab7c640ce66535cb27a16d4220b4d672** (latest commit as of **October 4th 2021, 11:59 pm**)

---




## Score: 121/126 (96.03%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==96== Memcheck, a memory error detector
==96== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==96== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==96== Command: ./test -r xml "List::merge"
==96== 
==96== 
==96== HEAP SUMMARY:
==96==     in use at exit: 16 bytes in 1 blocks
==96==   total heap usage: 243,424 allocs, 243,423 frees, 79,522,321 bytes allocated
==96== 
==96== LEAK SUMMARY:
==96==    definitely lost: 0 bytes in 0 blocks
==96==    indirectly lost: 0 bytes in 0 blocks
==96==      possibly lost: 0 bytes in 0 blocks
==96==    still reachable: 16 bytes in 1 blocks
==96==         suppressed: 0 bytes in 0 blocks
==96== Reachable blocks (those to which a pointer was found) are not shown.
==96== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==96== 
==96== For counts of detected and suppressed errors, rerun with: -v
==96== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==98== Memcheck, a memory error detector
==98== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==98== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==98== Command: ./test -r xml "List::sort\ simple\ #1"
==98== 
==98== 
==98== HEAP SUMMARY:
==98==     in use at exit: 0 bytes in 0 blocks
==98==   total heap usage: 2,317 allocs, 2,317 frees, 281,032 bytes allocated
==98== 
==98== All heap blocks were freed -- no leaks are possible
==98== 
==98== For counts of detected and suppressed errors, rerun with: -v
==98== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==100== Memcheck, a memory error detector
==100== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==100== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==100== Command: ./test -r xml "List::sort\ simple\ #2"
==100== 
==100== 
==100== HEAP SUMMARY:
==100==     in use at exit: 0 bytes in 0 blocks
==100==   total heap usage: 2,317 allocs, 2,317 frees, 281,080 bytes allocated
==100== 
==100== All heap blocks were freed -- no leaks are possible
==100== 
==100== For counts of detected and suppressed errors, rerun with: -v
==100== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==104== Memcheck, a memory error detector
==104== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==104== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==104== Command: ./test -r xml "List::insertFront\ size"
==104== 
==104== 
==104== HEAP SUMMARY:
==104==     in use at exit: 0 bytes in 0 blocks
==104==   total heap usage: 2,462 allocs, 2,462 frees, 285,632 bytes allocated
==104== 
==104== All heap blocks were freed -- no leaks are possible
==104== 
==104== For counts of detected and suppressed errors, rerun with: -v
==104== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==106== Memcheck, a memory error detector
==106== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==106== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==106== Command: ./test -r xml "List::insertBack\ size"
==106== 
==106== 
==106== HEAP SUMMARY:
==106==     in use at exit: 0 bytes in 0 blocks
==106==   total heap usage: 2,462 allocs, 2,462 frees, 285,632 bytes allocated
==106== 
==106== All heap blocks were freed -- no leaks are possible
==106== 
==106== For counts of detected and suppressed errors, rerun with: -v
==106== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==108== Memcheck, a memory error detector
==108== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==108== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==108== Command: ./test -r xml "List::insert\ contents"
==108== 
==108== 
==108== HEAP SUMMARY:
==108==     in use at exit: 0 bytes in 0 blocks
==108==   total heap usage: 2,458 allocs, 2,458 frees, 285,536 bytes allocated
==108== 
==108== All heap blocks were freed -- no leaks are possible
==108== 
==108== For counts of detected and suppressed errors, rerun with: -v
==108== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==110== Memcheck, a memory error detector
==110== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==110== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==110== Command: ./test -r xml "List::triplerotate\ basic"
==110== 
==110== 
==110== HEAP SUMMARY:
==110==     in use at exit: 0 bytes in 0 blocks
==110==   total heap usage: 2,466 allocs, 2,466 frees, 285,824 bytes allocated
==110== 
==110== All heap blocks were freed -- no leaks are possible
==110== 
==110== For counts of detected and suppressed errors, rerun with: -v
==110== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - List::triplerotate simple

- **Points**: 10 / 10

```
==112== Memcheck, a memory error detector
==112== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==112== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==112== Command: ./test -r xml "List::triplerotate\ simple"
==112== 
==112== 
==112== HEAP SUMMARY:
==112==     in use at exit: 0 bytes in 0 blocks
==112==   total heap usage: 2,474 allocs, 2,474 frees, 286,040 bytes allocated
==112== 
==112== All heap blocks were freed -- no leaks are possible
==112== 
==112== For counts of detected and suppressed errors, rerun with: -v
==112== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==114== Memcheck, a memory error detector
==114== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==114== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==114== Command: ./test -r xml "List::split\ simple"
==114== 
==114== 
==114== HEAP SUMMARY:
==114==     in use at exit: 0 bytes in 0 blocks
==114==   total heap usage: 2,320 allocs, 2,320 frees, 281,104 bytes allocated
==114== 
==114== All heap blocks were freed -- no leaks are possible
==114== 
==114== For counts of detected and suppressed errors, rerun with: -v
==114== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==117== Memcheck, a memory error detector
==117== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==117== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==117== Command: ./test -r xml "List::_destroy\ empty\ list"
==117== 
==117== 
==117== HEAP SUMMARY:
==117==     in use at exit: 0 bytes in 0 blocks
==117==   total heap usage: 2,470 allocs, 2,470 frees, 286,464 bytes allocated
==117== 
==117== All heap blocks were freed -- no leaks are possible
==117== 
==117== For counts of detected and suppressed errors, rerun with: -v
==117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==119== Memcheck, a memory error detector
==119== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==119== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==119== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==119== 
==119== 
==119== HEAP SUMMARY:
==119==     in use at exit: 0 bytes in 0 blocks
==119==   total heap usage: 2,474 allocs, 2,474 frees, 290,800 bytes allocated
==119== 
==119== All heap blocks were freed -- no leaks are possible
==119== 
==119== For counts of detected and suppressed errors, rerun with: -v
==119== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==121== Memcheck, a memory error detector
==121== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==121== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==121== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==121== 
==121== 
==121== HEAP SUMMARY:
==121==     in use at exit: 0 bytes in 0 blocks
==121==   total heap usage: 2,474 allocs, 2,474 frees, 293,200 bytes allocated
==121== 
==121== All heap blocks were freed -- no leaks are possible
==121== 
==121== For counts of detected and suppressed errors, rerun with: -v
==121== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==123== Memcheck, a memory error detector
==123== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==123== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==123== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==123== 
==123== 
==123== HEAP SUMMARY:
==123==     in use at exit: 0 bytes in 0 blocks
==123==   total heap usage: 2,474 allocs, 2,474 frees, 293,200 bytes allocated
==123== 
==123== All heap blocks were freed -- no leaks are possible
==123== 
==123== For counts of detected and suppressed errors, rerun with: -v
==123== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==125== Memcheck, a memory error detector
==125== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==125== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==125== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==125== 
==125== 
==125== HEAP SUMMARY:
==125==     in use at exit: 0 bytes in 0 blocks
==125==   total heap usage: 2,474 allocs, 2,474 frees, 295,600 bytes allocated
==125== 
==125== All heap blocks were freed -- no leaks are possible
==125== 
==125== For counts of detected and suppressed errors, rerun with: -v
==125== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==127== Memcheck, a memory error detector
==127== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==127== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==127== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==127== 
==127== 
==127== HEAP SUMMARY:
==127==     in use at exit: 0 bytes in 0 blocks
==127==   total heap usage: 2,474 allocs, 2,474 frees, 290,800 bytes allocated
==127== 
==127== All heap blocks were freed -- no leaks are possible
==127== 
==127== For counts of detected and suppressed errors, rerun with: -v
==127== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==129== Memcheck, a memory error detector
==129== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==129== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==129== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==129== 
==129== 
==129== HEAP SUMMARY:
==129==     in use at exit: 0 bytes in 0 blocks
==129==   total heap usage: 2,474 allocs, 2,474 frees, 295,600 bytes allocated
==129== 
==129== All heap blocks were freed -- no leaks are possible
==129== 
==129== For counts of detected and suppressed errors, rerun with: -v
==129== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==131== Memcheck, a memory error detector
==131== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==131== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==131== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==131== 
==131== 
==131== HEAP SUMMARY:
==131==     in use at exit: 0 bytes in 0 blocks
==131==   total heap usage: 2,467 allocs, 2,467 frees, 288,232 bytes allocated
==131== 
==131== All heap blocks were freed -- no leaks are possible
==131== 
==131== For counts of detected and suppressed errors, rerun with: -v
==131== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==133== Memcheck, a memory error detector
==133== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==133== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==133== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==133== 
==133== 
==133== HEAP SUMMARY:
==133==     in use at exit: 0 bytes in 0 blocks
==133==   total heap usage: 2,467 allocs, 2,467 frees, 290,632 bytes allocated
==133== 
==133== All heap blocks were freed -- no leaks are possible
==133== 
==133== For counts of detected and suppressed errors, rerun with: -v
==133== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==135== Memcheck, a memory error detector
==135== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==135== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==135== Command: ./test -r xml "List::reverse\ simple"
==135== 
==135== 
==135== HEAP SUMMARY:
==135==     in use at exit: 0 bytes in 0 blocks
==135==   total heap usage: 2,331 allocs, 2,331 frees, 281,452 bytes allocated
==135== 
==135== All heap blocks were freed -- no leaks are possible
==135== 
==135== For counts of detected and suppressed errors, rerun with: -v
==135== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/2] - List::reverse edge cases

- **Points**: 0 / 2

```
==137== Memcheck, a memory error detector
==137== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==137== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==137== Command: ./test -r xml "List::reverse\ edge\ cases"
==137== 
==137== Conditional jump or move depends on uninitialised value(s)
==137==    at 0x42D582: List<int>::print(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const (List-given.hpp:130)
==137==    by 0x43F193: ____C_A_T_C_H____T_E_S_T____2() (test_part2_extra.cpp:41)
==137==    by 0x47B852: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==137==    by 0x46BFA6: Catch::TestCase::invoke() const (catch.hpp:10793)
==137==    by 0x46BEDC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==137==    by 0x468436: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==137==    by 0x466A0E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==137==    by 0x46FDA6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==137==    by 0x46EA42: Catch::Session::runInternal() (catch.hpp:10149)
==137==    by 0x46E70A: Catch::Session::run() (catch.hpp:10106)
==137==    by 0x46E689: Catch::Session::run(int, char**) (catch.hpp:10074)
==137==    by 0x49B701: main (catch.hpp:13613)
==137== 
==137== 
==137== HEAP SUMMARY:
==137==     in use at exit: 0 bytes in 0 blocks
==137==   total heap usage: 2,468 allocs, 2,468 frees, 285,912 bytes allocated
==137== 
==137== All heap blocks were freed -- no leaks are possible
==137== 
==137== For counts of detected and suppressed errors, rerun with: -v
==137== Use --track-origins=yes to see where uninitialised values come from
==137== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==139== Memcheck, a memory error detector
==139== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==139== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==139== Command: ./test -r xml "List::reverseNth\ #3"
==139== 
==139== 
==139== HEAP SUMMARY:
==139==     in use at exit: 0 bytes in 0 blocks
==139==   total heap usage: 2,345 allocs, 2,345 frees, 281,664 bytes allocated
==139== 
==139== All heap blocks were freed -- no leaks are possible
==139== 
==139== For counts of detected and suppressed errors, rerun with: -v
==139== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==141== Memcheck, a memory error detector
==141== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==141== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==141== Command: ./test -r xml "List::merge\ #2"
==141== 
==141== 
==141== HEAP SUMMARY:
==141==     in use at exit: 16 bytes in 1 blocks
==141==   total heap usage: 2,359 allocs, 2,358 frees, 283,184 bytes allocated
==141== 
==141== LEAK SUMMARY:
==141==    definitely lost: 0 bytes in 0 blocks
==141==    indirectly lost: 0 bytes in 0 blocks
==141==      possibly lost: 0 bytes in 0 blocks
==141==    still reachable: 16 bytes in 1 blocks
==141==         suppressed: 0 bytes in 0 blocks
==141== Reachable blocks (those to which a pointer was found) are not shown.
==141== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==141== 
==141== For counts of detected and suppressed errors, rerun with: -v
==141== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==143== Memcheck, a memory error detector
==143== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==143== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==143== Command: ./test -r xml "List::sort\ simple\ #3"
==143== 
==143== 
==143== HEAP SUMMARY:
==143==     in use at exit: 0 bytes in 0 blocks
==143==   total heap usage: 2,320 allocs, 2,320 frees, 281,144 bytes allocated
==143== 
==143== All heap blocks were freed -- no leaks are possible
==143== 
==143== For counts of detected and suppressed errors, rerun with: -v
==143== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/2] - List Complex

- **Points**: 0 / 2

```
[Process timed out]
```
```
[Process timed out]
```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==146== Memcheck, a memory error detector
==146== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==146== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==146== Command: ./test -r xml "List::insert\ contents\ #2"
==146== 
==146== 
==146== HEAP SUMMARY:
==146==     in use at exit: 0 bytes in 0 blocks
==146==   total heap usage: 2,473 allocs, 2,473 frees, 286,032 bytes allocated
==146== 
==146== All heap blocks were freed -- no leaks are possible
==146== 
==146== For counts of detected and suppressed errors, rerun with: -v
==146== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==148== Memcheck, a memory error detector
==148== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==148== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==148== Command: ./test -r xml "List::split\ edge\ cases"
==148== 
==148== 
==148== HEAP SUMMARY:
==148==     in use at exit: 0 bytes in 0 blocks
==148==   total heap usage: 2,463 allocs, 2,463 frees, 285,696 bytes allocated
==148== 
==148== All heap blocks were freed -- no leaks are possible
==148== 
==148== For counts of detected and suppressed errors, rerun with: -v
==148== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::triplerotate edge

- **Points**: 2 / 2

```
==150== Memcheck, a memory error detector
==150== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==150== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==150== Command: ./test -r xml "List::triplerotate\ edge"
==150== 
==150== 
==150== HEAP SUMMARY:
==150==     in use at exit: 0 bytes in 0 blocks
==150==   total heap usage: 2,473 allocs, 2,473 frees, 286,016 bytes allocated
==150== 
==150== All heap blocks were freed -- no leaks are possible
==150== 
==150== For counts of detected and suppressed errors, rerun with: -v
==150== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::triplerotate hard

- **Points**: 2 / 2

```
==152== Memcheck, a memory error detector
==152== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==152== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==152== Command: ./test -r xml "List::triplerotate\ hard"
==152== 
==152== 
==152== HEAP SUMMARY:
==152==     in use at exit: 0 bytes in 0 blocks
==152==   total heap usage: 2,479 allocs, 2,479 frees, 286,200 bytes allocated
==152== 
==152== All heap blocks were freed -- no leaks are possible
==152== 
==152== For counts of detected and suppressed errors, rerun with: -v
==152== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - List::triplerotate image

- **Points**: 10 / 10





### ✗ - [0/1] - List::ListIterator::operator-- from end

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


---