int main()
{
  {
    const char* keke = new char(10);
    char* haha = keke;
  }
  {
    char* const keke = new char(10);
    char* haha = keke;
  }
  return 0;
}
