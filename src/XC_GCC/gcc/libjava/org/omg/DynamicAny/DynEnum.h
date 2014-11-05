
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_DynamicAny_DynEnum__
#define __org_omg_DynamicAny_DynEnum__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Context;
          class ContextList;
          class DomainManager;
          class ExceptionList;
          class NVList;
          class NamedValue;
          class Object;
          class Policy;
          class Request;
          class SetOverrideType;
          class TypeCode;
      }
      namespace DynamicAny
      {
          class DynAny;
          class DynEnum;
      }
    }
  }
}

class org::omg::DynamicAny::DynEnum : public ::java::lang::Object
{

public:
  virtual ::java::lang::String * get_as_string() = 0;
  virtual jint get_as_ulong() = 0;
  virtual void set_as_string(::java::lang::String *) = 0;
  virtual void set_as_ulong(jint) = 0;
  virtual void assign(::org::omg::DynamicAny::DynAny *) = 0;
  virtual ::org::omg::DynamicAny::DynAny * copy() = 0;
  virtual ::org::omg::DynamicAny::DynAny * current_component() = 0;
  virtual void destroy() = 0;
  virtual void from_any(::org::omg::CORBA::Any *) = 0;
  virtual ::org::omg::CORBA::Any * get_any() = 0;
  virtual jboolean get_boolean() = 0;
  virtual jchar get_char() = 0;
  virtual jdouble get_double() = 0;
  virtual jfloat get_float() = 0;
  virtual jint get_long() = 0;
  virtual jlong get_longlong() = 0;
  virtual jbyte get_octet() = 0;
  virtual ::org::omg::CORBA::Object * get_reference() = 0;
  virtual jshort get_short() = 0;
  virtual ::java::lang::String * get_string() = 0;
  virtual ::org::omg::CORBA::TypeCode * get_typecode() = 0;
  virtual jint get_ulong() = 0;
  virtual jlong get_ulonglong() = 0;
  virtual jshort get_ushort() = 0;
  virtual ::java::io::Serializable * get_val() = 0;
  virtual jchar get_wchar() = 0;
  virtual ::java::lang::String * get_wstring() = 0;
  virtual void insert_any(::org::omg::CORBA::Any *) = 0;
  virtual void insert_boolean(jboolean) = 0;
  virtual void insert_char(jchar) = 0;
  virtual void insert_double(jdouble) = 0;
  virtual void insert_float(jfloat) = 0;
  virtual void insert_long(jint) = 0;
  virtual void insert_longlong(jlong) = 0;
  virtual void insert_octet(jbyte) = 0;
  virtual void insert_reference(::org::omg::CORBA::Object *) = 0;
  virtual void insert_short(jshort) = 0;
  virtual void insert_string(::java::lang::String *) = 0;
  virtual void insert_typecode(::org::omg::CORBA::TypeCode *) = 0;
  virtual void insert_ulong(jint) = 0;
  virtual void insert_ulonglong(jlong) = 0;
  virtual void insert_ushort(jshort) = 0;
  virtual void insert_val(::java::io::Serializable *) = 0;
  virtual void insert_wchar(jchar) = 0;
  virtual void insert_wstring(::java::lang::String *) = 0;
  virtual jboolean next() = 0;
  virtual void rewind() = 0;
  virtual jboolean seek(jint) = 0;
  virtual ::org::omg::CORBA::Any * to_any() = 0;
  virtual ::org::omg::CORBA::TypeCode * type() = 0;
  virtual void insert_dyn_any(::org::omg::DynamicAny::DynAny *) = 0;
  virtual jboolean equal(::org::omg::DynamicAny::DynAny *) = 0;
  virtual jint component_count() = 0;
  virtual ::org::omg::DynamicAny::DynAny * get_dyn_any() = 0;
  virtual ::org::omg::CORBA::Request * _create_request(::org::omg::CORBA::Context *, ::java::lang::String *, ::org::omg::CORBA::NVList *, ::org::omg::CORBA::NamedValue *) = 0;
  virtual ::org::omg::CORBA::Request * _create_request(::org::omg::CORBA::Context *, ::java::lang::String *, ::org::omg::CORBA::NVList *, ::org::omg::CORBA::NamedValue *, ::org::omg::CORBA::ExceptionList *, ::org::omg::CORBA::ContextList *) = 0;
  virtual ::org::omg::CORBA::Object * _duplicate() = 0;
  virtual JArray< ::org::omg::CORBA::DomainManager * > * _get_domain_managers() = 0;
  virtual ::org::omg::CORBA::Object * _get_interface_def() = 0;
  virtual ::org::omg::CORBA::Policy * _get_policy(jint) = 0;
  virtual jint _hash(jint) = 0;
  virtual jboolean _is_a(::java::lang::String *) = 0;
  virtual jboolean _is_equivalent(::org::omg::CORBA::Object *) = 0;
  virtual jboolean _non_existent() = 0;
  virtual void _release() = 0;
  virtual ::org::omg::CORBA::Request * _request(::java::lang::String *) = 0;
  virtual ::org::omg::CORBA::Object * _set_policy_override(JArray< ::org::omg::CORBA::Policy * > *, ::org::omg::CORBA::SetOverrideType *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_omg_DynamicAny_DynEnum__