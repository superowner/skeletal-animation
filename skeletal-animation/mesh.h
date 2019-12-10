//
//  mesh.h
//  skinned-animation
//
//  Created by tigertang on 2018/8/3.
//  Copyright © 2018 tigertang. All rights reserved.
//

#ifndef SKELETAL_ANIMATION_MESH_H_
#define SKELETAL_ANIMATION_MESH_H_

#include <memory>
#include <vector>

#include <assimp/scene.h>

#include "namer.h"
#include "shader.h"
#include "vertex.h"

class Mesh {
 public:
  Mesh(const std::string &directory_path, aiMesh *mesh, const aiScene *scene,
       Namer &bone_namer, std::vector<glm::mat4> &bone_offsets);
  ~Mesh();
  void Draw(std::weak_ptr<Shader> shader_ptr) const;

 private:
  uint32_t vao_, vbo_, ebo_, texture_id_, indices_size_;
};

#endif
