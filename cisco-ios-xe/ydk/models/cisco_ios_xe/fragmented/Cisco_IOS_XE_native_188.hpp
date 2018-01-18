#ifndef _CISCO_IOS_XE_NATIVE_188_
#define _CISCO_IOS_XE_NATIVE_188_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_187.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::SnmpServer::Engineid::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

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


}; // Native::SnmpServer::Engineid::Remote


class Native::SnmpServer::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf id; //type: string
        class V1; //type: Native::SnmpServer::Group::V1
        class V2C; //type: Native::SnmpServer::Group::V2C
        class V3; //type: Native::SnmpServer::Group::V3

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group::V1> v1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group::V2C> v2c;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group::V3> v3;
        
}; // Native::SnmpServer::Group


class Native::SnmpServer::Group::V1 : public ydk::Entity
{
    public:
        V1();
        ~V1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Group::V1


class Native::SnmpServer::Group::V2C : public ydk::Entity
{
    public:
        V2C();
        ~V2C();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Group::V2C


class Native::SnmpServer::Group::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security_level; //type: SecurityLevel
        ydk::YLeaf context; //type: string
        ydk::YLeaf match; //type: Match
        ydk::YLeaf read; //type: string
        ydk::YLeaf write; //type: string
        ydk::YLeaf notify; //type: string
        ydk::YLeaf access; //type: one of string, uint8
        class SecurityLevel;
        class Match;

}; // Native::SnmpServer::Group::V3


class Native::SnmpServer::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        ydk::YLeaf ip_address; //type: one of string, union
        ydk::YLeaf community_string; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf informs; //type: empty
        ydk::YLeaf traps; //type: empty
        ydk::YLeaf version; //type: Version
        ydk::YLeaf security_level; //type: SecurityLevel
        class TrapEnable; //type: Native::SnmpServer::Host::TrapEnable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Host::TrapEnable> trap_enable;
                class Version;
        class SecurityLevel;

}; // Native::SnmpServer::Host


class Native::SnmpServer::Host::TrapEnable : public ydk::Entity
{
    public:
        TrapEnable();
        ~TrapEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_server; //type: empty
        ydk::YLeaf alarms; //type: empty
        ydk::YLeaf atm; //type: empty
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf bgp; //type: empty
        ydk::YLeaf bstun; //type: empty
        ydk::YLeaf bulkstat; //type: empty
        ydk::YLeaf call_home; //type: empty
        ydk::YLeaf casa; //type: empty
        ydk::YLeaf cef; //type: empty
        ydk::YLeaf cnpd; //type: empty
        ydk::YLeaf config; //type: empty
        ydk::YLeaf config_copy; //type: empty
        ydk::YLeaf config_ctid; //type: empty
        ydk::YLeaf cpu; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf dlsw; //type: empty
        ydk::YLeaf ds1; //type: empty
        ydk::YLeaf dsp; //type: empty
        ydk::YLeaf dspu; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf entity_; //type: empty
        ydk::YLeaf entity_diag; //type: empty
        ydk::YLeaf entity_qfp; //type: empty
        ydk::YLeaf entity_state; //type: empty
        ydk::YLeaf ethernet_cfm; //type: empty
        ydk::YLeaf evc; //type: empty
        ydk::YLeaf event_manager; //type: empty
        ydk::YLeaf firewall; //type: empty
        ydk::YLeaf flash; //type: empty
        ydk::YLeaf flowmon; //type: empty
        ydk::YLeaf frame_relay; //type: empty
        ydk::YLeaf fru_ctrl; //type: empty
        ydk::YLeaf gdoi; //type: empty
        ydk::YLeaf hsrp; //type: empty
        ydk::YLeaf iplocalpool; //type: empty
        ydk::YLeaf ipmulticast; //type: empty
        ydk::YLeaf ipsec; //type: empty
        ydk::YLeaf ipsla; //type: empty
        ydk::YLeaf isakmp; //type: empty
        ydk::YLeaf isg_mib; //type: empty
        ydk::YLeaf isis; //type: empty
        ydk::YLeaf l2tun_pseudowire_status; //type: empty
        ydk::YLeaf l2tun_session; //type: empty
        ydk::YLeaf license; //type: empty
        ydk::YLeaf memory; //type: empty
        ydk::YLeaf mpls_fast_reroute; //type: empty
        ydk::YLeaf mpls_ldp; //type: empty
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf mpls_vpn; //type: empty
        ydk::YLeaf msdp; //type: empty
        ydk::YLeaf mvpn; //type: empty
        ydk::YLeaf nhrp; //type: empty
        ydk::YLeaf ospf; //type: empty
        ydk::YLeaf ospfv3; //type: empty
        ydk::YLeaf pfr; //type: empty
        ydk::YLeaf pim; //type: empty
        ydk::YLeaf pw_vc; //type: empty
        ydk::YLeaf resource_policy; //type: empty
        ydk::YLeaf rf; //type: empty
        ydk::YLeaf rsrb; //type: empty
        ydk::YLeaf rsvp; //type: empty
        ydk::YLeaf sdlc; //type: empty
        ydk::YLeaf sdllc; //type: empty
        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf sonet; //type: empty
        ydk::YLeaf srp; //type: empty
        ydk::YLeaf stun; //type: empty
        ydk::YLeaf syslog; //type: empty
        ydk::YLeaf trustsec_sxp; //type: empty
        ydk::YLeaf tty; //type: empty
        ydk::YLeaf udp_port; //type: uint16
        ydk::YLeaf voice; //type: empty
        ydk::YLeaf vrfmib; //type: empty
        ydk::YLeaf vrrp; //type: empty
        ydk::YLeaf x25; //type: empty

}; // Native::SnmpServer::Host::TrapEnable


