#ifndef _CISCO_IOS_XR_ASIC_ERRORS_OPER_1_
#define _CISCO_IOS_XR_ASIC_ERRORS_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_asic_errors_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asic_errors_oper {


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors : public ydk::Entity
{
    public:
        BackPressureSoftErrors();
        ~BackPressureSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors : public ydk::Entity
{
    public:
        GenericSoftErrors();
        ~GenericSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors : public ydk::Entity
{
    public:
        LinkSoftErrors();
        ~LinkSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors : public ydk::Entity
{
    public:
        ConfigurationSoftErrors();
        ~ConfigurationSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors : public ydk::Entity
{
    public:
        MultipleBitHardErrors();
        ~MultipleBitHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors : public ydk::Entity
{
    public:
        UnexpectedSoftErrors();
        ~UnexpectedSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard : public ydk::Entity
{
    public:
        OutofResourceHard();
        ~OutofResourceHard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors : public ydk::Entity
{
    public:
        HardwareHardErrors();
        ~HardwareHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors : public ydk::Entity
{
    public:
        ParitySoftErrors();
        ~ParitySoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors : public ydk::Entity
{
    public:
        DescriptorSoftErrors();
        ~DescriptorSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors : public ydk::Entity
{
    public:
        InterfaceSoftErrors();
        ~InterfaceSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors : public ydk::Entity
{
    public:
        IoHardErrors();
        ~IoHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors : public ydk::Entity
{
    public:
        ResetHardErrors();
        ~ResetHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors : public ydk::Entity
{
    public:
        UcodeHardErrors();
        ~UcodeHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard : public ydk::Entity
{
    public:
        AsicErrorMbeHard();
        ~AsicErrorMbeHard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr


}
}

#endif /* _CISCO_IOS_XR_ASIC_ERRORS_OPER_1_ */

