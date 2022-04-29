#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "stack.h"
#include "queue.h"
#include <iostream>




TEST_CASE("Testing push, top, pop, & is_empty")
{
  Stack *s = new Stack();

  // push & top
  try
  {
    s->top();
  }
  catch (int e)
  {
    CHECK(e == 1);
  }

  s->push(1);
  CHECK(s->top() == 1);

  s->push(2);
  s->push(3);
  CHECK(s->top() == 3);

  // pop
  s->push(4);
  s->push(5);
  s->push(6);
  s->push(7);

  CHECK(s->top() == 7);
  CHECK(s->pop() == 7);

  CHECK(s->top() == 6);
  CHECK(s->pop() == 6);

  CHECK(s->top() == 5);
  CHECK(s->pop() == 5);

  //is_empty

  int x = s->pop();
  x = s->pop();
  x = s->pop();
  x = s->pop();
  CHECK(!s->is_empty());

  try
  {
    s->pop();
  }
  catch (int e)
  {
    CHECK(e == 1);
  }
}