class Native::SnmpServer::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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

        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf precedence; //type: uint8

}; // Native::SnmpServer::Ip


class Native::SnmpServer::Ifindex : public ydk::Entity
{
    public:
        Ifindex();
        ~Ifindex();

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

        ydk::YLeaf persist; //type: empty

}; // Native::SnmpServer::Ifindex


class Native::SnmpServer::Manager : public ydk::Entity
{
    public:
        Manager();
        ~Manager();

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

        ydk::YLeaf session_timeout; //type: uint32

}; // Native::SnmpServer::Manager


class Native::SnmpServer::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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

        class Informs; //type: Native::SnmpServer::SourceInterface::Informs
        class Traps; //type: Native::SnmpServer::SourceInterface::Traps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs> informs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps> traps;
        
}; // Native::SnmpServer::SourceInterface


class Native::SnmpServer::SourceInterface::Informs : public ydk::Entity
{
    public:
        Informs();
        ~Informs();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::ATMSubinterface
        class ATMACRsubinterface; //type: Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface
        class LISPSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::LISPSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::SourceInterface::Informs


class Native::SnmpServer::SourceInterface::Informs::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::ATMSubinterface


class Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface


class Native::SnmpServer::SourceInterface::Informs::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::LISPSubinterface


class Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface


class Native::SnmpServer::SourceInterface::Traps : public ydk::Entity
{
    public:
        Traps();
        ~Traps();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::ATMSubinterface
        class ATMACRsubinterface; //type: Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface
        class LISPSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::LISPSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::SourceInterface::Traps


class Native::SnmpServer::SourceInterface::Traps::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::ATMSubinterface


class Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface


class Native::SnmpServer::SourceInterface::Traps::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::LISPSubinterface


class Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface


class Native::SnmpServer::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

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

        ydk::YLeaf timeout; //type: uint16
        class Link; //type: Native::SnmpServer::Trap::Link

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Trap::Link> link;
        
}; // Native::SnmpServer::Trap


class Native::SnmpServer::Trap::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

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

        ydk::YLeaf ietf; //type: empty
        ydk::YLeaf switchover; //type: empty

}; // Native::SnmpServer::Trap::Link


class Native::SnmpServer::TrapSource : public ydk::Entity
{
    public:
        TrapSource();
        ~TrapSource();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::SnmpServer::TrapSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::SnmpServer::TrapSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::SnmpServer::TrapSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::TrapSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::TrapSource


class Native::SnmpServer::TrapSource::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::SnmpServer::TrapSource::ATMSubinterface


class Native::SnmpServer::TrapSource::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::SnmpServer::TrapSource::ATMACRsubinterface


class Native::SnmpServer::TrapSource::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::SnmpServer::TrapSource::LISPSubinterface


class Native::SnmpServer::TrapSource::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::SnmpServer::TrapSource::PortChannelSubinterface


class Native::SnmpServer::User : public ydk::Entity
{
    public:
        User();
        ~User();

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

        class Names; //type: Native::SnmpServer::User::Names

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names> > names;
        
}; // Native::SnmpServer::User


class Native::SnmpServer::User::Names : public ydk::Entity
{
    public:
        Names();
        ~Names();

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

        ydk::YLeaf username; //type: string
        ydk::YLeaf grpname; //type: string
        class V3; //type: Native::SnmpServer::User::Names::V3

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3> v3; // presence node
        
}; // Native::SnmpServer::User::Names


class Native::SnmpServer::User::Names::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Auth; //type: Native::SnmpServer::User::Names::V3::Auth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth> auth;
        
}; // Native::SnmpServer::User::Names::V3


class Native::SnmpServer::User::Names::V3::Auth : public ydk::Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sha; //type: Native::SnmpServer::User::Names::V3::Auth::Sha

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha> sha;
        
}; // Native::SnmpServer::User::Names::V3::Auth


