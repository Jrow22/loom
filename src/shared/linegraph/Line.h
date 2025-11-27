// Copyright 2017, University of Freiburg,
// Chair of Algorithms and Data Structures.
// Authors: Patrick Brosi <brosi@informatik.uni-freiburg.de>

#ifndef SHARED_LINEGRAPH_LINE_H_
#define SHARED_LINEGRAPH_LINE_H_

#include <string>
#include <vector>
#include <unordered_map>

namespace shared {
namespace linegraph {

class Line {
 public:
  Line(const std::string& id, const std::string& label,
       const std::string& color, std::vector<std::string> otherLines)
      : _id(id), _label(label), _color(color), _otherLines(otherLines) {}

  const std::string& id() const;
  const std::string& label() const;
  const std::string& color() const;

  void setColor(const std::string& c) { _color = c; };
  //added by James
  const std::vector<std::string>  otherLines() const;

 private:
  std::string _id, _label, _color;
  //added by James
  std::vector<std::string> _otherLines;
};
}
}

#endif  // SHARED_LINEGRAPH_LINE_H_
