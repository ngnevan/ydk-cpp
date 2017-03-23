#ifndef _CISCO_IOS_XR_ES_ACL_CFG_
#define _CISCO_IOS_XR_ES_ACL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_es_acl_cfg {

class EsAcl : public Entity
{
    public:
        EsAcl();
        ~EsAcl();

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



        class Accesses; //type: EsAcl::Accesses

        std::shared_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses> accesses;


}; // EsAcl


class EsAcl::Accesses : public Entity
{
    public:
        Accesses();
        ~Accesses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Access; //type: EsAcl::Accesses::Access

        std::vector<std::shared_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access> > access;


}; // EsAcl::Accesses


class EsAcl::Accesses::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class AccessListEntries; //type: EsAcl::Accesses::Access::AccessListEntries

        std::shared_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries> access_list_entries;


}; // EsAcl::Accesses::Access


class EsAcl::Accesses::Access::AccessListEntries : public Entity
{
    public:
        AccessListEntries();
        ~AccessListEntries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccessListEntry; //type: EsAcl::Accesses::Access::AccessListEntries::AccessListEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries::AccessListEntry> > access_list_entry;


}; // EsAcl::Accesses::Access::AccessListEntries


class EsAcl::Accesses::Access::AccessListEntries::AccessListEntry : public Entity
{
    public:
        AccessListEntry();
        ~AccessListEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number; //type: uint32
        YLeaf grant; //type: EsAclGrantEnumEnum
        YLeaf vlan1; //type: uint16
        YLeaf vlan2; //type: uint16
        YLeaf cos; //type: uint8
        YLeaf dei; //type: uint8
        YLeaf inner_vlan1; //type: uint16
        YLeaf inner_vlan2; //type: uint16
        YLeaf inner_cos; //type: uint8
        YLeaf inner_dei; //type: uint8
        YLeaf remark; //type: string
        YLeaf ether_type_number; //type: uint16
        YLeaf capture; //type: boolean
        YLeaf log_option; //type: uint8
        YLeaf sequence_str; //type: string

        class SourceNetwork; //type: EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork
        class DestinationNetwork; //type: EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork

        std::shared_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork> destination_network;
        std::shared_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork> source_network;


}; // EsAcl::Accesses::Access::AccessListEntries::AccessListEntry


class EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork : public Entity
{
    public:
        SourceNetwork();
        ~SourceNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_wild_card_bits; //type: string



}; // EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork


class EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork : public Entity
{
    public:
        DestinationNetwork();
        ~DestinationNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf destination_wild_card_bits; //type: string



}; // EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork

class EsAclGrantEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};


}
}

#endif /* _CISCO_IOS_XR_ES_ACL_CFG_ */
