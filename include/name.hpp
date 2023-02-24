#ifndef __NAME_H__
#define __NAME_H__
#include <string>

class Name {
 private:
  std::string first;
  std::string last;

 public:
  Name();
  Name(const Name&);

  std::string getFirst() const;
  std::string getLast() const;

  void setFirst(const std::string&);
  void setLast(const std::string&);

  std::string toString() const;

  Name& operator=(const Name&);

  bool operator==(const Name&) const;
  bool operator!=(const Name&) const;
  bool operator<(const Name&) const;
  bool operator>(const Name&) const;
  bool operator<=(const Name&) const;
  bool operator>=(const Name&) const;

  friend std::ostream& operator<<(std::ostream&, const Name&);
  friend std::istream& operator>>(std::istream&, Name&);
};
#endif  //__NAME_H__