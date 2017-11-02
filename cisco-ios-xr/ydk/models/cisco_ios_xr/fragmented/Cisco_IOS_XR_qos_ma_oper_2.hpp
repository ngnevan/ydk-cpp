#ifndef _CISCO_IOS_XR_QOS_MA_OPER_2_
#define _CISCO_IOS_XR_QOS_MA_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_qos_ma_oper_0.hpp"
#include "Cisco_IOS_XR_qos_ma_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_qos_ma_oper {


class Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvInterfaceTable::Interface::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite : public ydk::Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NvSatelliteStatistics; //type: Qos::NvSatellite::NvSatelliteStatistics
        class NvSatelliteStatus; //type: Qos::NvSatellite::NvSatelliteStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics> nv_satellite_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatus> nv_satellite_status;
        
}; // Qos::NvSatellite


class Qos::NvSatellite::NvSatelliteStatistics : public ydk::Entity
{
    public:
        NvSatelliteStatistics();
        ~NvSatelliteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NvSatelliteIds; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds> nv_satellite_ids;
        
}; // Qos::NvSatellite::NvSatelliteStatistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds : public ydk::Entity
{
    public:
        NvSatelliteIds();
        ~NvSatelliteIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NvSatelliteId; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId> > nv_satellite_id;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId : public ydk::Entity
{
    public:
        NvSatelliteId();
        ~NvSatelliteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf satellite_id; //type: int32
        class NvSatelliteInterfaces; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces> nv_satellite_interfaces;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces : public ydk::Entity
{
    public:
        NvSatelliteInterfaces();
        ~NvSatelliteInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NvSatelliteInterface; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface> > nv_satellite_interface;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface : public ydk::Entity
{
    public:
        NvSatelliteInterface();
        ~NvSatelliteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class MemberInterfaces; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces
        class Input; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input
        class Output; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces> member_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Output> output;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces : public ydk::Entity
{
    public:
        MemberInterfaces();
        ~MemberInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberInterface; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface> > member_interface;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface : public ydk::Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class SatelliteIds; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds
        class Input; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input
        class Output; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds> satellite_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output> output;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds : public ydk::Entity
{
    public:
        SatelliteIds();
        ~SatelliteIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SatelliteId; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId> > satellite_id;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId : public ydk::Entity
{
    public:
        SatelliteId();
        ~SatelliteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nv_satellite_id; //type: int32
        class Input; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input
        class Output; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output> output;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics> statistics;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames : public ydk::Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance : public ydk::Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics> statistics;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames : public ydk::Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance : public ydk::Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::SatelliteIds::SatelliteId::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics> statistics;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames : public ydk::Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance : public ydk::Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Input::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames> service_policy_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics> statistics;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames : public ydk::Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance : public ydk::Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::MemberInterfaces::MemberInterface::Output::Statistics::ClassStats::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyNames; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames
        class Statistics; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames> service_policy_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics> statistics;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames : public ydk::Entity
{
    public:
        ServicePolicyNames();
        ~ServicePolicyNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyInstance; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance> > service_policy_instance;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance : public ydk::Entity
{
    public:
        ServicePolicyInstance();
        ~ServicePolicyInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::ServicePolicyNames::ServicePolicyInstance


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats : public ydk::Entity
{
    public:
        ClassStats();
        ~ClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats
        class ChildPolicy; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy> child_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy : public ydk::Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf state; //type: PolicyState
        ydk::YLeaf state_description; //type: string
        ydk::YLeaf satid; //type: uint32
        class ClassStats_; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_> > class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_ : public ydk::Entity
{
    public:
        ClassStats_();
        ~ClassStats_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter_validity_bitmask; //type: uint64
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf shared_queue_id; //type: uint32
        ydk::YLeaf queue_descr; //type: string
        ydk::YLeaf cac_state; //type: CacState
        class GeneralStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats
        class IphcStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats
        class CacStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats
        class QueueStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray
        class PoliceStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray
        class WredStatsArray; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats> general_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats> iphc_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats> cac_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray> > queue_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray> > police_stats_array;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray> > wred_stats_array;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats : public ydk::Entity
{
    public:
        GeneralStats();
        ~GeneralStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_packets; //type: uint64
        ydk::YLeaf transmit_bytes; //type: uint64
        ydk::YLeaf total_drop_packets; //type: uint64
        ydk::YLeaf total_drop_bytes; //type: uint64
        ydk::YLeaf total_drop_rate; //type: uint32
        ydk::YLeaf match_data_rate; //type: uint32
        ydk::YLeaf total_transmit_rate; //type: uint32
        ydk::YLeaf pre_policy_matched_packets; //type: uint64
        ydk::YLeaf pre_policy_matched_bytes; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::GeneralStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats : public ydk::Entity
{
    public:
        IphcStats();
        ~IphcStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_tcp_total_out_packets; //type: uint64
        ydk::YLeaf non_tcp_total_out_bytes; //type: uint64
        ydk::YLeaf non_tcp_bytes_saved; //type: uint64
        ydk::YLeaf non_tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf non_tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf non_tcp_full_header_packets_out; //type: uint64
        ydk::YLeaf tcp_total_out_packets; //type: uint64
        ydk::YLeaf tcp_total_out_bytes; //type: uint64
        ydk::YLeaf tcp_bytes_saved; //type: uint64
        ydk::YLeaf tcp_compressed_packets_out; //type: uint64
        ydk::YLeaf tcp_bytes_sent_rate; //type: uint32
        ydk::YLeaf tcp_full_header_packets_out; //type: uint64

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::IphcStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueInstanceLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength : public ydk::Entity
{
    public:
        QueueAverageLength();
        ~QueueAverageLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueAverageLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength : public ydk::Entity
{
    public:
        QueueMaxLength();
        ~QueueMaxLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::QueueStatsArray::QueueMaxLength


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray : public ydk::Entity
{
    public:
        PoliceStatsArray();
        ~PoliceStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf violate_packets; //type: uint64
        ydk::YLeaf violate_bytes; //type: uint64
        ydk::YLeaf parent_drop_packets; //type: uint64
        ydk::YLeaf parent_drop_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        ydk::YLeaf violate_rate; //type: uint32
        class ColorClassStats; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats> color_class_stats;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats : public ydk::Entity
{
    public:
        ColorClassStats();
        ~ColorClassStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conform_class_conform_packets; //type: uint64
        ydk::YLeaf conform_class_conform_bytes; //type: uint64
        ydk::YLeaf conform_class_conform_rate; //type: uint32
        ydk::YLeaf conform_class_exceed_packets; //type: uint64
        ydk::YLeaf conform_class_exceed_bytes; //type: uint64
        ydk::YLeaf conform_class_exceed_rate; //type: uint32
        ydk::YLeaf conform_class_violate_packets; //type: uint64
        ydk::YLeaf conform_class_violate_bytes; //type: uint64
        ydk::YLeaf conform_class_violate_rate; //type: uint32
        ydk::YLeaf exceed_class_exceed_packets; //type: uint64
        ydk::YLeaf exceed_class_exceed_bytes; //type: uint64
        ydk::YLeaf exceed_class_exceed_rate; //type: uint32
        ydk::YLeaf exceed_class_violate_packets; //type: uint64
        ydk::YLeaf exceed_class_violate_bytes; //type: uint64
        ydk::YLeaf exceed_class_violate_rate; //type: uint32
        ydk::YLeaf violate_class_violate_packets; //type: uint64
        ydk::YLeaf violate_class_violate_bytes; //type: uint64
        ydk::YLeaf violate_class_violate_rate; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::PoliceStatsArray::ColorClassStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray : public ydk::Entity
{
    public:
        WredStatsArray();
        ~WredStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_title; //type: string
        ydk::YLeaf red_transmit_packets; //type: uint64
        ydk::YLeaf red_transmit_bytes; //type: uint64
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf red_ecn_marked_packets; //type: uint64
        ydk::YLeaf red_ecn_marked_bytes; //type: uint64
        class RedLabel; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel> > red_label;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel : public ydk::Entity
{
    public:
        RedLabel();
        ~RedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wred_type; //type: Wred
        ydk::YLeaf value_; //type: uint8

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::ChildPolicy::ClassStats_::WredStatsArray::RedLabel


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats : public ydk::Entity
{
    public:
        CacStats();
        ~CacStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drop_packets; //type: uint64
        ydk::YLeaf drop_bytes; //type: uint64
        ydk::YLeaf drop_rates; //type: uint32
        ydk::YLeaf admitpackets; //type: uint64
        ydk::YLeaf admit_bytes; //type: uint64
        ydk::YLeaf admit_rates; //type: uint32

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::CacStats


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray : public ydk::Entity
{
    public:
        QueueStatsArray();
        ~QueueStatsArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf tail_drop_packets; //type: uint64
        ydk::YLeaf tail_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp0_drop_packets; //type: uint64
        ydk::YLeaf atm_clp0_drop_bytes; //type: uint64
        ydk::YLeaf atm_clp1_drop_packets; //type: uint64
        ydk::YLeaf atm_clp1_drop_bytes; //type: uint64
        ydk::YLeaf queue_drop_threshold; //type: uint32
        ydk::YLeaf forced_wred_stats_display; //type: boolean
        ydk::YLeaf random_drop_packets; //type: uint64
        ydk::YLeaf random_drop_bytes; //type: uint64
        ydk::YLeaf max_threshold_packets; //type: uint64
        ydk::YLeaf max_threshold_bytes; //type: uint64
        ydk::YLeaf conform_packets; //type: uint64
        ydk::YLeaf conform_bytes; //type: uint64
        ydk::YLeaf exceed_packets; //type: uint64
        ydk::YLeaf exceed_bytes; //type: uint64
        ydk::YLeaf conform_rate; //type: uint32
        ydk::YLeaf exceed_rate; //type: uint32
        class QueueInstanceLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength
        class QueueAverageLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength
        class QueueMaxLength; //type: Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength> > queue_instance_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueAverageLength> > queue_average_length;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_qos_ma_oper::Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueMaxLength> > queue_max_length;
        
}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray


class Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength : public ydk::Entity
{
    public:
        QueueInstanceLength();
        ~QueueInstanceLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: PolicyParamUnit

}; // Qos::NvSatellite::NvSatelliteStatistics::NvSatelliteIds::NvSatelliteId::NvSatelliteInterfaces::NvSatelliteInterface::Input::Statistics::ClassStats::QueueStatsArray::QueueInstanceLength


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_OPER_2_ */

