#include "test.h"

namespace bzlals {
namespace test {

class TestBvOpIsCons : public TestBvOp
{
};

TEST_F(TestBvOpIsCons, add)
{
  test_binary<BitVectorAdd>(IS_CONS, ADD, 0);
  test_binary<BitVectorAdd>(IS_CONS, ADD, 1);
}

TEST_F(TestBvOpIsCons, and)
{
  test_binary<BitVectorAnd>(IS_CONS, AND, 0);
  test_binary<BitVectorAnd>(IS_CONS, AND, 1);
}

TEST_F(TestBvOpIsCons, concat)
{
  test_binary<BitVectorConcat>(IS_CONS, CONCAT, 0);
  test_binary<BitVectorConcat>(IS_CONS, CONCAT, 1);
}

TEST_F(TestBvOpIsCons, eq)
{
  test_binary<BitVectorEq>(IS_CONS, EQ, 0);
  test_binary<BitVectorEq>(IS_CONS, EQ, 1);
}

TEST_F(TestBvOpIsCons, mul)
{
  test_binary<BitVectorMul>(IS_CONS, MUL, 0);
  test_binary<BitVectorMul>(IS_CONS, MUL, 1);
}

TEST_F(TestBvOpIsCons, shl)
{
  test_binary<BitVectorShl>(IS_CONS, SHL, 0);
  test_binary<BitVectorShl>(IS_CONS, SHL, 1);
}

TEST_F(TestBvOpIsCons, shr)
{
  test_binary<BitVectorShr>(IS_CONS, SHR, 0);
  test_binary<BitVectorShr>(IS_CONS, SHR, 1);
}

TEST_F(TestBvOpIsCons, ashr)
{
  test_binary<BitVectorAshr>(IS_CONS, ASHR, 0);
  test_binary<BitVectorAshr>(IS_CONS, ASHR, 1);
}

TEST_F(TestBvOpIsCons, udiv)
{
  test_binary<BitVectorUdiv>(IS_CONS, UDIV, 0);
  test_binary<BitVectorUdiv>(IS_CONS, UDIV, 1);
}

TEST_F(TestBvOpIsCons, ult)
{
  test_binary<BitVectorUlt>(IS_CONS, ULT, 0);
  test_binary<BitVectorUlt>(IS_CONS, ULT, 1);
}

TEST_F(TestBvOpIsCons, urem)
{
  test_binary<BitVectorUrem>(IS_CONS, UREM, 0);
  test_binary<BitVectorUrem>(IS_CONS, UREM, 1);
}

TEST_F(TestBvOpIsCons, slt)
{
  test_binary<BitVectorSlt>(IS_CONS, SLT, 0);
  test_binary<BitVectorSlt>(IS_CONS, SLT, 1);
}

TEST_F(TestBvOpIsCons, xor)
{
  test_binary<BitVectorXor>(IS_CONS, XOR, 0);
  test_binary<BitVectorXor>(IS_CONS, XOR, 1);
}

TEST_F(TestBvOpIsCons, ite)
{
  test_ite(IS_CONS, 0);
  test_ite(IS_CONS, 1);
  test_ite(IS_CONS, 2);
}

TEST_F(TestBvOpIsCons, extract) { test_extract(IS_CONS); }

TEST_F(TestBvOpIsCons, sext) { test_sext(IS_CONS); }
}  // namespace test
}  // namespace bzlals