class Native::SnmpServer::User::Names::V3::Auth::Sha : public ydk::Entity
{
    public:
        Sha();
        ~Sha();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Auth_; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_> auth;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_ : public ydk::Entity
{
    public:
        Auth_();
        ~Auth_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authpass; //type: string
        class Priv; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv> priv;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv : public ydk::Entity
{
    public:
        Priv();
        ~Priv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aes; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes> aes;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes : public ydk::Entity
{
    public:
        Aes();
        ~Aes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Algo128; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128> algo128;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128 : public ydk::Entity
{
    public:
        Algo128();
        ~Algo128();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Privpass; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass> privpass;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass : public ydk::Entity
{
    public:
        Privpass();
        ~Privpass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf privpass; //type: string
        ydk::YLeaf access; //type: string

}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass


class Native::SnmpServer::View : public ydk::Entity
{
    public:
        View();
        ~View();

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
        ydk::YLeaf mib; //type: string
        ydk::YLeaf inc_exl; //type: IncExl
        class IncExl;

}; // Native::SnmpServer::View


class Native::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

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

        class Mpls; //type: Native::SegmentRouting::Mpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls> mpls; // presence node
        
}; // Native::SegmentRouting


class Native::SegmentRouting::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

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

        ydk::YLeaf shutdown; //type: empty
        class ConnectedPrefixSidMap; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap
        class GlobalBlock; //type: Native::SegmentRouting::Mpls::GlobalBlock
        class MappingServer; //type: Native::SegmentRouting::Mpls::MappingServer
        class SetAttributes; //type: Native::SegmentRouting::Mpls::SetAttributes

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap> connected_prefix_sid_map; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::GlobalBlock> global_block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer> mapping_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes> set_attributes; // presence node
        
}; // Native::SegmentRouting::Mpls


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap : public ydk::Entity
{
    public:
        ConnectedPrefixSidMap();
        ~ConnectedPrefixSidMap();

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

        class AddressFamily; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

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

        class Ipv4; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4
        class Ipv4StrictSpf; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf> ipv4_strict_spf;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class Prefixes; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes> > prefixes;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

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

        ydk::YLeaf ipprefix; //type: string
        class Index_; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_
        class Absolute; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_> index_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute> absolute;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_ : public ydk::Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf : public ydk::Entity
{
    public:
        Ipv4StrictSpf();
        ~Ipv4StrictSpf();

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

        class Ipv4; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4> ipv4;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class StrictSpf; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf> strict_spf; // presence node
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf : public ydk::Entity
{
    public:
        StrictSpf();
        ~StrictSpf();

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

        class Prefixes; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes> > prefixes;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

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

        ydk::YLeaf ipprefix; //type: string
        class Index_; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_
        class Absolute; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_> index_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute> absolute;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_ : public ydk::Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute


class Native::SegmentRouting::Mpls::GlobalBlock : public ydk::Entity
{
    public:
        GlobalBlock();
        ~GlobalBlock();

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

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range_end; //type: uint32

}; // Native::SegmentRouting::Mpls::GlobalBlock


class Native::SegmentRouting::Mpls::MappingServer : public ydk::Entity
{
    public:
        MappingServer();
        ~MappingServer();

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

        class PrefixSidMap; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap> prefix_sid_map; // presence node
        
}; // Native::SegmentRouting::Mpls::MappingServer


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap : public ydk::Entity
{
    public:
        PrefixSidMap();
        ~PrefixSidMap();

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

        class AddressFamily; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

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

        class Ipv4; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4
        class Ipv4StrictSpf; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf> ipv4_strict_spf;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class Prefixes; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes> > prefixes;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

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

        ydk::YLeaf ipprefix; //type: string
        class Index_; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_
        class Absolute; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_> index_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute> absolute;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_ : public ydk::Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf : public ydk::Entity
{
    public:
        Ipv4StrictSpf();
        ~Ipv4StrictSpf();

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

        class Ipv4; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4> ipv4;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class StrictSpf; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf> strict_spf; // presence node
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf : public ydk::Entity
{
    public:
        StrictSpf();
        ~StrictSpf();

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

        class Prefixes; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes> > prefixes;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

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

        ydk::YLeaf ipprefix; //type: string
        class Index_; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_
        class Absolute; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_> index_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute> absolute;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_ : public ydk::Entity
{
    public:
        Index_();
        ~Index_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute


class Native::SegmentRouting::Mpls::SetAttributes : public ydk::Entity
{
    public:
        SetAttributes();
        ~SetAttributes();

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

        class AddressFamily; //type: Native::SegmentRouting::Mpls::SetAttributes::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::SetAttributes


class Native::SegmentRouting::Mpls::SetAttributes::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

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

        class Ipv4; //type: Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4> ipv4; // presence node
        
}; // Native::SegmentRouting::Mpls::SetAttributes::AddressFamily


class Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf explicit_null; //type: empty
        ydk::YLeaf sr_label_preferred; //type: empty

}; // Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4


class Native::License : public ydk::Entity
{
    public:
        License();
        ~License();

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

        ydk::YLeaf smart; //type: Smart
        class Udi; //type: Native::License::Udi
        class Feature; //type: Native::License::Feature
        class Accept; //type: Native::License::Accept
        class Boot; //type: Native::License::Boot

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Udi> udi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Feature> feature;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Accept> accept;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot> boot;
                class Smart;

}; // Native::License


class Native::License::Udi : public ydk::Entity
{
    public:
        Udi();
        ~Udi();

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

        ydk::YLeaf pid; //type: string
        ydk::YLeaf sn; //type: string

}; // Native::License::Udi


class Native::License::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

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
        class Port; //type: Native::License::Feature::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Feature::Port> port;
        
}; // Native::License::Feature


class Native::License::Feature::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

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

        ydk::YLeaf bulk; //type: empty
        ydk::YLeaf onegig; //type: uint8
        ydk::YLeaf b_6xonegig; //type: uint8
        ydk::YLeaf tengig; //type: uint8

}; // Native::License::Feature::Port


class Native::License::Accept : public ydk::Entity
{
    public:
        Accept();
        ~Accept();

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

        ydk::YLeaf end; //type: empty
        ydk::YLeaf user; //type: empty
        ydk::YLeaf agreement; //type: empty

}; // Native::License::Accept


class Native::License::Boot : public ydk::Entity
{
    public:
        Boot();
        ~Boot();

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

        class Level; //type: Native::License::Boot::Level
        class BootModule; //type: Native::License::Boot::BootModule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level> level;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::BootModule> boot_module;
        
}; // Native::License::Boot


class Native::License::Boot::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

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

        ydk::YLeaf ipbasek9; //type: empty
        ydk::YLeaf lanbasek9; //type: empty
        ydk::YLeaf advancedmetroipaccess; //type: empty
        ydk::YLeaf metroaccess; //type: empty
        ydk::YLeaf metroipaccess; //type: empty
        ydk::YLeaf entservices; //type: empty
        ydk::YLeaf adventerprise; //type: empty
        ydk::YLeaf appx; //type: empty
        ydk::YLeaf appxk9; //type: empty
        ydk::YLeaf ax; //type: empty
        ydk::YLeaf security; //type: empty
        ydk::YLeaf securityk9; //type: empty
        class Ipbase; //type: Native::License::Boot::Level::Ipbase
        class Ipservices; //type: Native::License::Boot::Level::Ipservices
        class Ipservicesk9; //type: Native::License::Boot::Level::Ipservicesk9
        class Lanbase; //type: Native::License::Boot::Level::Lanbase
        class Lite; //type: Native::License::Boot::Level::Lite
        class Metroaggrservices; //type: Native::License::Boot::Level::Metroaggrservices
        class Uck9; //type: Native::License::Boot::Level::Uck9

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipbase> ipbase; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipservices> ipservices; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipservicesk9> ipservicesk9; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Lanbase> lanbase; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Lite> lite; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Metroaggrservices> metroaggrservices; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Uck9> uck9; // presence node
        
}; // Native::License::Boot::Level


class Native::License::Boot::Level::Ipbase : public ydk::Entity
{
    public:
        Ipbase();
        ~Ipbase();

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

        ydk::YLeaf switch_; //type: uint8

}; // Native::License::Boot::Level::Ipbase


class Native::License::Boot::Level::Ipservices : public ydk::Entity
{
    public:
        Ipservices();
        ~Ipservices();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Ipservices


class Native::License::Boot::Level::Ipservicesk9 : public ydk::Entity
{
    public:
        Ipservicesk9();
        ~Ipservicesk9();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Ipservicesk9


class Native::License::Boot::Level::Lanbase : public ydk::Entity
{
    public:
        Lanbase();
        ~Lanbase();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Lanbase


class Native::License::Boot::Level::Lite : public ydk::Entity
{
    public:
        Lite();
        ~Lite();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Lite


class Native::License::Boot::Level::Metroaggrservices : public ydk::Entity
{
    public:
        Metroaggrservices();
        ~Metroaggrservices();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Metroaggrservices


class Native::License::Boot::Level::Uck9 : public ydk::Entity
{
    public:
        Uck9();
        ~Uck9();

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

        ydk::YLeaf disable; //type: empty

}; // Native::License::Boot::Level::Uck9


class Native::License::Boot::BootModule : public ydk::Entity
{
    public:
        BootModule();
        ~BootModule();

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

        ydk::YLeaf module; //type: Module
        class TechnologyPackage; //type: Native::License::Boot::BootModule::TechnologyPackage

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::BootModule::TechnologyPackage> technology_package;
                class Module;

}; // Native::License::Boot::BootModule


class Native::License::Boot::BootModule::TechnologyPackage : public ydk::Entity
{
    public:
        TechnologyPackage();
        ~TechnologyPackage();

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

        ydk::YLeaf securityk9; //type: empty
        ydk::YLeaf uck9; //type: empty
        ydk::YLeaf datak9; //type: empty

}; // Native::License::Boot::BootModule::TechnologyPackage


class Native::MemorySize : public ydk::Entity
{
    public:
        MemorySize();
        ~MemorySize();

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

        ydk::YLeaf iomem; //type: uint8

}; // Native::MemorySize


class Native::Transceiver : public ydk::Entity
{
    public:
        Transceiver();
        ~Transceiver();

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

        class Type; //type: Native::Transceiver::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Transceiver::Type> type;
        
}; // Native::Transceiver


class Native::Transceiver::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

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

        class All; //type: Native::Transceiver::Type::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Transceiver::Type::All> all;
        
}; // Native::Transceiver::Type


class Native::Transceiver::Type::All : public ydk::Entity
{
    public:
        All();
        ~All();

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

        class Monitoring; //type: Native::Transceiver::Type::All::Monitoring

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Transceiver::Type::All::Monitoring> monitoring; // presence node
        
}; // Native::Transceiver::Type::All


class Native::Transceiver::Type::All::Monitoring : public ydk::Entity
{
    public:
        Monitoring();
        ~Monitoring();

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

        ydk::YLeaf interval; //type: uint16

}; // Native::Transceiver::Type::All::Monitoring


class Native::ServiceInsertion : public ydk::Entity
{
    public:
        ServiceInsertion();
        ~ServiceInsertion();

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

        ydk::YLeaf acg_reload_delay; //type: uint16
        class AppnavControllerGroup; //type: Native::ServiceInsertion::AppnavControllerGroup
        class ServiceContext; //type: Native::ServiceInsertion::ServiceContext
        class ServiceNodeGroup; //type: Native::ServiceInsertion::ServiceNodeGroup
        class Swap; //type: Native::ServiceInsertion::Swap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::AppnavControllerGroup> > appnav_controller_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext> service_context;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceNodeGroup> > service_node_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::Swap> swap;
        
}; // Native::ServiceInsertion


class Native::ServiceInsertion::AppnavControllerGroup : public ydk::Entity
{
    public:
        AppnavControllerGroup();
        ~AppnavControllerGroup();

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
        ydk::YLeaf description; //type: string
        ydk::YLeafList appnav_controller; //type: list of  string

}; // Native::ServiceInsertion::AppnavControllerGroup


class Native::ServiceInsertion::ServiceContext : public ydk::Entity
{
    public:
        ServiceContext();
        ~ServiceContext();

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

        class Waas; //type: Native::ServiceInsertion::ServiceContext::Waas

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext::Waas> > waas;
        
}; // Native::ServiceInsertion::ServiceContext


class Native::ServiceInsertion::ServiceContext::Waas : public ydk::Entity
{
    public:
        Waas();
        ~Waas();

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
        ydk::YLeaf appnav_controller_group; //type: string
        ydk::YLeaf service_node_group; //type: string
        ydk::YLeaf service_policy; //type: string
        ydk::YLeaf enable; //type: empty
        class Authentication; //type: Native::ServiceInsertion::ServiceContext::Waas::Authentication
        class Vrf; //type: Native::ServiceInsertion::ServiceContext::Waas::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext::Waas::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ServiceInsertion::ServiceContext::Waas::Vrf> vrf;
        
}; // Native::ServiceInsertion::ServiceContext::Waas


class Native::ServiceInsertion::ServiceContext::Waas::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sha1; //type: empty
        ydk::YLeaf key; //type: empty
        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::ServiceInsertion::ServiceContext::Waas::Authentication


class Native::ServiceInsertion::ServiceContext::Waas::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty
        ydk::YLeaf global; //type: empty
        ydk::YLeaf name; //type: string

}; // Native::ServiceInsertion::ServiceContext::Waas::Vrf


class Native::ServiceInsertion::ServiceNodeGroup : public ydk::Entity
{
    public:
        ServiceNodeGroup();
        ~ServiceNodeGroup();

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
        ydk::YLeaf description; //type: string
        ydk::YLeaf node_discovery; //type: NodeDiscovery
        ydk::YLeafList service_node; //type: list of  string
        class NodeDiscovery;

}; // Native::ServiceInsertion::ServiceNodeGroup


class Native::ServiceInsertion::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

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

        ydk::YLeaf src_ip; //type: empty

}; // Native::ServiceInsertion::Swap


class Native::Udld : public ydk::Entity
{
    public:
        Udld();
        ~Udld();

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


}; // Native::Udld


class Native::Wireless : public ydk::Entity
{
    public:
        Wireless();
        ~Wireless();

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

        ydk::YLeaf mdns_bridging; //type: boolean

}; // Native::Wireless


class Native::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

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

        ydk::YLeaf diffservmib; //type: empty
        class Account; //type: Native::Qos::Account
        class ControlPackets; //type: Native::Qos::ControlPackets
        class Preserve; //type: Native::Qos::Preserve
        class Trace; //type: Native::Qos::Trace
        class QueueSoftmaxMultiplier; //type: Native::Qos::QueueSoftmaxMultiplier

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account> account;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::ControlPackets> control_packets; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Preserve> preserve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Trace> trace;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::QueueSoftmaxMultiplier> queue_softmax_multiplier;
        
}; // Native::Qos


class Native::Qos::Account : public ydk::Entity
{
    public:
        Account();
        ~Account();

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

        class LayerAll; //type: Native::Qos::Account::LayerAll
        class Layer2; //type: Native::Qos::Account::Layer2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account::LayerAll> layer_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account::Layer2> layer2;
        
}; // Native::Qos::Account


class Native::Qos::Account::LayerAll : public ydk::Entity
{
    public:
        LayerAll();
        ~LayerAll();

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

        ydk::YLeaf encapsulation; //type: empty

}; // Native::Qos::Account::LayerAll


class Native::Qos::Account::Layer2 : public ydk::Entity
{
    public:
        Layer2();
        ~Layer2();

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

        class Encapsulation; //type: Native::Qos::Account::Layer2::Encapsulation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account::Layer2::Encapsulation> encapsulation;
        
}; // Native::Qos::Account::Layer2


class Native::Qos::Account::Layer2::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

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

        ydk::YLeaf arpa; //type: empty
        ydk::YLeaf dot1q; //type: empty
        ydk::YLeaf isl; //type: empty
        class Length; //type: Native::Qos::Account::Layer2::Encapsulation::Length

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Account::Layer2::Encapsulation::Length> length; // presence node
        
}; // Native::Qos::Account::Layer2::Encapsulation


class Native::Qos::Account::Layer2::Encapsulation::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

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

        ydk::YLeaf byte_length; //type: int8

}; // Native::Qos::Account::Layer2::Encapsulation::Length


class Native::Qos::ControlPackets : public ydk::Entity
{
    public:
        ControlPackets();
        ~ControlPackets();

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

        ydk::YLeaf bpdu_range; //type: empty
        ydk::YLeaf cdp_vtp; //type: empty
        ydk::YLeaf eapol; //type: empty
        ydk::YLeaf lldp; //type: empty
        ydk::YLeaf protocol_tunnel; //type: empty
        ydk::YLeaf sstp; //type: empty

}; // Native::Qos::ControlPackets


class Native::Qos::Preserve : public ydk::Entity
{
    public:
        Preserve();
        ~Preserve();

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

        class Marking; //type: Native::Qos::Preserve::Marking
        class Mpls; //type: Native::Qos::Preserve::Mpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Preserve::Marking> marking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Preserve::Mpls> mpls;
        
}; // Native::Qos::Preserve


class Native::Qos::Preserve::Marking : public ydk::Entity
{
    public:
        Marking();
        ~Marking();

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

        ydk::YLeaf hipriority; //type: empty

}; // Native::Qos::Preserve::Marking


class Native::Qos::Preserve::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

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

        ydk::YLeaf exp; //type: empty

}; // Native::Qos::Preserve::Mpls


class Native::Qos::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        class Resize; //type: Native::Qos::Trace::Resize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Qos::Trace::Resize> resize;
        
}; // Native::Qos::Trace


class Native::Qos::Trace::Resize : public ydk::Entity
{
    public:
        Resize();
        ~Resize();

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

        ydk::YLeaf size; //type: int32
        ydk::YLeaf all; //type: int32
        ydk::YLeaf error; //type: int32
        ydk::YLeaf event; //type: int32
        ydk::YLeaf warning; //type: int32

}; // Native::Qos::Trace::Resize


class Native::Qos::QueueSoftmaxMultiplier : public ydk::Entity
{
    public:
        QueueSoftmaxMultiplier();
        ~QueueSoftmaxMultiplier();

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

        ydk::YLeaf value_; //type: int16

}; // Native::Qos::QueueSoftmaxMultiplier


class Native::TimeRange : public ydk::Entity
{
    public:
        TimeRange();
        ~TimeRange();

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

        ydk::YLeaf word; //type: string
        class Absolute; //type: Native::TimeRange::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TimeRange::Absolute> absolute;
        
}; // Native::TimeRange


class Native::TimeRange::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Start; //type: Native::TimeRange::Absolute::Start

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TimeRange::Absolute::Start> start;
        
}; // Native::TimeRange::Absolute


class Native::TimeRange::Absolute::Start : public ydk::Entity
{
    public:
        Start();
        ~Start();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_time; //type: string
        ydk::YLeaf day_of_month; //type: uint8
        ydk::YLeaf month; //type: string
        ydk::YLeaf year; //type: uint16

}; // Native::TimeRange::Absolute::Start


class Native::DeviceTracking : public ydk::Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

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

        class Policy; //type: Native::DeviceTracking::Policy
        class Tracking; //type: Native::DeviceTracking::Tracking

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy> > policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking> tracking; // presence node
        
}; // Native::DeviceTracking


class Native::DeviceTracking::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        ydk::YLeaf word; //type: string
        class DeviceRole; //type: Native::DeviceTracking::Policy::DeviceRole
        class Protocol; //type: Native::DeviceTracking::Policy::Protocol
        class Tracking; //type: Native::DeviceTracking::Policy::Tracking
        class Limit; //type: Native::DeviceTracking::Policy::Limit
        class SecurityLevel; //type: Native::DeviceTracking::Policy::SecurityLevel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::DeviceRole> device_role;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::Tracking> tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::Limit> limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Policy::SecurityLevel> security_level;
        
}; // Native::DeviceTracking::Policy


