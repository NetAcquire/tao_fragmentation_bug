// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.5.11
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       https://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     https://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_codegen.cpp:149

#ifndef _TAO_IDL_ECHOC_5KS1VZ_H_
#define _TAO_IDL_ECHOC_5KS1VZ_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 11
#error This file should be regenerated with TAO_IDL
#endif

// TAO_IDL - Generated from
// /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_root/root_ch.cpp:157
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_interface.cpp:748

#if !defined (_ECHO__VAR_OUT_CH_)
#define _ECHO__VAR_OUT_CH_

class Echo;
typedef Echo *Echo_ptr;
typedef TAO_Objref_Var_T<Echo> Echo_var;
typedef TAO_Objref_Out_T<Echo> Echo_out;


#endif /* end #if !defined */

// TAO_IDL - Generated from
// /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:40

class  Echo
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Echo>;

  // TAO_IDL - Generated from
  // /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_type.cpp:304

  typedef Echo_ptr _ptr_type;
  typedef Echo_var _var_type;
  typedef Echo_out _out_type;

  // The static operations.
  static Echo_ptr _duplicate (Echo_ptr obj);

  static void _tao_release (Echo_ptr obj);

  static Echo_ptr _narrow (::CORBA::Object_ptr obj);
  static Echo_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Echo_ptr _nil (void);

  // TAO_IDL - Generated from
  // /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_ECHO_LIST_CH_)
#define _ECHO_LIST_CH_

  class List;
  typedef ::TAO_VarSeq_Var_T<List> List_var;
  typedef ::TAO_Seq_Out_T<List> List_out;
  

  class  List
    : public
        ::TAO::unbounded_basic_string_sequence<char>
  {
  public:
    List (void);
    List ( ::CORBA::ULong max);
    List (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Char ** buffer,
      ::CORBA::Boolean release = false);
#if defined (ACE_HAS_CPP11)
    List (const List &) = default;
    List (List &&) = default;
    List& operator= (const List &) = default;
    List& operator= (List &&) = default;
#endif /* ACE_HAS_CPP11 */
    virtual ~List (void);
    

    // TAO_IDL - Generated from
    // /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_type.cpp:304

    
    typedef List_var _var_type;
    typedef List_out _out_type;
  };

#endif /* end #if !defined */

  virtual ::Echo::List * return_list (
    void);

  virtual void shutdown (
    void);

  // TAO_IDL - Generated from
  // /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Echo (void);

  // Concrete non-local interface only.
  Echo (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Echo (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Echo (void);

private:
  // Private and unimplemented for concrete interfaces.
  Echo (const Echo &);

  void operator= (const Echo &);
};

// TAO_IDL - Generated from
// /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:145

#if !defined (_ECHO__ARG_TRAITS_)
#define _ECHO__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Echo>
    : public
        Object_Arg_Traits_T<
            ::Echo_ptr,
            ::Echo_var,
            ::Echo_out,
            TAO::Objref_Traits<Echo>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Echo::List>
    : public
        Var_Size_Arg_Traits_T<
            ::Echo::List,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_ECHO__TRAITS_)
#define _ECHO__TRAITS_

  template<>
  struct  Objref_Traits< ::Echo>
  {
    static ::Echo_ptr duplicate (
        ::Echo_ptr p);
    static void release (
        ::Echo_ptr p);
    static ::Echo_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Echo_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Echo_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Echo_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Echo_List_H_
#define _TAO_CDR_OP_Echo_List_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Echo::List &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Echo::List &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Echo_List_H_ */

// TAO_IDL - Generated from
// /home/joachima/devel/acetao/6_5_11-2_5_11/TAO/TAO_IDL/be/be_codegen.cpp:1686
#if defined (__ACE_INLINE__)
#include "EchoC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

