//
//  namer.h
//  skinned-animation
//
//  Created by tigertang on 2018/8/6.
//

#ifndef SKELETAL_ANIMATION_NAMER_H_
#define SKELETAL_ANIMATION_NAMER_H_

#include <map>
#include <string>

class Namer {
 public:
  Namer();
  uint32_t Name(const std::string &name);
  uint32_t total() const;
  std::map<std::string, uint32_t> &map();
  void Clear();

 private:
  std::map<std::string, uint32_t> map_;
  uint32_t total_;
};

#endif