class Native::DeviceTracking::Policy::DeviceRole : public ydk::Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: boolean
        ydk::YLeaf switch_; //type: empty

}; // Native::DeviceTracking::Policy::DeviceRole


class Native::DeviceTracking::Policy::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udp; //type: boolean
        ydk::YLeaf arp; //type: boolean
        ydk::YLeaf dhcp4; //type: boolean
        ydk::YLeaf dhcp6; //type: boolean
        ydk::YLeaf ndp; //type: boolean

}; // Native::DeviceTracking::Policy::Protocol


class Native::DeviceTracking::Policy::Tracking : public ydk::Entity
{
    public:
        Tracking();
        ~Tracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tracking_on_off; //type: TrackingOnOff
        class TrackingOnOff;

}; // Native::DeviceTracking::Policy::Tracking


class Native::DeviceTracking::Policy::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_count; //type: uint16

}; // Native::DeviceTracking::Policy::Limit


class Native::DeviceTracking::Policy::SecurityLevel : public ydk::Entity
{
    public:
        SecurityLevel();
        ~SecurityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf glean; //type: empty

}; // Native::DeviceTracking::Policy::SecurityLevel


class Native::DeviceTracking::Tracking : public ydk::Entity
{
    public:
        Tracking();
        ~Tracking();

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

        ydk::YLeaf retry_interval; //type: uint16
        class AutoSource; //type: Native::DeviceTracking::Tracking::AutoSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking::AutoSource> auto_source; // presence node
        
}; // Native::DeviceTracking::Tracking


