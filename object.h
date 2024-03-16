#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object{
public:
  Object();
  ~Object();
  static int getObjectNum();
private:
  static int m_objectNum;
};
#endif // _OBJECT_H_
