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
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part2.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==92== Memcheck, a memory error detector
==92== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==92== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==92== Command: ./test -r xml "List::insertFront\ size"
==92== 
==92== 
==92== HEAP SUMMARY:
==92==     in use at exit: 0 bytes in 0 blocks
==92==   total heap usage: 2,462 allocs, 2,462 frees, 285,632 bytes allocated
==92== 
==92== All heap blocks were freed -- no leaks are possible
==92== 
==92== For counts of detected and suppressed errors, rerun with: -v
==92== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==94== Memcheck, a memory error detector
==94== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==94== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==94== Command: ./test -r xml "List::insertBack\ size"
==94== 
==94== 
==94== HEAP SUMMARY:
==94==     in use at exit: 0 bytes in 0 blocks
==94==   total heap usage: 2,462 allocs, 2,462 frees, 285,632 bytes allocated
==94== 
==94== All heap blocks were freed -- no leaks are possible
==94== 
==94== For counts of detected and suppressed errors, rerun with: -v
==94== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==96== Memcheck, a memory error detector
==96== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==96== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==96== Command: ./test -r xml "List::insert\ contents"
==96== 
==96== 
==96== HEAP SUMMARY:
==96==     in use at exit: 0 bytes in 0 blocks
==96==   total heap usage: 2,458 allocs, 2,458 frees, 285,536 bytes allocated
==96== 
==96== All heap blocks were freed -- no leaks are possible
==96== 
==96== For counts of detected and suppressed errors, rerun with: -v
==96== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==98== Memcheck, a memory error detector
==98== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==98== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==98== Command: ./test -r xml "List::triplerotate\ basic"
==98== 
==98== 
==98== HEAP SUMMARY:
==98==     in use at exit: 0 bytes in 0 blocks
==98==   total heap usage: 2,466 allocs, 2,466 frees, 285,824 bytes allocated
==98== 
==98== All heap blocks were freed -- no leaks are possible
==98== 
==98== For counts of detected and suppressed errors, rerun with: -v
==98== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - List::triplerotate simple

- **Points**: 10 / 10