class Native::DeviceTracking::Tracking::AutoSource : public ydk::Entity
{
    public:
        AutoSource();
        ~AutoSource();

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

        ydk::YLeaf override; //type: empty
        class Fallback; //type: Native::DeviceTracking::Tracking::AutoSource::Fallback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking::AutoSource::Fallback> fallback;
        
}; // Native::DeviceTracking::Tracking::AutoSource


class Native::DeviceTracking::Tracking::AutoSource::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

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

        class Ipv4SubnetType1; //type: Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1
        class Ipv4SubnetType2; //type: Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1> ipv4_subnet_type1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2> ipv4_subnet_type2;
        
}; // Native::DeviceTracking::Tracking::AutoSource::Fallback


class Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1 : public ydk::Entity
{
    public:
        Ipv4SubnetType1();
        ~Ipv4SubnetType1();

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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf override; //type: empty

}; // Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1


class Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2 : public ydk::Entity
{
    public:
        Ipv4SubnetType2();
        ~Ipv4SubnetType2();

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

        ydk::YLeaf ipv4_prefix_name; //type: string
        ydk::YLeaf override; //type: empty

}; // Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2


class Native::Fhrp : public ydk::Entity
{
    public:
        Fhrp();
        ~Fhrp();

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

        class Version; //type: Native::Fhrp::Version

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Fhrp::Version> version;
        
}; // Native::Fhrp


