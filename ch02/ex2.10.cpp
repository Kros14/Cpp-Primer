std::string global_str;
int global_int;
int main()
{
  int local_int;
  std::string local_str;
}

//global_int 是全局变量，所以初值为 0 。 local_int 是局部变量并且没有初始化，它的初值是未定义的。 
//global_str 和 local_str 是 string 类的对象，该对象定义了默认的初始化方式，即初始化为空字符串。
