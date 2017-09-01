template<Class T>
class Vector3 {
  T x;
  T y;
  T z;

  Vector3() : Vector3(0,0,0) {}
  Vector3(T x,T y,T z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }

  Vector3 operator +(Vector3<T> b) {
    Vector3<T> c = Vector3(this->x+b.x,this->y+b.y,this->z+b.z);
  }
  Vector3 operator -(Vector3<T> b) {
    Vector3<T> c = Vector3(this->x-b.x,this->y-b.y,this->z-b.z);
  }
  Vector3 operator *(Vector3<T> b) {
    Vector3<T> r = Vector3(this->y*b.z-this->z*b.y,this->z*b.x-this->x*b.z,this->x*b.y-this->y*b.x);
    return r;
  }
  Vector3 operator *(T e) {
    Vector3<T> v = Vector3(this->x*e,this->y*e,this->z*e);
    return v;
  }
  Vector3 operator /(T e) {
    Vector3<T> v = Vector3(this->x/e,this->y/e,this->z/e);
    return v;
  }
  Vector3 operator %(T e) {
    Vector3<T> v = Vector3(this->x%e,this->y%e,this->z%e);
    return v;
  }
  Vector3 operator +=(Vector3<T> b) {
    return (*this) + b;
  }
  Vector3 operator -=(Vector<T> b) {
    return (*this) - b;
  }
  Vector3 operator *=(Vector<T> b) {
    return (*this) * b;
  }
  Vector3 operator *=(T b) {
    return (*this) * b;
  }.
  Vector3 operator /=(T b) {
    return (*this) / b;
  }
  Vector3 operator %=(T b) {
    return (*this) % b;
  }
};