class Native::Fhrp::Version : public ydk::Entity
{
    public:
        Version();
        ~Version();

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

        ydk::YLeaf vrrp; //type: Vrrp
        class Vrrp;

}; // Native::Fhrp::Version


class Native::Metadata : public ydk::Entity
{
    public:
        Metadata();
        ~Metadata();

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

        class Flow; //type: Native::Metadata::Flow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Metadata::Flow> flow; // presence node
        
}; // Native::Metadata


class Native::Metadata::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

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

        ydk::YLeaf transmit; //type: empty

}; // Native::Metadata::Flow


class Native::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf flow; //type: empty

}; // Native::Profile


class Native::Alias : public ydk::Entity
{
    public:
        Alias();
        ~Alias();

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

        class Exec; //type: Native::Alias::Exec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Alias::Exec> exec;
        
}; // Native::Alias


class Native::Alias::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

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

        ydk::YLeaf alias_name; //type: string
        ydk::YLeaf new_alias_name; //type: string

}; // Native::Alias::Exec


class Native::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

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

        class LineList; //type: Native::Line::LineList
        class Aux; //type: Native::Line::Aux
        class Console; //type: Native::Line::Console
        class Vty; //type: Native::Line::Vty

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList> > line_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux> > aux;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console> > console;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty> > vty;
        
}; // Native::Line


