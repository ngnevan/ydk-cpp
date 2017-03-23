#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_CFG_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_cfg {

class PolicyManager : public Entity
{
    public:
        PolicyManager();
        ~PolicyManager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class ClassMaps; //type: PolicyManager::ClassMaps
        class PolicyMaps; //type: PolicyManager::PolicyMaps

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps> class_maps;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps> policy_maps;


}; // PolicyManager


class PolicyManager::ClassMaps : public Entity
{
    public:
        ClassMaps();
        ~ClassMaps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ClassMap; //type: PolicyManager::ClassMaps::ClassMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap> > class_map;


}; // PolicyManager::ClassMaps


class PolicyManager::ClassMaps::ClassMap : public Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: ClassMapTypeEnum
        YLeaf name; //type: string
        YLeaf class_map_mode_match_any; //type: empty
        YLeaf class_map_mode_match_all; //type: empty
        YLeaf description; //type: string

        class Match; //type: PolicyManager::ClassMaps::ClassMap::Match
        class MatchNot; //type: PolicyManager::ClassMaps::ClassMap::MatchNot

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match> match;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot> match_not;


}; // PolicyManager::ClassMaps::ClassMap


class PolicyManager::ClassMaps::ClassMap::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dei; //type: uint8
        YLeaf dei_inner; //type: uint8
        YLeaf ipv4_acl; //type: string
        YLeaf ipv6_acl; //type: string
        YLeaf ethernet_services_acl; //type: string
        YLeaf mpls_disposition_ipv4_access_list; //type: string
        YLeaf mpls_disposition_ipv6_access_list; //type: string
        YLeaf fr_de; //type: uint8
        YLeaf tcp_flag; //type: uint16
        YLeaf authen_status; //type: string
        YLeaf vpls_control; //type: empty
        YLeaf vpls_broadcast; //type: empty
        YLeaf vpls_multicast; //type: empty
        YLeaf vpls_known; //type: empty
        YLeaf vpls_unknown; //type: empty
        YLeaf atm_clp; //type: uint8
        YLeaf atm_oam; //type: empty
        YLeaf cac_admit; //type: empty
        YLeaf cac_unadmit; //type: empty
        YLeafList ipv4_dscp; //type: list of  string
        YLeafList ipv6_dscp; //type: list of  string
        YLeafList dscp; //type: list of  string
        YLeafList ipv4_precedence; //type: list of  one of uint8, string
        YLeafList ipv6_precedence; //type: list of  one of uint8, string
        YLeafList precedence; //type: list of  one of uint8, string
        YLeafList qos_group; //type: list of  string
        YLeafList traffic_class; //type: list of  string
        YLeafList cos; //type: list of  uint8
        YLeafList inner_cos; //type: list of  uint8
        YLeafList protocol; //type: list of  string
        YLeafList mpls_experimental_topmost; //type: list of  uint8
        YLeafList mpls_experimental_imposition; //type: list of  uint8
        YLeafList discard_class; //type: list of  uint8
        YLeafList ipv4_packet_length; //type: list of  string
        YLeafList ipv6_packet_length; //type: list of  string
        YLeafList packet_length; //type: list of  string
        YLeafList vlan; //type: list of  string
        YLeafList inner_vlan; //type: list of  string
        YLeafList flow_tag; //type: list of  string
        YLeafList ethertype; //type: list of  string
        YLeafList destination_port; //type: list of  string
        YLeafList fragment_type; //type: list of  string
        YLeafList frame_relay_dlci; //type: list of  string
        YLeafList icmpv4_code; //type: list of  string
        YLeafList icmpv4_type; //type: list of  string
        YLeafList icmpv6_code; //type: list of  string
        YLeafList icmpv6_type; //type: list of  string
        YLeafList source_port; //type: list of  string
        YLeafList circuit_id; //type: list of  string
        YLeafList circuit_id_regex; //type: list of  string
        YLeafList dhcp_client_id; //type: list of  string
        YLeafList dhcp_client_id_regex; //type: list of  string
        YLeafList remote_id; //type: list of  string
        YLeafList remote_id_regex; //type: list of  string
        YLeafList service_name; //type: list of  string
        YLeafList service_name_regex; //type: list of  string
        YLeafList timer; //type: list of  string
        YLeafList timer_regex; //type: list of  string
        YLeafList user_name; //type: list of  string
        YLeafList user_name_regex; //type: list of  string
        YLeafList source_mac; //type: list of  string
        YLeafList destination_mac; //type: list of  string

        class DestinationAddressIpv4; //type: PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4
        class DestinationAddressIpv6; //type: PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6
        class SourceAddressIpv4; //type: PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4
        class SourceAddressIpv6; //type: PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6
        class DomainName; //type: PolicyManager::ClassMaps::ClassMap::Match::DomainName
        class DomainNameRegex; //type: PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex
        class Flow; //type: PolicyManager::ClassMaps::ClassMap::Match::Flow

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4> > destination_address_ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6> > destination_address_ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DomainName> > domain_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex> > domain_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::Flow> flow;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4> > source_address_ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6> > source_address_ipv6;


}; // PolicyManager::ClassMaps::ClassMap::Match


class PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4 : public Entity
{
    public:
        DestinationAddressIpv4();
        ~DestinationAddressIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf netmask; //type: string



}; // PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4


class PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6 : public Entity
{
    public:
        DestinationAddressIpv6();
        ~DestinationAddressIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8



}; // PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6


class PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4 : public Entity
{
    public:
        SourceAddressIpv4();
        ~SourceAddressIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf netmask; //type: string



}; // PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4


class PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6 : public Entity
{
    public:
        SourceAddressIpv6();
        ~SourceAddressIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8



}; // PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6


class PolicyManager::ClassMaps::ClassMap::Match::DomainName : public Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf format; //type: string



}; // PolicyManager::ClassMaps::ClassMap::Match::DomainName


class PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex : public Entity
{
    public:
        DomainNameRegex();
        ~DomainNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf regex; //type: string
        YLeaf format; //type: string



}; // PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex


class PolicyManager::ClassMaps::ClassMap::Match::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList flow_key; //type: list of  string

        class FlowCache; //type: PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache> flow_cache;


}; // PolicyManager::ClassMaps::ClassMap::Match::Flow


class PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache : public Entity
{
    public:
        FlowCache();
        ~FlowCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf idle_timeout; //type: one of uint16, string



}; // PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache


class PolicyManager::ClassMaps::ClassMap::MatchNot : public Entity
{
    public:
        MatchNot();
        ~MatchNot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dei; //type: uint8
        YLeaf dei_inner; //type: uint8
        YLeaf ipv4_acl; //type: string
        YLeaf ipv6_acl; //type: string
        YLeaf ethernet_services_acl; //type: string
        YLeaf mpls_disposition_ipv4_access_list; //type: string
        YLeaf mpls_disposition_ipv6_access_list; //type: string
        YLeaf fr_de; //type: uint8
        YLeaf tcp_flag; //type: uint16
        YLeaf authen_status; //type: string
        YLeaf vpls_control; //type: empty
        YLeaf vpls_broadcast; //type: empty
        YLeaf vpls_multicast; //type: empty
        YLeaf vpls_known; //type: empty
        YLeaf vpls_unknown; //type: empty
        YLeafList ipv4_dscp; //type: list of  string
        YLeafList ipv6_dscp; //type: list of  string
        YLeafList dscp; //type: list of  string
        YLeafList ipv4_precedence; //type: list of  one of uint8, string
        YLeafList ipv6_precedence; //type: list of  one of uint8, string
        YLeafList precedence; //type: list of  one of uint8, string
        YLeafList qos_group; //type: list of  string
        YLeafList traffic_class; //type: list of  string
        YLeafList cos; //type: list of  uint8
        YLeafList inner_cos; //type: list of  uint8
        YLeafList protocol; //type: list of  string
        YLeafList mpls_experimental_topmost; //type: list of  uint8
        YLeafList mpls_experimental_imposition; //type: list of  uint8
        YLeafList discard_class; //type: list of  uint8
        YLeafList ipv4_packet_length; //type: list of  string
        YLeafList ipv6_packet_length; //type: list of  string
        YLeafList packet_length; //type: list of  string
        YLeafList vlan; //type: list of  string
        YLeafList inner_vlan; //type: list of  string
        YLeafList flow_tag; //type: list of  string
        YLeafList ethertype; //type: list of  string
        YLeafList destination_port; //type: list of  string
        YLeafList fragment_type; //type: list of  string
        YLeafList frame_relay_dlci; //type: list of  string
        YLeafList icmpv4_code; //type: list of  string
        YLeafList icmpv4_type; //type: list of  string
        YLeafList icmpv6_code; //type: list of  string
        YLeafList icmpv6_type; //type: list of  string
        YLeafList source_port; //type: list of  string
        YLeafList circuit_id; //type: list of  string
        YLeafList circuit_id_regex; //type: list of  string
        YLeafList dhcp_client_id; //type: list of  string
        YLeafList dhcp_client_id_regex; //type: list of  string
        YLeafList remote_id; //type: list of  string
        YLeafList remote_id_regex; //type: list of  string
        YLeafList service_name; //type: list of  string
        YLeafList service_name_regex; //type: list of  string
        YLeafList timer; //type: list of  string
        YLeafList timer_regex; //type: list of  string
        YLeafList user_name; //type: list of  string
        YLeafList user_name_regex; //type: list of  string
        YLeafList source_mac; //type: list of  string
        YLeafList destination_mac; //type: list of  string

