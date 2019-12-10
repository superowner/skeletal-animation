//
//  shader.h
//  skinned-animation
//
//  Created by tigertang on 2018/8/3.
//  Copyright © 2018 tigertang. All rights reserved.
//

#ifndef SKELETAL_ANIMATION_SHADER_H_
#define SKELETAL_ANIMATION_SHADER_H_

#include <string>

class Shader {
public:
    Shader() = delete;
    Shader(const std::string &vs_path, const std::string &fs_path);
    void Use() const;
    template <typename T> void SetUniform(const std::string &identifier, const T&) const;
    
private:
    static uint32_t Compile(uint32_t type, const std::string &source, const std::string &path);
    static uint32_t Link(uint32_t vs_id, uint32_t fs_id);
    
    uint32_t id;
};

#endif