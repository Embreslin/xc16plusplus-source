
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_CDR_AbstractCdrOutput__
#define __gnu_CORBA_CDR_AbstractCdrOutput__

#pragma interface

#include <org/omg/CORBA_2_3/portable/OutputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace CDR
      {
          class AbstractCdrOutput;
          class AbstractDataOutput;
          class BufferedCdrOutput;
          class gnuRuntime;
      }
      namespace GIOP
      {
          class CodeSetServiceContext;
      }
        class Version;
    }
  }
  namespace java
  {
    namespace math
    {
        class BigDecimal;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Context;
          class ContextList;
          class ORB;
          class Object;
          class TypeCode;
      }
    }
  }
}

class gnu::CORBA::CDR::AbstractCdrOutput : public ::org::omg::CORBA_2_3::portable::OutputStream
{

public:
  AbstractCdrOutput(::java::io::OutputStream *);
  AbstractCdrOutput();
  virtual void setOffset(jint) = 0;
  virtual void cloneSettings(::gnu::CORBA::CDR::AbstractCdrOutput *);
  virtual void setCodeSet(::gnu::CORBA::GIOP::CodeSetServiceContext *);
  virtual ::gnu::CORBA::GIOP::CodeSetServiceContext * getCodeSet();
  virtual void setOrb(::org::omg::CORBA::ORB *);
  virtual void setOutputStream(::java::io::OutputStream *);
  virtual void setVersion(::gnu::CORBA::Version *);
  virtual void setBigEndian(jboolean);
  virtual void align(jint) = 0;
  virtual ::gnu::CORBA::CDR::AbstractCdrOutput * createEncapsulation();
  virtual ::org::omg::CORBA::ORB * orb();
  virtual void write(jint);
  virtual void write(JArray< jbyte > *);
  virtual void write(JArray< jbyte > *, jint, jint);
  virtual void write_Context(::org::omg::CORBA::Context *, ::org::omg::CORBA::ContextList *);
  virtual void write_Object(::org::omg::CORBA::Object *);
  virtual void write_TypeCode(::org::omg::CORBA::TypeCode *);
  virtual void write_any(::org::omg::CORBA::Any *);
  virtual void write_boolean(jboolean);
  virtual void write_boolean_array(JArray< jboolean > *, jint, jint);
  virtual void write_char(jchar);
  virtual void write_char_array(JArray< jchar > *, jint, jint);
  virtual void write_double(jdouble);
  virtual void write_double_array(JArray< jdouble > *, jint, jint);
  virtual void write_fixed(::java::math::BigDecimal *);
  virtual void write_float(jfloat);
  virtual void write_float_array(JArray< jfloat > *, jint, jint);
  virtual void write_long(jint);
  virtual void write_long_array(JArray< jint > *, jint, jint);
  virtual void write_longlong(jlong);
  virtual void write_longlong_array(JArray< jlong > *, jint, jint);
  virtual void write_octet(jbyte);
  virtual void write_octet_array(JArray< jbyte > *, jint, jint);
  virtual void write_sequence(JArray< jbyte > *);
  virtual void write_sequence(::gnu::CORBA::CDR::BufferedCdrOutput *);
  virtual void write_short(jshort);
  virtual void write_short_array(JArray< jshort > *, jint, jint);
  virtual void write_string(::java::lang::String *);
  virtual void write_ulong(jint);
  virtual void write_ulong_array(JArray< jint > *, jint, jint);
  virtual void write_ulonglong(jlong);
  virtual void write_ulonglong_array(JArray< jlong > *, jint, jint);
  virtual void write_ushort(jshort);
  virtual void write_ushort_array(JArray< jshort > *, jint, jint);
  virtual void write_wchar(jchar);
  virtual void write_wchar_array(JArray< jchar > *, jint, jint);
  virtual void write_wstring(::java::lang::String *);
  virtual void write_any_array(JArray< ::org::omg::CORBA::Any * > *, jint, jint);
  virtual JArray< ::java::lang::String * > * _truncatable_ids();
  virtual void write_Abstract(::java::lang::Object *);
  virtual void write_Value(::java::io::Serializable *);
  ::gnu::CORBA::CDR::gnuRuntime * __attribute__((aligned(__alignof__( ::org::omg::CORBA_2_3::portable::OutputStream)))) runtime;
public: // actually protected
  ::gnu::CORBA::CDR::AbstractDataOutput * b;
  ::org::omg::CORBA::ORB * orb__;
  ::gnu::CORBA::Version * giop;
  ::gnu::CORBA::GIOP::CodeSetServiceContext * codeset;
private:
  ::java::lang::String * narrow_charset;
  ::java::lang::String * wide_charset;
  jboolean narrow_native;
  jboolean wide_native;
  jboolean little_endian;
  ::java::io::OutputStream * actual_stream;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_CDR_AbstractCdrOutput__