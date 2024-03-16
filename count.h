#ifndef _COUNT_H_
#define _COUNT_H_

class Count {
private:
  int m_count;
public:
  Count();
  void reset();
  int getCount();
  void count();
  void count(int number);
};

#endif // _COUNT_H_