class Native::Line::LineList : public ydk::Entity
{
    public:
        LineList();
        ~LineList();

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

        ydk::YLeaf first_number; //type: uint8
        ydk::YLeaf last_number; //type: uint16
        ydk::YLeaf no_activation_character; //type: boolean
        ydk::YLeaf activation_character; //type: one of string, uint8
        ydk::YLeaf data_character_bits; //type: uint8
        ydk::YLeaf domain_lookup; //type: empty
        ydk::YLeaf editing; //type: empty
        ydk::YLeaf exec_banner; //type: empty
        ydk::YLeaf exec_character_bits; //type: uint8
        ydk::YLeaf full_help; //type: empty
        ydk::YLeaf international; //type: empty
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf line; //type: uint8
        ydk::YLeaf location; //type: string
        ydk::YLeaf monitor; //type: empty
        ydk::YLeaf motd_banner; //type: empty
        ydk::YLeaf notify; //type: empty
        ydk::YLeaf rotary; //type: uint8
        ydk::YLeaf rxspeed; //type: uint32
        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf special_character_bits; //type: uint8
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf start_character; //type: one of string, uint8
        ydk::YLeaf stop_character; //type: one of string, uint8
        ydk::YLeaf stopbits; //type: Stopbits
        ydk::YLeaf terminal_type; //type: string
        ydk::YLeaf txspeed; //type: uint32
        ydk::YLeaf width; //type: uint16
        class Authorization; //type: Native::Line::LineList::Authorization
        class AccessClass; //type: Native::Line::LineList::AccessClass
        class Autocommand; //type: Native::Line::LineList::Autocommand
        class AutocommandOptions; //type: Native::Line::LineList::AutocommandOptions
        class Databits; //type: Native::Line::LineList::Databits
        class EscapeCharacter; //type: Native::Line::LineList::EscapeCharacter
        class NoExec; //type: Native::Line::LineList::NoExec
        class Exec; //type: Native::Line::LineList::Exec
        class ExecTimeout; //type: Native::Line::LineList::ExecTimeout
        class Flowcontrol; //type: Native::Line::LineList::Flowcontrol
        class History; //type: Native::Line::LineList::History
        class Ip; //type: Native::Line::LineList::Ip
        class Ipv6; //type: Native::Line::LineList::Ipv6
        class Logging; //type: Native::Line::LineList::Logging
        class Login; //type: Native::Line::LineList::Login
        class MediaType; //type: Native::Line::LineList::MediaType
        class Modem; //type: Native::Line::LineList::Modem
        class Padding; //type: Native::Line::LineList::Padding
        class Parity; //type: Native::Line::LineList::Parity
        class Password; //type: Native::Line::LineList::Password
        class Prc; //type: Native::Line::LineList::Prc
        class Privilege; //type: Native::Line::LineList::Privilege
        class SessionTimeout; //type: Native::Line::LineList::SessionTimeout
        class Timeout; //type: Native::Line::LineList::Timeout
        class Telnet; //type: Native::Line::LineList::Telnet
        class Transport; //type: Native::Line::LineList::Transport
        class UsbInactivityTimeout; //type: Native::Line::LineList::UsbInactivityTimeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AccessClass> access_class;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Autocommand> autocommand;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Databits> databits;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::EscapeCharacter> escape_character;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::NoExec> no_exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Exec> exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::ExecTimeout> exec_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::History> history; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Login> login; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::MediaType> media_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Modem> modem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Padding> padding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Parity> parity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Prc> prc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Privilege> privilege;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::SessionTimeout> session_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Telnet> telnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::UsbInactivityTimeout> usb_inactivity_timeout;
                class Stopbits;

}; // Native::Line::LineList


