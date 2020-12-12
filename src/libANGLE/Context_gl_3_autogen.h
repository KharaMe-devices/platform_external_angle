// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Context_gl_3_autogen.h: Creates a macro for interfaces in Context.

#ifndef ANGLE_CONTEXT_GL_3_AUTOGEN_H_
#define ANGLE_CONTEXT_GL_3_AUTOGEN_H_

#define ANGLE_GL_3_CONTEXT_API                                                                     \
    void beginConditionalRender(GLuint id, GLenum mode);                                           \
    void clampColor(GLenum target, GLenum clamp);                                                  \
    void endConditionalRender();                                                                   \
    void framebufferTexture1D(GLenum target, GLenum attachment, TextureTarget textargetPacked,     \
                              TextureID texturePacked, GLint level);                               \
    void vertexAttribI1i(GLuint index, GLint x);                                                   \
    void vertexAttribI1iv(GLuint index, const GLint *v);                                           \
    void vertexAttribI1ui(GLuint index, GLuint x);                                                 \
    void vertexAttribI1uiv(GLuint index, const GLuint *v);                                         \
    void vertexAttribI2i(GLuint index, GLint x, GLint y);                                          \
    void vertexAttribI2iv(GLuint index, const GLint *v);                                           \
    void vertexAttribI2ui(GLuint index, GLuint x, GLuint y);                                       \
    void vertexAttribI2uiv(GLuint index, const GLuint *v);                                         \
    void vertexAttribI3i(GLuint index, GLint x, GLint y, GLint z);                                 \
    void vertexAttribI3iv(GLuint index, const GLint *v);                                           \
    void vertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z);                             \
    void vertexAttribI3uiv(GLuint index, const GLuint *v);                                         \
    void vertexAttribI4bv(GLuint index, const GLbyte *v);                                          \
    void vertexAttribI4sv(GLuint index, const GLshort *v);                                         \
    void vertexAttribI4ubv(GLuint index, const GLubyte *v);                                        \
    void vertexAttribI4usv(GLuint index, const GLushort *v);                                       \
    void getActiveUniformName(ShaderProgramID programPacked, GLuint uniformIndex, GLsizei bufSize, \
                              GLsizei *length, GLchar *uniformName);                               \
    void primitiveRestartIndex(GLuint index);                                                      \
    void texImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat,              \
                               GLsizei width, GLsizei height, GLboolean fixedsamplelocations);     \
    void texImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat,              \
                               GLsizei width, GLsizei height, GLsizei depth,                       \
                               GLboolean fixedsamplelocations);                                    \
    void colorP3ui(GLenum type, GLuint color);                                                     \
    void colorP3uiv(GLenum type, const GLuint *color);                                             \
    void colorP4ui(GLenum type, GLuint color);                                                     \
    void colorP4uiv(GLenum type, const GLuint *color);                                             \
    void multiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords);                            \
    void multiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint *coords);                    \
    void multiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords);                            \
    void multiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint *coords);                    \
    void multiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords);                            \
    void multiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint *coords);                    \
    void multiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords);                            \
    void multiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint *coords);                    \
    void normalP3ui(GLenum type, GLuint coords);                                                   \
    void normalP3uiv(GLenum type, const GLuint *coords);                                           \
    void secondaryColorP3ui(GLenum type, GLuint color);                                            \
    void secondaryColorP3uiv(GLenum type, const GLuint *color);                                    \
    void texCoordP1ui(GLenum type, GLuint coords);                                                 \
    void texCoordP1uiv(GLenum type, const GLuint *coords);                                         \
    void texCoordP2ui(GLenum type, GLuint coords);                                                 \
    void texCoordP2uiv(GLenum type, const GLuint *coords);                                         \
    void texCoordP3ui(GLenum type, GLuint coords);                                                 \
    void texCoordP3uiv(GLenum type, const GLuint *coords);                                         \
    void texCoordP4ui(GLenum type, GLuint coords);                                                 \
    void texCoordP4uiv(GLenum type, const GLuint *coords);                                         \
    void vertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);          \
    void vertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);  \
    void vertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);          \
    void vertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);  \
    void vertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);          \
    void vertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);  \
    void vertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);          \
    void vertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);  \
    void vertexP2ui(GLenum type, GLuint value);                                                    \
    void vertexP2uiv(GLenum type, const GLuint *value);                                            \
    void vertexP3ui(GLenum type, GLuint value);                                                    \
    void vertexP3uiv(GLenum type, const GLuint *value);                                            \
    void vertexP4ui(GLenum type, GLuint value);                                                    \
    void vertexP4uiv(GLenum type, const GLuint *value);

#endif  // ANGLE_CONTEXT_API_3_AUTOGEN_H_