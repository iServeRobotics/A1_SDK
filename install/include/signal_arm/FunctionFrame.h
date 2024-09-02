// Generated by gencpp from file signal_arm/FunctionFrame.msg
// DO NOT EDIT!


#ifndef SIGNAL_ARM_MESSAGE_FUNCTIONFRAME_H
#define SIGNAL_ARM_MESSAGE_FUNCTIONFRAME_H

#include <ros/service_traits.h>


#include <signal_arm/FunctionFrameRequest.h>
#include <signal_arm/FunctionFrameResponse.h>


namespace signal_arm
{

struct FunctionFrame
{

typedef FunctionFrameRequest Request;
typedef FunctionFrameResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FunctionFrame
} // namespace signal_arm


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::signal_arm::FunctionFrame > {
  static const char* value()
  {
    return "28ca10d14356fafac343096e46d08b18";
  }

  static const char* value(const ::signal_arm::FunctionFrame&) { return value(); }
};

template<>
struct DataType< ::signal_arm::FunctionFrame > {
  static const char* value()
  {
    return "signal_arm/FunctionFrame";
  }

  static const char* value(const ::signal_arm::FunctionFrame&) { return value(); }
};


// service_traits::MD5Sum< ::signal_arm::FunctionFrameRequest> should match
// service_traits::MD5Sum< ::signal_arm::FunctionFrame >
template<>
struct MD5Sum< ::signal_arm::FunctionFrameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::signal_arm::FunctionFrame >::value();
  }
  static const char* value(const ::signal_arm::FunctionFrameRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::signal_arm::FunctionFrameRequest> should match
// service_traits::DataType< ::signal_arm::FunctionFrame >
template<>
struct DataType< ::signal_arm::FunctionFrameRequest>
{
  static const char* value()
  {
    return DataType< ::signal_arm::FunctionFrame >::value();
  }
  static const char* value(const ::signal_arm::FunctionFrameRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::signal_arm::FunctionFrameResponse> should match
// service_traits::MD5Sum< ::signal_arm::FunctionFrame >
template<>
struct MD5Sum< ::signal_arm::FunctionFrameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::signal_arm::FunctionFrame >::value();
  }
  static const char* value(const ::signal_arm::FunctionFrameResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::signal_arm::FunctionFrameResponse> should match
// service_traits::DataType< ::signal_arm::FunctionFrame >
template<>
struct DataType< ::signal_arm::FunctionFrameResponse>
{
  static const char* value()
  {
    return DataType< ::signal_arm::FunctionFrame >::value();
  }
  static const char* value(const ::signal_arm::FunctionFrameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SIGNAL_ARM_MESSAGE_FUNCTIONFRAME_H