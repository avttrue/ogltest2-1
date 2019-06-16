#ifndef OGLWIDGET_H
#define OGLWIDGET_H

#include <QMatrix4x4>
#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>
#include <QOpenGLBuffer>
#include <QOpenGLFunctions>

struct VertexData
{
    VertexData()
    {}
    VertexData(QVector3D p, QVector2D t, QVector3D n)
        : position(p), textcoord(t), normal(n)
    {}
    QVector3D position;
    QVector2D textcoord;
    QVector3D normal;
};

class OGLWidget : public QOpenGLWidget
{
    Q_OBJECT

public:
    OGLWidget(QWidget *parent = nullptr);
    ~OGLWidget();

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

    void initShaders();
    void initCube(float width);

private:
    QMatrix4x4 m_PojectionMatrix;
    QOpenGLShaderProgram m_Program;
    QOpenGLTexture* m_Texture;
    QOpenGLBuffer m_ArrayBuffer;
    QOpenGLBuffer m_IndexBuffer;
    QVector2D m_MousePosition;
    QQuaternion m_Rotation;
};

#endif // OGLWIDGET_H