```
==100== Memcheck, a memory error detector
==100== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==100== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==100== Command: ./test -r xml "List::triplerotate\ simple"
==100== 
==100== 
==100== HEAP SUMMARY:
==100==     in use at exit: 0 bytes in 0 blocks
==100==   total heap usage: 2,474 allocs, 2,474 frees, 286,040 bytes allocated
==100== 
==100== All heap blocks were freed -- no leaks are possible
==100== 
==100== For counts of detected and suppressed errors, rerun with: -v
==100== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==102== Memcheck, a memory error detector
==102== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==102== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==102== Command: ./test -r xml "List::split\ simple"
==102== 
==102== 
==102== HEAP SUMMARY:
==102==     in use at exit: 0 bytes in 0 blocks
==102==   total heap usage: 2,320 allocs, 2,320 frees, 281,104 bytes allocated
==102== 
==102== All heap blocks were freed -- no leaks are possible
==102== 
==102== For counts of detected and suppressed errors, rerun with: -v
==102== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==105== Memcheck, a memory error detector
==105== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==105== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==105== Command: ./test -r xml "List::_destroy\ empty\ list"
==105== 
==105== 
==105== HEAP SUMMARY:
==105==     in use at exit: 0 bytes in 0 blocks
==105==   total heap usage: 2,470 allocs, 2,470 frees, 286,464 bytes allocated
==105== 
==105== All heap blocks were freed -- no leaks are possible
==105== 
==105== For counts of detected and suppressed errors, rerun with: -v
==105== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==107== Memcheck, a memory error detector
==107== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==107== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==107== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==107== 
==107== 
==107== HEAP SUMMARY:
==107==     in use at exit: 0 bytes in 0 blocks
==107==   total heap usage: 2,474 allocs, 2,474 frees, 290,800 bytes allocated
==107== 
==107== All heap blocks were freed -- no leaks are possible
==107== 
==107== For counts of detected and suppressed errors, rerun with: -v
==107== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==109== Memcheck, a memory error detector
==109== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==109== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==109== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==109== 
==109== 
==109== HEAP SUMMARY:
==109==     in use at exit: 0 bytes in 0 blocks
==109==   total heap usage: 2,474 allocs, 2,474 frees, 293,200 bytes allocated
==109== 
==109== All heap blocks were freed -- no leaks are possible
==109== 
==109== For counts of detected and suppressed errors, rerun with: -v
==109== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==111== Memcheck, a memory error detector
==111== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==111== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==111== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==111== 
==111== 
==111== HEAP SUMMARY:
==111==     in use at exit: 0 bytes in 0 blocks
==111==   total heap usage: 2,474 allocs, 2,474 frees, 293,200 bytes allocated
==111== 
==111== All heap blocks were freed -- no leaks are possible
==111== 
==111== For counts of detected and suppressed errors, rerun with: -v
==111== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==113== Memcheck, a memory error detector
==113== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==113== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==113== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==113== 
==113== 
==113== HEAP SUMMARY:
==113==     in use at exit: 0 bytes in 0 blocks
==113==   total heap usage: 2,474 allocs, 2,474 frees, 295,600 bytes allocated
==113== 
==113== All heap blocks were freed -- no leaks are possible
==113== 
==113== For counts of detected and suppressed errors, rerun with: -v
==113== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==115== Memcheck, a memory error detector
==115== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==115== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==115== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==115== 
==115== 
==115== HEAP SUMMARY:
==115==     in use at exit: 0 bytes in 0 blocks
==115==   total heap usage: 2,474 allocs, 2,474 frees, 290,800 bytes allocated
==115== 
==115== All heap blocks were freed -- no leaks are possible
==115== 
==115== For counts of detected and suppressed errors, rerun with: -v
==115== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==117== Memcheck, a memory error detector
==117== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==117== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==117== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==117== 
==117== 
==117== HEAP SUMMARY:
==117==     in use at exit: 0 bytes in 0 blocks
==117==   total heap usage: 2,474 allocs, 2,474 frees, 295,600 bytes allocated
==117== 
==117== All heap blocks were freed -- no leaks are possible
==117== 
==117== For counts of detected and suppressed errors, rerun with: -v
==117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==119== Memcheck, a memory error detector
==119== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==119== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==119== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==119== 
==119== 
==119== HEAP SUMMARY:
==119==     in use at exit: 0 bytes in 0 blocks
==119==   total heap usage: 2,467 allocs, 2,467 frees, 288,232 bytes allocated
==119== 
==119== All heap blocks were freed -- no leaks are possible
==119== 
==119== For counts of detected and suppressed errors, rerun with: -v
==119== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==121== Memcheck, a memory error detector
==121== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==121== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==121== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==121== 
==121== 
==121== HEAP SUMMARY:
==121==     in use at exit: 0 bytes in 0 blocks
==121==   total heap usage: 2,467 allocs, 2,467 frees, 290,632 bytes allocated
==121== 
==121== All heap blocks were freed -- no leaks are possible
==121== 
==121== For counts of detected and suppressed errors, rerun with: -v
==121== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==123== Memcheck, a memory error detector
==123== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==123== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==123== Command: ./test -r xml "List::reverse\ simple"
==123== 
==123== 
==123== HEAP SUMMARY:
==123==     in use at exit: 0 bytes in 0 blocks
==123==   total heap usage: 2,331 allocs, 2,331 frees, 281,452 bytes allocated
==123== 
==123== All heap blocks were freed -- no leaks are possible
==123== 
==123== For counts of detected and suppressed errors, rerun with: -v
==123== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/2] - List::reverse edge cases

- **Points**: 0 / 2

```
==125== Memcheck, a memory error detector
==125== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==125== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==125== Command: ./test -r xml "List::reverse\ edge\ cases"
==125== 
==125== Conditional jump or move depends on uninitialised value(s)
==125==    at 0x42A082: List<int>::print(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const (List-given.hpp:130)
==125==    by 0x431C53: ____C_A_T_C_H____T_E_S_T____2() (test_part2_extra.cpp:41)
==125==    by 0x47B852: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==125==    by 0x46BFA6: Catch::TestCase::invoke() const (catch.hpp:10793)
==125==    by 0x46BEDC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==125==    by 0x468436: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==125==    by 0x466A0E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==125==    by 0x46FDA6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==125==    by 0x46EA42: Catch::Session::runInternal() (catch.hpp:10149)
==125==    by 0x46E70A: Catch::Session::run() (catch.hpp:10106)
==125==    by 0x46E689: Catch::Session::run(int, char**) (catch.hpp:10074)
==125==    by 0x49B701: main (catch.hpp:13613)
==125== 
==125== 
==125== HEAP SUMMARY:
==125==     in use at exit: 0 bytes in 0 blocks
==125==   total heap usage: 2,468 allocs, 2,468 frees, 285,912 bytes allocated
==125== 
==125== All heap blocks were freed -- no leaks are possible
==125== 
==125== For counts of detected and suppressed errors, rerun with: -v
==125== Use --track-origins=yes to see where uninitialised values come from
==125== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==127== Memcheck, a memory error detector
==127== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==127== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==127== Command: ./test -r xml "List::reverseNth\ #3"
==127== 
==127== 
==127== HEAP SUMMARY:
==127==     in use at exit: 0 bytes in 0 blocks
==127==   total heap usage: 2,345 allocs, 2,345 frees, 281,664 bytes allocated
==127== 
==127== All heap blocks were freed -- no leaks are possible
==127== 
==127== For counts of detected and suppressed errors, rerun with: -v
==127== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==129== Memcheck, a memory error detector
==129== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==129== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==129== Command: ./test -r xml "List::merge\ #2"
==129== 
==129== 
==129== HEAP SUMMARY:
==129==     in use at exit: 16 bytes in 1 blocks
==129==   total heap usage: 2,359 allocs, 2,358 frees, 283,184 bytes allocated
==129== 
==129== LEAK SUMMARY:
==129==    definitely lost: 0 bytes in 0 blocks
==129==    indirectly lost: 0 bytes in 0 blocks
==129==      possibly lost: 0 bytes in 0 blocks
==129==    still reachable: 16 bytes in 1 blocks
==129==         suppressed: 0 bytes in 0 blocks
==129== Reachable blocks (those to which a pointer was found) are not shown.
==129== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==129== 
==129== For counts of detected and suppressed errors, rerun with: -v
==129== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==131== Memcheck, a memory error detector
==131== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==131== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==131== Command: ./test -r xml "List::sort\ simple\ #3"
==131== 
==131== 
==131== HEAP SUMMARY:
==131==     in use at exit: 0 bytes in 0 blocks
==131==   total heap usage: 2,320 allocs, 2,320 frees, 281,144 bytes allocated
==131== 
==131== All heap blocks were freed -- no leaks are possible
==131== 
==131== For counts of detected and suppressed errors, rerun with: -v
==131== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/2] - List Complex

