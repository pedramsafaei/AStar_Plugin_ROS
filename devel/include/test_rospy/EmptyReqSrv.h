// Generated by gencpp from file test_rospy/EmptyReqSrv.msg
// DO NOT EDIT!


#ifndef TEST_ROSPY_MESSAGE_EMPTYREQSRV_H
#define TEST_ROSPY_MESSAGE_EMPTYREQSRV_H

#include <ros/service_traits.h>


#include <test_rospy/EmptyReqSrvRequest.h>
#include <test_rospy/EmptyReqSrvResponse.h>


namespace test_rospy
{

struct EmptyReqSrv
{

typedef EmptyReqSrvRequest Request;
typedef EmptyReqSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct EmptyReqSrv
} // namespace test_rospy


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::test_rospy::EmptyReqSrv > {
  static const char* value()
  {
    return "1280578cbe4073963a4321b9248d566e";
  }

  static const char* value(const ::test_rospy::EmptyReqSrv&) { return value(); }
};

template<>
struct DataType< ::test_rospy::EmptyReqSrv > {
  static const char* value()
  {
    return "test_rospy/EmptyReqSrv";
  }

  static const char* value(const ::test_rospy::EmptyReqSrv&) { return value(); }
};


// service_traits::MD5Sum< ::test_rospy::EmptyReqSrvRequest> should match 
// service_traits::MD5Sum< ::test_rospy::EmptyReqSrv > 
template<>
struct MD5Sum< ::test_rospy::EmptyReqSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::test_rospy::EmptyReqSrv >::value();
  }
  static const char* value(const ::test_rospy::EmptyReqSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::test_rospy::EmptyReqSrvRequest> should match 
// service_traits::DataType< ::test_rospy::EmptyReqSrv > 
template<>
struct DataType< ::test_rospy::EmptyReqSrvRequest>
{
  static const char* value()
  {
    return DataType< ::test_rospy::EmptyReqSrv >::value();
  }
  static const char* value(const ::test_rospy::EmptyReqSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::test_rospy::EmptyReqSrvResponse> should match 
// service_traits::MD5Sum< ::test_rospy::EmptyReqSrv > 
template<>
struct MD5Sum< ::test_rospy::EmptyReqSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::test_rospy::EmptyReqSrv >::value();
  }
  static const char* value(const ::test_rospy::EmptyReqSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::test_rospy::EmptyReqSrvResponse> should match 
// service_traits::DataType< ::test_rospy::EmptyReqSrv > 
template<>
struct DataType< ::test_rospy::EmptyReqSrvResponse>
{
  static const char* value()
  {
    return DataType< ::test_rospy::EmptyReqSrv >::value();
  }
  static const char* value(const ::test_rospy::EmptyReqSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TEST_ROSPY_MESSAGE_EMPTYREQSRV_H