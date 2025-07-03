int sum(const int a, const int b)
{
  // covered
  const int c = a + b;
  return c;
}

int mul(const int a, const int b)
{
  // not covered
  const int c = a * b;
  return c;
}