        class DestinationAddressIpv4; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4
        class DestinationAddressIpv6; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6
        class SourceAddressIpv4; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4
        class SourceAddressIpv6; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6
        class DomainName; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName
        class DomainNameRegex; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex
        class Flow; //type: PolicyManager::ClassMaps::ClassMap::MatchNot::Flow

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4> > destination_address_ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6> > destination_address_ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName> > domain_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex> > domain_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::Flow> flow;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4> > source_address_ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6> > source_address_ipv6;


}; // PolicyManager::ClassMaps::ClassMap::MatchNot


class PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4 : public Entity
{
    public:
        DestinationAddressIpv4();
        ~DestinationAddressIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf netmask; //type: string



}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4


class PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6 : public Entity
{
    public:
        DestinationAddressIpv6();
        ~DestinationAddressIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8



}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6


class PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4 : public Entity
{
    public:
        SourceAddressIpv4();
        ~SourceAddressIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf netmask; //type: string



}; // PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4


class PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6 : public Entity
{
    public:
        SourceAddressIpv6();
        ~SourceAddressIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8



}; // PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6


class PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName : public Entity
{
    public:
        DomainName();
        ~DomainName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf format; //type: string



}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName


class PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex : public Entity
{
    public:
        DomainNameRegex();
        ~DomainNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf regex; //type: string
        YLeaf format; //type: string



}; // PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex


class PolicyManager::ClassMaps::ClassMap::MatchNot::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList flow_tag; //type: list of  uint16



}; // PolicyManager::ClassMaps::ClassMap::MatchNot::Flow


class PolicyManager::PolicyMaps : public Entity
{
    public:
        PolicyMaps();
        ~PolicyMaps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyMap; //type: PolicyManager::PolicyMaps::PolicyMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap> > policy_map;


}; // PolicyManager::PolicyMaps


class PolicyManager::PolicyMaps::PolicyMap : public Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PolicyMapTypeEnum
        YLeaf name; //type: string
        YLeaf description; //type: string

        class Event; //type: PolicyManager::PolicyMaps::PolicyMap::Event
        class PolicyMapRule; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event> > event;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule> > policy_map_rule;


}; // PolicyManager::PolicyMaps::PolicyMap


