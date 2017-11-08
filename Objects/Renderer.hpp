// miniGraphics is distributed under the OSI-approved BSD 3-clause License.
// See LICENSE.txt for details.
//
// Copyright (c) 2017
// National Technology & Engineering Solutions of Sandia, LLC (NTESS). Under
// the terms of Contract DE-NA0003525 with NTESS, the U.S. Government retains
// certain rights in this software.

#ifndef RENDERER_H
#define RENDERER_H

#include "Image.hpp"
#include "Triangle.hpp"

#include <vector>

class Renderer {
 public:
  virtual void render(const std::vector<Triangle>& triangles, Image* image) = 0;
};

#endif