class Native::Line::LineList::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Command; //type: Native::Line::LineList::Authorization::Command

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Authorization::Command> command;
        
}; // Native::Line::LineList::Authorization


class Native::Line::LineList::Authorization::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_level; //type: uint8
        ydk::YLeaf auth_name; //type: string

}; // Native::Line::LineList::Authorization::Command


class Native::Line::LineList::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AcccessList; //type: Native::Line::LineList::AccessClass::AcccessList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::LineList::AccessClass


class Native::Line::LineList::AccessClass::AcccessList : public ydk::Entity
{
    public:
        AcccessList();
        ~AcccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf access_list; //type: one of string, uint16
        ydk::YLeaf vrf_also; //type: empty
        class Direction;

}; // Native::Line::LineList::AccessClass::AcccessList


class Native::Line::LineList::Autocommand : public ydk::Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::LineList::Autocommand::NoSuppressLinenumber

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::LineList::Autocommand


class Native::Line::LineList::Autocommand::NoSuppressLinenumber : public ydk::Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Line::LineList::Autocommand::NoSuppressLinenumber


class Native::Line::LineList::AutocommandOptions : public ydk::Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AbortCharacter; //type: Native::Line::LineList::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::LineList::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::LineList::AutocommandOptions::Nohangup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::LineList::AutocommandOptions


class Native::Line::LineList::AutocommandOptions::AbortCharacter : public ydk::Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf character; //type: one of string, uint8

}; // Native::Line::LineList::AutocommandOptions::AbortCharacter


class Native::Line::LineList::AutocommandOptions::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: uint8

}; // Native::Line::LineList::AutocommandOptions::Delay


class Native::Line::LineList::AutocommandOptions::Nohangup : public ydk::Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf abort_character; //type: empty
        ydk::YLeaf delay; //type: empty

}; // Native::Line::LineList::AutocommandOptions::Nohangup


class Native::Line::LineList::Databits : public ydk::Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_to_5; //type: empty
        ydk::YLeaf set_to_6; //type: empty
        ydk::YLeaf set_to_7; //type: empty
        ydk::YLeaf set_to_8; //type: empty

}; // Native::Line::LineList::Databits


class Native::Line::LineList::EscapeCharacter : public ydk::Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf char_; //type: one of string, uint8, enumeration
        ydk::YLeaf soft; //type: empty
        class Char_;

}; // Native::Line::LineList::EscapeCharacter

class Native::SnmpServer::Group::V3::SecurityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf noauth;
        static const ydk::Enum::YLeaf priv;

};

class Native::SnmpServer::Group::V3::Match : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exact;
        static const ydk::Enum::YLeaf prefix;

};

class Native::SnmpServer::Host::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2c;
        static const ydk::Enum::YLeaf Y_3;

};

class Native::SnmpServer::Host::SecurityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf noauth;
        static const ydk::Enum::YLeaf priv;

};

class Native::SnmpServer::View::IncExl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf excluded;
        static const ydk::Enum::YLeaf included;

};

class Native::License::Smart : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;

};

class Native::License::Boot::BootModule::Module : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c2900;

};

class Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::ServiceInsertion::ServiceNodeGroup::NodeDiscovery : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;

};

class Native::DeviceTracking::Policy::Tracking::TrackingOnOff : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class Native::Fhrp::Version::Vrrp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v2;
        static const ydk::Enum::YLeaf v3;

};

class Native::Line::LineList::Stopbits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_1__DOT__5;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Line::LineList::AccessClass::AcccessList::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::LineList::EscapeCharacter::Char_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf BREAK;
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf NONE;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_188_ */

