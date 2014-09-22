double pow_recursive(double base, int exponent)
{
  if(exponent <= 1)
  {
    // return the base
    return base;
  }
  else
  {
    // recursively call pow_recursive with decremented exponent
    return base * pow_recursive(base, exponent - 1);
  }
}