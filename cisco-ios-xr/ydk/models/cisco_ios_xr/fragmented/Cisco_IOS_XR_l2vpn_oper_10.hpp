#ifndef _CISCO_IOS_XR_L2VPN_OPER_10_
#define _CISCO_IOS_XR_L2VPN_OPER_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_4.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_8.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_9.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

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

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface : public ydk::Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf payload_bytes; //type: uint16
        class Parameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters> parameters;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

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

        ydk::YLeaf type; //type: L2vpnInterface
        class Ethernet; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm> tdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm> atm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr> fr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw> pseudowire_iw;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

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

        ydk::YLeaf xconnect_tags; //type: uint8

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

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

        ydk::YLeaf xconnect_tags; //type: uint8
        ydk::YLeaf vlan_rewrite_tag; //type: uint16
        ydk::YLeaf simple_efp; //type: uint8
        ydk::YLeaf encapsulation_type; //type: uint8
        ydk::YLeaf outer_tag; //type: uint16
        class RewriteTag; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag
        class VlanRange; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag> > rewrite_tag;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange> > vlan_range;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag : public ydk::Entity
{
    public:
        RewriteTag();
        ~RewriteTag();

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

        ydk::YLeaf entry; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

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

        ydk::YLeaf lower; //type: uint16
        ydk::YLeaf upper; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm : public ydk::Entity
{
    public:
        Tdm();
        ~Tdm();

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

        ydk::YLeaf timeslot_group; //type: string
        ydk::YLeaf timeslot_rate; //type: uint8
        ydk::YLeaf tdm_mode; //type: L2vpnTdmMode
        class TdmOptions; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions> tdm_options;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions : public ydk::Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

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

        ydk::YLeaf payload_bytes; //type: uint16
        ydk::YLeaf bit_rate; //type: uint32
        ydk::YLeaf rtp; //type: L2vpnTdmRtpOption
        ydk::YLeaf timestamp_mode; //type: L2vpnTimeStampMode
        ydk::YLeaf signalling_packets; //type: uint8
        ydk::YLeaf cas; //type: uint8
        ydk::YLeaf rtp_header_payload_type; //type: uint8
        ydk::YLeaf timestamp_clock_freq; //type: uint16
        ydk::YLeaf ssrc; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

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

        ydk::YLeaf maximum_number_cells_packed; //type: uint16
        ydk::YLeaf maximum_number_cells_un_packed; //type: uint16
        ydk::YLeaf atm_mode; //type: L2vpnAtmMode
        ydk::YLeaf vpi; //type: uint16
        ydk::YLeaf vci; //type: uint16

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr : public ydk::Entity
{
    public:
        Fr();
        ~Fr();

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

        ydk::YLeaf fr_mode; //type: L2vpnFrMode
        ydk::YLeaf dlci; //type: uint32

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther : public ydk::Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList> interface_list;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

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

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw : public ydk::Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

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

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf internal_label; //type: uint32
        class InterfaceList; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList> interface_list;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

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

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        class Interface; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf replicate_status; //type: IflistRepStatus

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

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

        ydk::YLeaf option; //type: L2vpnPrefpathOption
        ydk::YLeaf next_hop_ip; //type: uint32
        ydk::YLeaf te_tunnel_interface_number; //type: uint32
        ydk::YLeaf ip_tunnel_interface_number; //type: uint32
        ydk::YLeaf tp_tunnel_interface_number; //type: uint32
        class SrtePolicy; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy> srte_policy;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy : public ydk::Entity
{
    public:
        SrtePolicy();
        ~SrtePolicy();

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

        ydk::YLeaf policy_name; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath::SrtePolicy


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling : public ydk::Entity
{
    public:
        LocalSignalling();
        ~LocalSignalling();

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

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling : public ydk::Entity
{
    public:
        RemoteSignalling();
        ~RemoteSignalling();

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

        ydk::YLeaf pw_status; //type: uint32
        class StatusTlv; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv> > tlv;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv : public ydk::Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

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

        ydk::YLeaf pw_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf description; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

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

        class ImpositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

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

        class DispositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove> mac_move;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber : public ydk::Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

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

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw : public ydk::Entity
{
    public:
        P2MpPw();
        ~P2MpPw();

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

        ydk::YLeaf local_available; //type: boolean
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf local_ptree_type; //type: L2vpnP2MpPwPtree
        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf local_extended_tunnel_id; //type: string
        ydk::YLeaf local_p2mp_id; //type: uint32
        ydk::YLeaf local_flags; //type: uint8
        ydk::YLeaf remote_available; //type: boolean
        ydk::YLeaf remote_label; //type: uint32
        ydk::YLeaf remote_ptree_type; //type: L2vpnP2MpPwPtree
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf remote_extended_tunnel_id; //type: string
        ydk::YLeaf remote_p2mp_id; //type: uint32
        ydk::YLeaf remote_flags; //type: uint8

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

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

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

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

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac : public ydk::Entity
{
    public:
        StaticMac();
        ~StaticMac();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf bmac; //type: string
        ydk::YLeaf next_hop_ip; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo : public ydk::Entity
{
    public:
        BridgeDomainInfo();
        ~BridgeDomainInfo();

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

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf bridge_name; //type: string
        ydk::YLeaf bridge_domain_id; //type: uint32
        ydk::YLeaf bridge_description; //type: string
        ydk::YLeaf bridge_state; //type: L2vpnBridgeState
        ydk::YLeaf bridge_coupled_state; //type: L2vpnBridgeCoupledState
        ydk::YLeaf bridge_shg_id; //type: uint32
        ydk::YLeaf bridge_msti; //type: uint32
        ydk::YLeaf acpwup; //type: uint32
        ydk::YLeaf bridge_internal_msti; //type: uint32
        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf number_vf_is; //type: uint32
        ydk::YLeaf number_access_vf_is; //type: uint32
        ydk::YLeaf number_a_cs; //type: uint32
        ydk::YLeaf number_a_cs_up; //type: uint32
        ydk::YLeaf number_pseudowires; //type: uint32
        ydk::YLeaf number_p_ws_up; //type: uint32
        ydk::YLeaf standby_pseudowires; //type: uint32
        ydk::YLeaf number_pb_bs; //type: uint8
        ydk::YLeaf number_pb_bs_up; //type: uint8
        ydk::YLeaf num_vn_is; //type: uint32
        ydk::YLeaf num_vn_is_up; //type: uint32
        ydk::YLeaf partially_programmed_pseudowires; //type: uint32
        ydk::YLeaf partially_programmed_a_cs; //type: uint32
        ydk::YLeaf bridge_mtu; //type: uint32
        ydk::YLeaf shutdown; //type: boolean
        ydk::YLeaf mac_limit_down; //type: boolean
        ydk::YLeaf flodd_group_id_down; //type: boolean
        ydk::YLeaf mac_withdraw; //type: boolean
        ydk::YLeaf mac_withdraw_access; //type: boolean
        ydk::YLeaf mac_withdraw_relay; //type: boolean
        ydk::YLeaf mac_withdraw_option; //type: L2vpnBagMacWithdrawOption
        ydk::YLeaf p2mp_enabled; //type: boolean
        ydk::YLeaf bridge_type; //type: L2vpnBridge
        ydk::YLeaf vine_fsm_state; //type: string
        ydk::YLeaf time_created; //type: string
        ydk::YLeaf time_elapsed_creation; //type: string
        ydk::YLeaf last_time_status_changed; //type: string
        ydk::YLeaf time_elapsed_status_changed; //type: string
        ydk::YLeaf load_balance; //type: L2vpnLoadBal
        ydk::YLeaf is_bridge_partially_programmed; //type: boolean
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf is_rd_configured; //type: boolean
        ydk::YLeaf imposition_pkt_count; //type: uint64
        ydk::YLeaf imposition_byte_count; //type: uint64
        ydk::YLeaf disposition_pkt_count; //type: uint64
        ydk::YLeaf disposition_bytecount; //type: uint64
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters
        class PbbParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters
        class EvpnParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters
        class VniParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters
        class Rd; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd
        class MacFilter; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter
        class BridgeVfi; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi
        class BridgeAccessVfi; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters> security_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters> pbb_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters> evpn_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters> vni_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd> rd;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter> > mac_filter;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi> > bridge_vfi;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi> > bridge_access_vfi;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

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

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters : public ydk::Entity
{
    public:
        PbbParameters();
        ~PbbParameters();

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

        ydk::YLeaf type; //type: L2vpnBridge
        class PbbEdge; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge
        class PbbCore; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge> pbb_edge;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore> pbb_core;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge : public ydk::Entity
{
    public:
        PbbEdge();
        ~PbbEdge();

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

        ydk::YLeaf i_sid; //type: uint32
        ydk::YLeaf core_bridge_name; //type: string
        ydk::YLeaf core_bridge_state; //type: L2vpnBridgeState
        ydk::YLeaf mirp_lite_status; //type: L2vpnMirpLiteStatus
        ydk::YLeaf mirp_lite_protocol; //type: L2vpnMirpLiteProtocolInfo
        class EdgePort; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort> edge_port;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort : public ydk::Entity
{
    public:
        EdgePort();
        ~EdgePort();

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

        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf unknown_unicast_mac_set; //type: boolean
        ydk::YLeaf unknown_unicast_mac; //type: string
        ydk::YLeaf edge_port_state; //type: L2vpnVirtualportState
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters
        class Statistics; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics
        class BmacMapping; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters> security_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping> > bmac_mapping;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

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

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

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

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::Base::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

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

        class ImpositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

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

        class DispositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove> mac_move;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::DispostionStats::MacMove


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber : public ydk::Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

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

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::Statistics::SequenceNumber


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping : public ydk::Entity
{
    public:
        BmacMapping();
        ~BmacMapping();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf bmac; //type: string
        ydk::YLeaf next_hop_ip; //type: string

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbEdge::EdgePort::BmacMapping


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore : public ydk::Entity
{
    public:
        PbbCore();
        ~PbbCore();

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

        ydk::YLeaf num_ass_edge; //type: uint32
        class CorePort; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort> core_port;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort : public ydk::Entity
{
    public:
        CorePort();
        ~CorePort();

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

        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf vlan_id; //type: uint32
        ydk::YLeaf core_port_state; //type: L2vpnVirtualportState
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters> security_parameters;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

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

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

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

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::Base::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters::PbbCore::CorePort::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters : public ydk::Entity
{
    public:
        EvpnParameters();
        ~EvpnParameters();

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

        ydk::YLeaf evi; //type: uint32
        class EvpnPort; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort> evpn_port;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort : public ydk::Entity
{
    public:
        EvpnPort();
        ~EvpnPort();

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

        ydk::YLeaf xconnect_id; //type: uint32
        ydk::YLeaf evpn_port_state; //type: L2vpnVirtualportState
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters
        class Statistics; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters> security_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics> statistics;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

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

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

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

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::Base::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

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

        class ImpositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

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

        class DispositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove> mac_move;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop : public ydk::Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop : public ydk::Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop : public ydk::Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop : public ydk::Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops : public ydk::Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop : public ydk::Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop : public ydk::Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops : public ydk::Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats : public ydk::Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove : public ydk::Entity
{
    public:
        MacMove();
        ~MacMove();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::DispostionStats::MacMove


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber : public ydk::Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

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

        ydk::YLeaf sequence_number_sent; //type: uint32
        ydk::YLeaf sequence_number_expected; //type: uint32
        ydk::YLeaf bypassed_inbound_sequence_packet; //type: uint64
        ydk::YLeaf bypassed_out_sequence_packet; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters::EvpnPort::Statistics::SequenceNumber


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters : public ydk::Entity
{
    public:
        VniParameters();
        ~VniParameters();

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

        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf overlay; //type: string
        ydk::YLeaf source_ip_addr; //type: string
        ydk::YLeaf multicast_group_addr; //type: string
        ydk::YLeaf anycast_vtep_ip_addr; //type: string
        ydk::YLeaf anycast_mcast_group_addr; //type: string
        ydk::YLeaf udp_port; //type: uint32
        ydk::YLeaf vni_encap_type; //type: L2vpnVniEncaps
        ydk::YLeaf vni_port_state; //type: L2vpnSegmentState
        ydk::YLeaf vni_mode; //type: L2vpnVniMode
        ydk::YLeaf ingress_replication; //type: boolean
        ydk::YLeaf xconnect_id; //type: uint32
        class SecurityParameters; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters
        class Statistics; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics
        class StaticMac; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters> security_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics> statistics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::StaticMac> > static_mac;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters : public ydk::Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

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

        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf dhcpv4_trust; //type: boolean
        class Base; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base> base;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

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

        ydk::YLeaf mac_limit; //type: uint32
        ydk::YLeaf mac_limit_action; //type: L2vpnBagMacLimitAction
        ydk::YLeaf mac_limit_notification; //type: L2vpnBagMacLimitNotify
        ydk::YLeaf mac_aging_time; //type: uint32
        ydk::YLeaf mac_aging_mode; //type: L2vpnBagMacAgingMode
        ydk::YLeaf mac_flooding; //type: boolean
        ydk::YLeaf mac_learning; //type: boolean
        ydk::YLeaf learn_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        ydk::YLeaf mac_limit_reached; //type: boolean
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf flood_unknown_unicast_enabled; //type: boolean
        ydk::YLeaf mac_port_down_flush_enabled; //type: boolean
        ydk::YLeaf split_horizon_group_id; //type: uint32
        ydk::YLeaf is_ip_source_guard_enabled; //type: boolean
        ydk::YLeaf is_ipsg_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_enabled; //type: boolean
        ydk::YLeaf is_dai_logging_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        ydk::YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_enabled; //type: boolean
        ydk::YLeaf mac_secure_action; //type: L2vpnBagMacSecureAction
        ydk::YLeaf is_mac_secure_logging_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        ydk::YLeaf is_mac_secure_threshold_enabled; //type: boolean
        ydk::YLeaf dai_address_validation_mask; //type: uint8
        ydk::YLeaf dhcpv4_snoop; //type: boolean
        ydk::YLeaf dhcpv4_profile_name; //type: string
        ydk::YLeaf igm_pv4_disabled; //type: boolean
        ydk::YLeaf igm_pv4_profile_name; //type: string
        ydk::YLeaf mld_profile_name; //type: string
        ydk::YLeaf mmrp_flood_optimization; //type: boolean
        ydk::YLeaf unicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf unicast_storm_control_pps; //type: uint64
        ydk::YLeaf unicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf multicast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf multicast_storm_control_pps; //type: uint64
        ydk::YLeaf multicast_storm_control_kb_ps; //type: uint64
        ydk::YLeaf broadcast_storm_control_rate_unit; //type: L2vpnBagStormControlRateUnit
        ydk::YLeaf broadcast_storm_control_pps; //type: uint64
        ydk::YLeaf broadcast_storm_control_kb_ps; //type: uint64
        class StormControl; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl> storm_control;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::Base::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

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

        ydk::YLeaf bd_policer; //type: boolean
        ydk::YLeaf unicast; //type: boolean
        ydk::YLeaf multicast; //type: boolean
        ydk::YLeaf broadcast; //type: boolean

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::SecurityParameters::StormControl


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ImpostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::SequenceNumber> sequence_number;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats : public ydk::Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

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

        class ImpositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat : public ydk::Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop : public ydk::Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop : public ydk::Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop : public ydk::Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast : public ydk::Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast : public ydk::Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats : public ydk::Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

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

        class DispositionStat; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::UnicastDrop> unicast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::MacMove> mac_move;
        
}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat : public ydk::Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop : public ydk::Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

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

        ydk::YLeaf packet_counts; //type: uint64
        ydk::YLeaf byte_counts; //type: uint64

}; // L2Vpnv2::Standby::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters::Statistics::DispostionStats::DispositionMtuDrop


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_10_ */

