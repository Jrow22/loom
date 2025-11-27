// Copyright 2017, University of Freiburg,
// Chair of Algorithms and Data Structures.
// Authors: Patrick Brosi <brosi@informatik.uni-freiburg.de>

#include "shared/linegraph/Line.h"
#include <unordered_map>

using shared::linegraph::Line;

// _____________________________________________________________________________
const std::string& Line::id() const { return _id; }

// _____________________________________________________________________________
const std::string& Line::label() const { return _label; }

// _____________________________________________________________________________
const std::string& Line::color() const { return _color; }

//added by James
const std::vector<std::string>  Line::otherLines() const { return _otherLines; };


