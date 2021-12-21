---

This report was generated for **cbhatia3** using **2cc21938d3f52fcb9f297b27793fed6cc39f8229** (latest commit as of **December 8th 2021, 11:59 pm**)

---




## Score: 54/61 (88.52%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c StickerSheet.cpp -o .objs/StickerSheet.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part1.cpp -o .objs/tests/tests-part1.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part2.cpp -o .objs/tests/tests-part2.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/Image.o .objs/StickerSheet.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-part1.o .objs/tests/tests-part2.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Image lighten() lightens pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image lighten() does not lighten a pixel above 1.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) darkens pixels by 0.2

- **Points**: 1 / 1





### ✓ - [1/1] - Image darken(0.2) does not darken a pixel below 0.0

- **Points**: 1 / 1





### ✓ - [1/1] - Image saturate() saturates a pixels by 0.1

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) rotates the color

- **Points**: 1 / 1





### ✓ - [1/1] - Image rotateColor(double) keeps the hue in the range 0..360

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2.0) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(2) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(0.5) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(10000\, 200) results in the correct width/height

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) results in the correct width/height

- **Points**: 1 / 1





### ✗ - [0/1] - Image scale(240\, 50) results in the correct width/height

- **Points**: 0 / 1


```
Original: img.height() * 0.5 == result.height()
Expanded: 50.0 == 0
```


### ✗ - [0/1] - Image scale(180\, 80) results in the correct width/height

- **Points**: 0 / 1


```
Original: img.height() * 0.5 == result.height()
Expanded: 50.0 == 0
```


### ✓ - [1/1] - Image scale(10000\, 200) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✓ - [1/1] - Image scale(720\, 10000) scales pixel data in a reasonable way

- **Points**: 1 / 1





### ✗ - [0/1] - Image scale(240\, 50) scales pixel data in a reasonable way

- **Points**: 0 / 1


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✗ - [0/1] - Image scale(180\, 80) scales pixel data in a reasonable way

- **Points**: 0 / 1


```
Fatal Error: SIGABRT - Abort (abnormal termination) signal
```


### ✓ - [3/3] - Image doesn't have any memory erorrs

- **Points**: 3 / 3

