#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter{
public:
  Counter();
  void reset();
  void count();
  int getCount();
  static int  getTotalCount();
private:
  int m_count;
  static int m_totalCount;
};
#endif // _COUNTER_H_
