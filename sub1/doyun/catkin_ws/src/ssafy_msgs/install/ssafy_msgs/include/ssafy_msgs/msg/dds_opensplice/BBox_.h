//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: BBox_.h
//  Source: ssafy_msgs\msg\BBox_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice 6.9.190403OSS
//  
//******************************************************************
#ifndef _BBOX__H_
#define _BBOX__H_

#include "sacpp_mapping.h"
#include "ssafy_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"


namespace ssafy_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct BBox_;

         struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_ssafy_msgs BBox_
         {
               struct _idx_bbox__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Short, struct _idx_bbox__seq_uniq_> _idx_bbox__seq;
               typedef DDS_DCPSSequence_var < _idx_bbox__seq> _idx_bbox__seq_var;
               typedef DDS_DCPSSequence_out < _idx_bbox__seq> _idx_bbox__seq_out;
               struct _x__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Short, struct _x__seq_uniq_> _x__seq;
               typedef DDS_DCPSSequence_var < _x__seq> _x__seq_var;
               typedef DDS_DCPSSequence_out < _x__seq> _x__seq_out;
               struct _y__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Short, struct _y__seq_uniq_> _y__seq;
               typedef DDS_DCPSSequence_var < _y__seq> _y__seq_var;
               typedef DDS_DCPSSequence_out < _y__seq> _y__seq_out;
               struct _w__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Short, struct _w__seq_uniq_> _w__seq;
               typedef DDS_DCPSSequence_var < _w__seq> _w__seq_var;
               typedef DDS_DCPSSequence_out < _w__seq> _w__seq_out;
               struct _h__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Short, struct _h__seq_uniq_> _h__seq;
               typedef DDS_DCPSSequence_var < _h__seq> _h__seq_var;
               typedef DDS_DCPSSequence_out < _h__seq> _h__seq_out;
               DDS::Short num_bbox_;
               _idx_bbox__seq idx_bbox_;
               _x__seq x_;
               _y__seq y_;
               _w__seq w_;
               _h__seq h_;
         };

         typedef DDS_DCPSStruct_var < BBox_> BBox__var;
         typedef DDS_DCPSStruct_out < BBox_> BBox__out;
      }
   }
}




#endif