```
==113== Memcheck, a memory error detector
==113== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==113== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==113== Command: ./test -r xml "Image\ doesn't\ have\ any\ memory\ erorrs"
==113== 
==113== 
==113== HEAP SUMMARY:
==113==     in use at exit: 0 bytes in 0 blocks
==113==   total heap usage: 2,589 allocs, 2,589 frees, 333,480 bytes allocated
==113== 
==113== All heap blocks were freed -- no leaks are possible
==113== 
==113== For counts of detected and suppressed errors, rerun with: -v
==113== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - A basic StickerSheet works

- **Points**: 5 / 5





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard stickers when resized larger

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() does not discard original stickers when resized smaller

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() can increase the number of stickers on an image

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::changeMaxStickers() discards stickers beyond the end of a smaller StickerSheet

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the last sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove the first sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::removeSticker() can remove all stickers

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns the sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::getSticker() returns NULL for a removed sticker

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() translates a sticker's location

- **Points**: 1 / 1





### ✓ - [1/1] - StickerSheet::translate() returns false for a non-existant sticker

- **Points**: 1 / 1





### ✓ - [5/5] - A complex StickerSheet is correct

- **Points**: 5 / 5





### ✓ - [2/2] - StickerSheet's copy constructor makes an independent copy

- **Points**: 2 / 2





### ✓ - [2/2] - StickerSheet's assignment operator makes an independent copy

- **Points**: 2 / 2





### ✗ - [0/3] - StickerSheet doesn't have any memory errors

- **Points**: 0 / 3

```
==131== Memcheck, a memory error detector
==131== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==131== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==131== Command: ./test -r xml "StickerSheet\ doesn't\ have\ any\ memory\ errors"
==131== 
==131== 
==131== HEAP SUMMARY:
==131==     in use at exit: 7,094,640 bytes in 6 blocks
==131==   total heap usage: 3,465 allocs, 3,459 frees, 243,990,448 bytes allocated
==131== 
==131== 16 bytes in 1 blocks are definitely lost in loss record 1 of 6
==131==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==131==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==131==    by 0x409B8D: StickerSheet::addSticker(Image&, unsigned int, unsigned int) (StickerSheet.cpp:106)
==131==    by 0x432F43: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:270)
==131==    by 0x433268: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:300)
==131==    by 0x46AFC2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==131==    by 0x45B716: Catch::TestCase::invoke() const (catch.hpp:10793)
==131==    by 0x45B64C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==131==    by 0x457BA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==131==    by 0x45617E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==131==    by 0x45F516: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==131==    by 0x45E1B2: Catch::Session::runInternal() (catch.hpp:10149)
==131== 
==131== 2,364,864 bytes in 1 blocks are possibly lost in loss record 2 of 6
==131==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==131==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==131==    by 0x40B649: cs225::PNG::_copy(cs225::PNG const&) (PNG.cpp:35)
==131==    by 0x40B92E: cs225::PNG::operator=(cs225::PNG const&) (PNG.cpp:63)
==131==    by 0x40A296: Image::operator=(Image const&) (Image.h:10)
==131==    by 0x409BF9: StickerSheet::addSticker(Image&, unsigned int, unsigned int) (StickerSheet.cpp:108)
==131==    by 0x432F43: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:270)
==131==    by 0x433268: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:300)
==131==    by 0x46AFC2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==131==    by 0x45B716: Catch::TestCase::invoke() const (catch.hpp:10793)
==131==    by 0x45B64C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==131==    by 0x457BA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==131== 
==131== 2,364,880 (16 direct, 2,364,864 indirect) bytes in 1 blocks are definitely lost in loss record 5 of 6
==131==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==131==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==131==    by 0x409B8D: StickerSheet::addSticker(Image&, unsigned int, unsigned int) (StickerSheet.cpp:106)
==131==    by 0x432F43: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:270)
==131==    by 0x433216: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:295)
==131==    by 0x46AFC2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==131==    by 0x45B716: Catch::TestCase::invoke() const (catch.hpp:10793)
==131==    by 0x45B64C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==131==    by 0x457BA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==131==    by 0x45617E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==131==    by 0x45F516: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==131==    by 0x45E1B2: Catch::Session::runInternal() (catch.hpp:10149)
==131== 
==131== 2,364,880 (16 direct, 2,364,864 indirect) bytes in 1 blocks are definitely lost in loss record 6 of 6
==131==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==131==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==131==    by 0x409B8D: StickerSheet::addSticker(Image&, unsigned int, unsigned int) (StickerSheet.cpp:106)
==131==    by 0x432F43: stickersheetStressTest(StickerSheet&) (tests-part2.cpp:270)
==131==    by 0x433257: ____C_A_T_C_H____T_E_S_T____32() (tests-part2.cpp:299)
==131==    by 0x46AFC2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==131==    by 0x45B716: Catch::TestCase::invoke() const (catch.hpp:10793)
==131==    by 0x45B64C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==131==    by 0x457BA6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==131==    by 0x45617E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==131==    by 0x45F516: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==131==    by 0x45E1B2: Catch::Session::runInternal() (catch.hpp:10149)
==131== 
==131== LEAK SUMMARY:
==131==    definitely lost: 48 bytes in 3 blocks
==131==    indirectly lost: 4,729,728 bytes in 2 blocks
==131==      possibly lost: 2,364,864 bytes in 1 blocks
==131==    still reachable: 0 bytes in 0 blocks
==131==         suppressed: 0 bytes in 0 blocks
==131== 
==131== For counts of detected and suppressed errors, rerun with: -v
==131== ERROR SUMMARY: 4 errors from 4 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - myImage.png exists and contains stickers

- **Points**: 10 / 10





---