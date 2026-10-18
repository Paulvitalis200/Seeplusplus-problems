#ifndef WIDGET_H_CLASS
#define WIDGET_H_CLASS

class Widget {
public:
    Widget(bool enabled);
    virtual ~Widget() = default;
    virtual void draw();
    void setEnabled(bool enabled);
    bool getEnabled() const;
private:
    bool enabled;
protected:
    bool isReachable = false;
};

#endif