- **Points**: 0 / 2

```
[Process timed out]
```
```
[Process timed out]
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
==137== Memcheck, a memory error detector
==137== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==137== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==137== Command: ./test -r xml "List::merge"
==137== 
==137== 
==137== HEAP SUMMARY:
==137==     in use at exit: 16 bytes in 1 blocks
==137==   total heap usage: 243,424 allocs, 243,423 frees, 79,522,321 bytes allocated
==137== 
==137== LEAK SUMMARY:
==137==    definitely lost: 0 bytes in 0 blocks
==137==    indirectly lost: 0 bytes in 0 blocks
==137==      possibly lost: 0 bytes in 0 blocks
==137==    still reachable: 16 bytes in 1 blocks
==137==         suppressed: 0 bytes in 0 blocks
==137== Reachable blocks (those to which a pointer was found) are not shown.
==137== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==137== 
==137== For counts of detected and suppressed errors, rerun with: -v
==137== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==139== Memcheck, a memory error detector
==139== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==139== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==139== Command: ./test -r xml "List::sort\ simple\ #1"
==139== 
==139== 
==139== HEAP SUMMARY:
==139==     in use at exit: 0 bytes in 0 blocks
==139==   total heap usage: 2,317 allocs, 2,317 frees, 281,032 bytes allocated
==139== 
==139== All heap blocks were freed -- no leaks are possible
==139== 
==139== For counts of detected and suppressed errors, rerun with: -v
==139== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==141== Memcheck, a memory error detector
==141== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==141== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==141== Command: ./test -r xml "List::sort\ simple\ #2"
==141== 
==141== 
==141== HEAP SUMMARY:
==141==     in use at exit: 0 bytes in 0 blocks
==141==   total heap usage: 2,317 allocs, 2,317 frees, 281,080 bytes allocated
==141== 
==141== All heap blocks were freed -- no leaks are possible
==141== 
==141== For counts of detected and suppressed errors, rerun with: -v
==141== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==145== Memcheck, a memory error detector
==145== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==145== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==145== Command: ./test -r xml "List::insert\ contents\ #2"
==145== 
==145== 
==145== HEAP SUMMARY:
==145==     in use at exit: 0 bytes in 0 blocks
==145==   total heap usage: 2,473 allocs, 2,473 frees, 286,032 bytes allocated
==145== 
==145== All heap blocks were freed -- no leaks are possible
==145== 
==145== For counts of detected and suppressed errors, rerun with: -v
==145== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==147== Memcheck, a memory error detector
==147== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==147== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==147== Command: ./test -r xml "List::split\ edge\ cases"
==147== 
==147== 
==147== HEAP SUMMARY:
==147==     in use at exit: 0 bytes in 0 blocks
==147==   total heap usage: 2,463 allocs, 2,463 frees, 285,696 bytes allocated
==147== 
==147== All heap blocks were freed -- no leaks are possible
==147== 
==147== For counts of detected and suppressed errors, rerun with: -v
==147== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::triplerotate edge

- **Points**: 2 / 2

```
==149== Memcheck, a memory error detector
==149== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==149== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==149== Command: ./test -r xml "List::triplerotate\ edge"
==149== 
==149== 
==149== HEAP SUMMARY:
==149==     in use at exit: 0 bytes in 0 blocks
==149==   total heap usage: 2,473 allocs, 2,473 frees, 286,016 bytes allocated
==149== 
==149== All heap blocks were freed -- no leaks are possible
==149== 
==149== For counts of detected and suppressed errors, rerun with: -v
==149== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::triplerotate hard

- **Points**: 2 / 2

```
==151== Memcheck, a memory error detector
==151== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==151== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==151== Command: ./test -r xml "List::triplerotate\ hard"
==151== 
==151== 
==151== HEAP SUMMARY:
==151==     in use at exit: 0 bytes in 0 blocks
==151==   total heap usage: 2,479 allocs, 2,479 frees, 286,200 bytes allocated
==151== 
==151== All heap blocks were freed -- no leaks are possible
==151== 
==151== For counts of detected and suppressed errors, rerun with: -v
==151== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - List::triplerotate image

- **Points**: 10 / 10





### ✗ - [0/1] - List::ListIterator::operator-- from end

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


---