class PolicyManager::PolicyMaps::PolicyMap::Event : public Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: EventTypeEnum
        YLeaf event_mode_match_all; //type: empty
        YLeaf event_mode_match_first; //type: empty

        class Class_; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_> > class_;


}; // PolicyManager::PolicyMaps::PolicyMap::Event


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_name; //type: string
        YLeaf class_type; //type: PmapClassMapTypeEnum
        YLeaf class_execution_strategy; //type: ExecutionStrategyEnum

        class ActionRule; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule> > action_rule;


}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule : public Entity
{
    public:
        ActionRule();
        ~ActionRule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf action_sequence_number; //type: uint16
        YLeaf disconnect; //type: empty
        YLeaf monitor; //type: empty

        class ActivateDynamicTemplate; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate
        class Authenticate; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate
        class Authorize; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize
        class DeactivateDynamicTemplate; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate
        class SetTimer; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer
        class StopTimer; //type: PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate> activate_dynamic_template; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate> authenticate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize> authorize; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate> deactivate_dynamic_template; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer> set_timer; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer> stop_timer;


}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate : public Entity
{
    public:
        ActivateDynamicTemplate();
        ~ActivateDynamicTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf aaa_list; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate : public Entity
{
    public:
        Authenticate();
        ~Authenticate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_list; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize : public Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_list; //type: string
        YLeaf format; //type: string
        YLeaf identifier; //type: AuthorizeIdentifierEnum
        YLeaf password; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate : public Entity
{
    public:
        DeactivateDynamicTemplate();
        ~DeactivateDynamicTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf aaa_list; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer : public Entity
{
    public:
        SetTimer();
        ~SetTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timer_name; //type: string
        YLeaf timer_value; //type: uint32



}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer


class PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer : public Entity
{
    public:
        StopTimer();
        ~StopTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timer_name; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule : public Entity
{
    public:
        PolicyMapRule();
        ~PolicyMapRule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_name; //type: string
        YLeaf class_type; //type: PmapClassMapTypeEnum
        YLeaf priority_level; //type: uint8
        YLeaf default_red; //type: empty
        YLeaf ecn_red; //type: empty
        YLeaf http_redirect; //type: string
        YLeaf pbr_transmit; //type: empty
        YLeaf pbr_drop; //type: empty
        YLeaf decap_gre; //type: empty
        YLeaf service_fragment; //type: string
        YLeaf fragment; //type: string

        class Shape; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape
        class MinBandwidth; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth
        class BandwidthRemaining; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining
        class QueueLimit; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit
        class Pfc; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc
        class RandomDetect; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect
        class Set; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set
        class Police; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police
        class ServicePolicy; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy
        class CacLocal; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal
        class FlowParams; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams
        class MetricsIpcbr; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr
        class React; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React
        class PbrForward; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward
        class ServiceFunctionPath; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining> bandwidth_remaining;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal> cac_local;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams> flow_params;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr> metrics_ipcbr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth> min_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward> pbr_forward;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc> pfc;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police> police;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit> queue_limit;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect> > random_detect;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React> react;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath> service_function_path;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set> set;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape> shape;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate
        class Burst; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst> burst;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate> rate;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst : public Entity
{
    public:
        Burst();
        ~Burst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf units; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth : public Entity
{
    public:
        MinBandwidth();
        ~MinBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining : public Entity
{
    public:
        BandwidthRemaining();
        ~BandwidthRemaining();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit : public Entity
{
    public:
        QueueLimit();
        ~QueueLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc : public Entity
{
    public:
        Pfc();
        ~Pfc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pfc_pause_set; //type: empty

        class PfcBufferSize; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize
        class PfcPauseThreshold; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold
        class PfcResumeThreshold; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize> pfc_buffer_size;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold> pfc_pause_threshold;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold> pfc_resume_threshold;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize : public Entity
{
    public:
        PfcBufferSize();
        ~PfcBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold : public Entity
{
    public:
        PfcPauseThreshold();
        ~PfcPauseThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold : public Entity
{
    public:
        PfcResumeThreshold();
        ~PfcResumeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf unit; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect : public Entity
{
    public:
        RandomDetect();
        ~RandomDetect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf threshold_min_value; //type: uint32
        YLeaf threshold_min_units; //type: string
        YLeaf threshold_max_value; //type: uint32
        YLeaf threshold_max_units; //type: string
        YLeaf dei; //type: uint8
        YLeaf ecn; //type: empty
        YLeafList cos; //type: list of  string
        YLeafList discard_class; //type: list of  uint8
        YLeafList dscp; //type: list of  string
        YLeafList mpls_exp; //type: list of  uint8
        YLeafList precedence; //type: list of  one of uint8, string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dscp; //type: string
        YLeaf qos_group; //type: uint16
        YLeaf traffic_class; //type: uint8
        YLeaf discard_class; //type: uint8
        YLeaf forward_class; //type: uint8
        YLeaf df; //type: uint8
        YLeaf cos; //type: uint8
        YLeaf inner_cos; //type: uint8
        YLeaf precedence; //type: one of uint8, string
        YLeaf precedence_tunnel; //type: one of uint8, string
        YLeaf mpls_experimental_top_most; //type: uint8
        YLeaf mpls_experimental_imposition; //type: uint8
        YLeaf srp_priority; //type: uint8
        YLeaf fr_de; //type: uint8
        YLeaf dei; //type: uint8
        YLeaf dei_imposition; //type: uint8
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate
        class PeakRate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate
        class Burst; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst
        class PeakBurst; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst
        class ConformAction; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction
        class ExceedAction; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction
        class ViolateAction; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst> burst;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction> conform_action;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction> exceed_action;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst> peak_burst;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate> peak_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate> rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction> violate_action;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf units; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate : public Entity
{
    public:
        PeakRate();
        ~PeakRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf units; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst : public Entity
{
    public:
        Burst();
        ~Burst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf units; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst : public Entity
{
    public:
        PeakBurst();
        ~PeakBurst();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf units; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction : public Entity
{
    public:
        ConformAction();
        ~ConformAction();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit; //type: empty
        YLeaf drop; //type: empty

        class Set; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set> set;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dscp; //type: string
        YLeaf qos_group; //type: uint16
        YLeaf traffic_class; //type: uint8
        YLeaf discard_class; //type: uint8
        YLeaf forward_class; //type: uint8
        YLeaf df; //type: uint8
        YLeaf cos; //type: uint8
        YLeaf inner_cos; //type: uint8
        YLeaf precedence; //type: one of uint8, string
        YLeaf precedence_tunnel; //type: one of uint8, string
        YLeaf mpls_experimental_top_most; //type: uint8
        YLeaf mpls_experimental_imposition; //type: uint8
        YLeaf srp_priority; //type: uint8
        YLeaf fr_de; //type: uint8
        YLeaf dei; //type: uint8
        YLeaf dei_imposition; //type: uint8
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction : public Entity
{
    public:
        ExceedAction();
        ~ExceedAction();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit; //type: empty
        YLeaf drop; //type: empty

        class Set; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set> set;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dscp; //type: string
        YLeaf qos_group; //type: uint16
        YLeaf traffic_class; //type: uint8
        YLeaf discard_class; //type: uint8
        YLeaf forward_class; //type: uint8
        YLeaf df; //type: uint8
        YLeaf cos; //type: uint8
        YLeaf inner_cos; //type: uint8
        YLeaf precedence; //type: one of uint8, string
        YLeaf precedence_tunnel; //type: one of uint8, string
        YLeaf mpls_experimental_top_most; //type: uint8
        YLeaf mpls_experimental_imposition; //type: uint8
        YLeaf srp_priority; //type: uint8
        YLeaf fr_de; //type: uint8
        YLeaf dei; //type: uint8
        YLeaf dei_imposition; //type: uint8
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction : public Entity
{
    public:
        ViolateAction();
        ~ViolateAction();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transmit; //type: empty
        YLeaf drop; //type: empty

        class Set; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set> set;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dscp; //type: string
        YLeaf qos_group; //type: uint16
        YLeaf traffic_class; //type: uint8
        YLeaf discard_class; //type: uint8
        YLeaf forward_class; //type: uint8
        YLeaf df; //type: uint8
        YLeaf cos; //type: uint8
        YLeaf inner_cos; //type: uint8
        YLeaf precedence; //type: one of uint8, string
        YLeaf precedence_tunnel; //type: one of uint8, string
        YLeaf mpls_experimental_top_most; //type: uint8
        YLeaf mpls_experimental_imposition; //type: uint8
        YLeaf srp_priority; //type: uint8
        YLeaf fr_de; //type: uint8
        YLeaf dei; //type: uint8
        YLeaf dei_imposition; //type: uint8
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf type; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal : public Entity
{
    public:
        CacLocal();
        ~CacLocal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_idle_timeout; //type: one of uint16, string

        class Rate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate
        class FlowRate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate> flow_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate> rate;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf units; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate : public Entity
{
    public:
        FlowRate();
        ~FlowRate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf units; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams : public Entity
{
    public:
        FlowParams();
        ~FlowParams();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_flow; //type: uint16
        YLeaf interval_duration; //type: uint32
        YLeaf history; //type: uint32
        YLeaf timeout; //type: uint32



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr : public Entity
{
    public:
        MetricsIpcbr();
        ~MetricsIpcbr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rate; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate
        class MediaPacket; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket> media_packet;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate> rate;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf layer3; //type: uint32
        YLeaf packet; //type: uint32
        YLeaf media; //type: uint32



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket : public Entity
{
    public:
        MediaPacket();
        ~MediaPacket();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: uint16
        YLeaf count_in_layer3; //type: uint8



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React : public Entity
{
    public:
        React();
        ~React();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf descrition; //type: string
        YLeaf criterion_delay_factor; //type: empty
        YLeaf criterion_media_stop; //type: empty
        YLeaf criterion_mrv; //type: empty
        YLeaf criterion_flow_count; //type: empty
        YLeaf criterion_packet_rate; //type: empty

        class Action; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action
        class Alarm; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm
        class Threshold; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action> action;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm> alarm;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold> threshold;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf syslog; //type: empty
        YLeaf snmp; //type: empty



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm : public Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf severity; //type: string

        class Type; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type> type;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf discrete; //type: empty
        YLeaf group_count; //type: uint16
        YLeaf group_percent; //type: uint16



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TriggerValue; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue
        class TriggerType; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType> trigger_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue> trigger_value;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue : public Entity
{
    public:
        TriggerValue();
        ~TriggerValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf greater_than; //type: string
        YLeaf greater_than_equal; //type: string
        YLeaf less_than; //type: string
        YLeaf less_than_equal; //type: string
        YLeaf range; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType : public Entity
{
    public:
        TriggerType();
        ~TriggerType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf immediate; //type: empty
        YLeaf average; //type: uint32



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward : public Entity
{
    public:
        PbrForward();
        ~PbrForward();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_; //type: empty

        class NextHop; //type: PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop> next_hop;


}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop


class PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath : public Entity
{
    public:
        ServiceFunctionPath();
        ~ServiceFunctionPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_id; //type: uint32
        YLeaf index_; //type: uint8
        YLeaf metadata; //type: string



}; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath

class EventTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf account_logoff;
        static const Enum::YLeaf account_logon;
        static const Enum::YLeaf authentication_failure;
        static const Enum::YLeaf authentication_no_response;
        static const Enum::YLeaf authorization_failure;
        static const Enum::YLeaf authorization_no_response;
        static const Enum::YLeaf credit_exhausted;
        static const Enum::YLeaf exception;
        static const Enum::YLeaf idle_timeout;
        static const Enum::YLeaf quota_depleted;
        static const Enum::YLeaf service_start;
        static const Enum::YLeaf service_stop;
        static const Enum::YLeaf session_activate;
        static const Enum::YLeaf session_start;
        static const Enum::YLeaf session_stop;
        static const Enum::YLeaf timer_expiry;

};

class ClassMapTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf qos;
        static const Enum::YLeaf traffic;
        static const Enum::YLeaf control;

};

class ExecutionStrategyEnum : public Enum
{
    public:
        static const Enum::YLeaf do_all;
        static const Enum::YLeaf do_until_failure;
        static const Enum::YLeaf do_until_success;

};

class AuthorizeIdentifierEnum : public Enum
{
    public:
        static const Enum::YLeaf circuit_id;
        static const Enum::YLeaf dhcp_client_id;
        static const Enum::YLeaf remote_id;
        static const Enum::YLeaf source_address_ipv4;
        static const Enum::YLeaf source_address_ipv6;
        static const Enum::YLeaf source_address_mac;
        static const Enum::YLeaf username;

};

class PmapClassMapTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf qos;
        static const Enum::YLeaf traffic;
        static const Enum::YLeaf subscriber_control;

};

class PolicyMapTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf qos;
        static const Enum::YLeaf pbr;
        static const Enum::YLeaf traffic;
        static const Enum::YLeaf subscriber_control;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf flow_monitor;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_CFG_ */
