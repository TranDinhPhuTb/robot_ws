// Generated by gencpp from file moveit_simple_grasps/GraspGeneratorOptions.msg
// DO NOT EDIT!


#ifndef MOVEIT_SIMPLE_GRASPS_MESSAGE_GRASPGENERATOROPTIONS_H
#define MOVEIT_SIMPLE_GRASPS_MESSAGE_GRASPGENERATOROPTIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace moveit_simple_grasps
{
template <class ContainerAllocator>
struct GraspGeneratorOptions_
{
  typedef GraspGeneratorOptions_<ContainerAllocator> Type;

  GraspGeneratorOptions_()
    : grasp_axis(0)
    , grasp_direction(0)
    , grasp_rotation(0)  {
    }
  GraspGeneratorOptions_(const ContainerAllocator& _alloc)
    : grasp_axis(0)
    , grasp_direction(0)
    , grasp_rotation(0)  {
  (void)_alloc;
    }



   typedef uint8_t _grasp_axis_type;
  _grasp_axis_type grasp_axis;

   typedef uint8_t _grasp_direction_type;
  _grasp_direction_type grasp_direction;

   typedef uint8_t _grasp_rotation_type;
  _grasp_rotation_type grasp_rotation;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(GRASP_AXIS_X)
  #undef GRASP_AXIS_X
#endif
#if defined(_WIN32) && defined(GRASP_AXIS_Y)
  #undef GRASP_AXIS_Y
#endif
#if defined(_WIN32) && defined(GRASP_AXIS_Z)
  #undef GRASP_AXIS_Z
#endif
#if defined(_WIN32) && defined(GRASP_DIRECTION_UP)
  #undef GRASP_DIRECTION_UP
#endif
#if defined(_WIN32) && defined(GRASP_DIRECTION_DOWN)
  #undef GRASP_DIRECTION_DOWN
#endif
#if defined(_WIN32) && defined(GRASP_ROTATION_HALF)
  #undef GRASP_ROTATION_HALF
#endif
#if defined(_WIN32) && defined(GRASP_ROTATION_FULL)
  #undef GRASP_ROTATION_FULL
#endif

  enum {
    GRASP_AXIS_X = 0u,
    GRASP_AXIS_Y = 1u,
    GRASP_AXIS_Z = 2u,
    GRASP_DIRECTION_UP = 0u,
    GRASP_DIRECTION_DOWN = 1u,
    GRASP_ROTATION_HALF = 0u,
    GRASP_ROTATION_FULL = 1u,
  };


  typedef boost::shared_ptr< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> const> ConstPtr;

}; // struct GraspGeneratorOptions_

typedef ::moveit_simple_grasps::GraspGeneratorOptions_<std::allocator<void> > GraspGeneratorOptions;

typedef boost::shared_ptr< ::moveit_simple_grasps::GraspGeneratorOptions > GraspGeneratorOptionsPtr;
typedef boost::shared_ptr< ::moveit_simple_grasps::GraspGeneratorOptions const> GraspGeneratorOptionsConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator1> & lhs, const ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator2> & rhs)
{
  return lhs.grasp_axis == rhs.grasp_axis &&
    lhs.grasp_direction == rhs.grasp_direction &&
    lhs.grasp_rotation == rhs.grasp_rotation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator1> & lhs, const ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace moveit_simple_grasps

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "99863eab001728611523218e2a9810a3";
  }

  static const char* value(const ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x99863eab00172861ULL;
  static const uint64_t static_value2 = 0x1523218e2a9810a3ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_simple_grasps/GraspGeneratorOptions";
  }

  static const char* value(const ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 grasp_axis\n"
"uint8 GRASP_AXIS_X = 0\n"
"uint8 GRASP_AXIS_Y = 1\n"
"uint8 GRASP_AXIS_Z = 2\n"
"\n"
"uint8 grasp_direction\n"
"uint8 GRASP_DIRECTION_UP = 0\n"
"uint8 GRASP_DIRECTION_DOWN = 1\n"
"\n"
"uint8 grasp_rotation\n"
"uint8 GRASP_ROTATION_HALF = 0\n"
"uint8 GRASP_ROTATION_FULL = 1\n"
;
  }

  static const char* value(const ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.grasp_axis);
      stream.next(m.grasp_direction);
      stream.next(m.grasp_rotation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspGeneratorOptions_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_simple_grasps::GraspGeneratorOptions_<ContainerAllocator>& v)
  {
    s << indent << "grasp_axis: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.grasp_axis);
    s << indent << "grasp_direction: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.grasp_direction);
    s << indent << "grasp_rotation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.grasp_rotation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_SIMPLE_GRASPS_MESSAGE_GRASPGENERATOROPTIONS_H
