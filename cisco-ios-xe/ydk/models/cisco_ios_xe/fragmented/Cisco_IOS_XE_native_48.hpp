#ifndef _CISCO_IOS_XE_NATIVE_48_
#define _CISCO_IOS_XE_NATIVE_48_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_18.hpp"
#include "Cisco_IOS_XE_native_44.hpp"
#include "Cisco_IOS_XE_native_47.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::PrefixSuppression


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Shutdown


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4 : public ydk::Entity
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

        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Area; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Area
        class Authentication; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Authentication
        class Bfd; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Bfd
        class Cost; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost
        class DatabaseFilter; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::DemandCircuit
        class FloodReduction; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::FloodReduction
        class Manet; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet
        class MtuIgnore; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::MtuIgnore
        class MultiArea; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::MultiArea
        class Neighbor; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor
        class Network; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network
        class PrefixSuppression; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression
        class Shutdown; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Shutdown

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Area> > area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost> cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::MultiArea> multi_area;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor> > neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Shutdown> shutdown; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf instance; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Area


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf null; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Authentication


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Bfd


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

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
        class Dynamic; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        ydk::YLeaf disable; //type: empty
        class All;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::DemandCircuit


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::FloodReduction : public ydk::Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::FloodReduction


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peering; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering> peering;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost> cost;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::MtuIgnore : public ydk::Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::MtuIgnore


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::MultiArea


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Shutdown


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf transmit_delay; //type: uint32
        class Area; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Area
        class Authentication; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Authentication
        class Bfd; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Bfd
        class Cost; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost
        class DatabaseFilter; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit
        class FloodReduction; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction
        class Manet; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet
        class MtuIgnore; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore
        class MultiArea; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::MultiArea
        class Neighbor; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor
        class Network; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network
        class PrefixSuppression; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression
        class Shutdown; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Shutdown

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Area> > area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost> cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::MultiArea> multi_area;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor> > neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Shutdown> shutdown; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf instance; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Area


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf null; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Authentication


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Bfd


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

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
        class Dynamic; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        ydk::YLeaf disable; //type: empty
        class All;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::DemandCircuit


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction : public ydk::Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::FloodReduction


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peering; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering> peering;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost> cost;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore : public ydk::Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::MtuIgnore


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::MultiArea


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression


class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Shutdown : public ydk::Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Shutdown


class Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication


class Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spi; //type: uint64
        class Md5; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec


class Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5


class Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString


class Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1 : public ydk::Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1


class Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::FiveGigabitEthernet::Ospfv3::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Bfd


class Native::Interface::FiveGigabitEthernet::Ospfv3::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

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
        class Dynamic; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Cost


class Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic


class Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis : public ydk::Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Factor; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor : public ydk::Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency : public ydk::Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput : public ydk::Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::FiveGigabitEthernet::Ospfv3::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::DatabaseFilter


class Native::Interface::FiveGigabitEthernet::Ospfv3::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::DemandCircuit


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spi; //type: uint64
        ydk::YLeaf esp; //type: empty
        class Ipsec3Des; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des
        class AesCbc; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des> ipsec_3des;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc> aes_cbc;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des : public ydk::Entity
{
    public:
        Ipsec3Des();
        ~Ipsec3Des();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString> key_string;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc : public ydk::Entity
{
    public:
        AesCbc();
        ~AesCbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AesCbc128; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public ydk::Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public ydk::Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public ydk::Entity
{
    public:
        Aes256();
        ~Aes256();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyString; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        class Encrypt;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::FiveGigabitEthernet::Ospfv3::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peering; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Manet


class Native::Interface::FiveGigabitEthernet::Ospfv3::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Manet::Peering


class Native::Interface::FiveGigabitEthernet::Ospfv3::Manet::Peering::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint8
        ydk::YLeaf threshold; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Manet::Peering::Cost


class Native::Interface::FiveGigabitEthernet::Ospfv3::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf cost; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::MultiArea


class Native::Interface::FiveGigabitEthernet::Ospfv3::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Neighbor


class Native::Interface::FiveGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: All
        class All;

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::FiveGigabitEthernet::Ospfv3::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf manet; //type: empty
        ydk::YLeaf non_broadcast; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::FiveGigabitEthernet::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Network


class Native::Interface::FiveGigabitEthernet::Ospfv3::Network::PointToMultipoint : public ydk::Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_broadcast; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::Network::PointToMultipoint


class Native::Interface::FiveGigabitEthernet::Ospfv3::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ospfv3::PrefixSuppression


class Native::Interface::FiveGigabitEthernet::Power : public ydk::Entity
{
    public:
        Power();
        ~Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inline; //type: Native::Interface::FiveGigabitEthernet::Power::Inline

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Power::Inline> inline_;
        
}; // Native::Interface::FiveGigabitEthernet::Power


class Native::Interface::FiveGigabitEthernet::Power::Inline : public ydk::Entity
{
    public:
        Inline();
        ~Inline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf consumption; //type: uint16
        ydk::YLeaf never; //type: empty
        class Auto; //type: Native::Interface::FiveGigabitEthernet::Power::Inline::Auto
        class FourPair; //type: Native::Interface::FiveGigabitEthernet::Power::Inline::FourPair
        class Police; //type: Native::Interface::FiveGigabitEthernet::Power::Inline::Police
        class Port; //type: Native::Interface::FiveGigabitEthernet::Power::Inline::Port
        class Static; //type: Native::Interface::FiveGigabitEthernet::Power::Inline::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Power::Inline::Auto> auto_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Power::Inline::FourPair> four_pair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Power::Inline::Police> police; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Power::Inline::Port> port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Power::Inline::Static> static_; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Power::Inline


class Native::Interface::FiveGigabitEthernet::Power::Inline::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: int32

}; // Native::Interface::FiveGigabitEthernet::Power::Inline::Auto


class Native::Interface::FiveGigabitEthernet::Power::Inline::FourPair : public ydk::Entity
{
    public:
        FourPair();
        ~FourPair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forced; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Power::Inline::FourPair


class Native::Interface::FiveGigabitEthernet::Power::Inline::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FiveGigabitEthernet::Power::Inline::Police::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Power::Inline::Police::Action> action;
        
}; // Native::Interface::FiveGigabitEthernet::Power::Inline::Police


class Native::Interface::FiveGigabitEthernet::Power::Inline::Police::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf errdisable; //type: empty
        ydk::YLeaf log; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Power::Inline::Police::Action


class Native::Interface::FiveGigabitEthernet::Power::Inline::Port : public ydk::Entity
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

        ydk::YLeaf poe_ha; //type: empty
        ydk::YLeaf perpetual_poe_ha; //type: empty
        ydk::YLeaf two_event; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Power::Inline::Port


class Native::Interface::FiveGigabitEthernet::Power::Inline::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: int32

}; // Native::Interface::FiveGigabitEthernet::Power::Inline::Static


class Native::Interface::FiveGigabitEthernet::Authentication : public ydk::Entity
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

        ydk::YLeaf control_direction; //type: ControlDirection
        ydk::YLeaf fallback; //type: string
        ydk::YLeaf host_mode; //type: HostMode
        ydk::YLeaf open; //type: empty
        ydk::YLeaf port_control; //type: PortControl
        ydk::YLeaf periodic; //type: empty
        ydk::YLeaf violation; //type: Violation
        class Event; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event
        class Order; //type: Native::Interface::FiveGigabitEthernet::Authentication::Order
        class Priority; //type: Native::Interface::FiveGigabitEthernet::Authentication::Priority
        class Timer; //type: Native::Interface::FiveGigabitEthernet::Authentication::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event> event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Order> order;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Timer> timer;
                class ControlDirection;
        class HostMode;
        class PortControl;
        class Violation;

}; // Native::Interface::FiveGigabitEthernet::Authentication


class Native::Interface::FiveGigabitEthernet::Authentication::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Server; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Server
        class Fail; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail
        class NoResponse; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail> fail;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse> no_response;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Event


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Alive; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Alive
        class Dead; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Alive> alive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead> dead;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Server


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Alive : public ydk::Entity
{
    public:
        Alive();
        ~Alive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Alive::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Alive::Action> action;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Alive


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Alive::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reinitialize; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Alive::Action


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead : public ydk::Entity
{
    public:
        Dead();
        ~Dead();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action> action;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorize; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize
        class Reinitialize; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize> authorize; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize> reinitialize;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize : public ydk::Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf voice; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize : public ydk::Entity
{
    public:
        Reinitialize();
        ~Reinitialize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail : public ydk::Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail::Action> action;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorize; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail::Action::Authorize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail::Action::Authorize> authorize;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail::Action


class Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail::Action::Authorize : public ydk::Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::Fail::Action::Authorize


class Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse : public ydk::Entity
{
    public:
        NoResponse();
        ~NoResponse();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse::Action> action;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse


class Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorize; //type: Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize> authorize;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse::Action


class Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize : public ydk::Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::FiveGigabitEthernet::Authentication::Event::NoResponse::Action::Authorize


class Native::Interface::FiveGigabitEthernet::Authentication::Order : public ydk::Entity
{
    public:
        Order();
        ~Order();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Authentication::Order


class Native::Interface::FiveGigabitEthernet::Authentication::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Authentication::Priority


class Native::Interface::FiveGigabitEthernet::Authentication::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: uint16
        class Reauthenticate; //type: Native::Interface::FiveGigabitEthernet::Authentication::Timer::Reauthenticate
        class Inactivity; //type: Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Timer::Reauthenticate> reauthenticate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity> inactivity;
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Timer


class Native::Interface::FiveGigabitEthernet::Authentication::Timer::Reauthenticate : public ydk::Entity
{
    public:
        Reauthenticate();
        ~Reauthenticate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf server; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Authentication::Timer::Reauthenticate


class Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity : public ydk::Entity
{
    public:
        Inactivity();
        ~Inactivity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value; //type: Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity::Value
        class Server; //type: Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity::Value> value_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity::Server> server; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity


class Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity::Value : public ydk::Entity
{
    public:
        Value();
        ~Value();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf dynamic; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity::Value


class Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Authentication::Timer::Inactivity::Server


class Native::Interface::FiveGigabitEthernet::Mab : public ydk::Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eap; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Mab


class Native::Interface::FiveGigabitEthernet::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bpdufilter; //type: Bpdufilter
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf guard; //type: Guard
        ydk::YLeaf link_type; //type: LinkType
        ydk::YLeaf port_priority; //type: uint8
        class Bpduguard; //type: Native::Interface::FiveGigabitEthernet::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::FiveGigabitEthernet::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::FiveGigabitEthernet::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::FiveGigabitEthernet::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::FiveGigabitEthernet::SpanningTree::Mst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::SpanningTree::Portfast> portfast; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::SpanningTree::Vlan> > vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::SpanningTree::Mst> mst;
                class Bpdufilter;
        class Guard;
        class LinkType;

}; // Native::Interface::FiveGigabitEthernet::SpanningTree


class Native::Interface::FiveGigabitEthernet::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty

}; // Native::Interface::FiveGigabitEthernet::SpanningTree::Bpduguard


class Native::Interface::FiveGigabitEthernet::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf edge; //type: empty

}; // Native::Interface::FiveGigabitEthernet::SpanningTree::Portfast


class Native::Interface::FiveGigabitEthernet::SpanningTree::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan_ids; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16

}; // Native::Interface::FiveGigabitEthernet::SpanningTree::Vlan


class Native::Interface::FiveGigabitEthernet::SpanningTree::Loopguard : public ydk::Entity
{
    public:
        Loopguard();
        ~Loopguard();

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

}; // Native::Interface::FiveGigabitEthernet::SpanningTree::Loopguard


class Native::Interface::FiveGigabitEthernet::SpanningTree::Mst : public ydk::Entity
{
    public:
        Mst();
        ~Mst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_standard; //type: empty
        class MstInstance; //type: Native::Interface::FiveGigabitEthernet::SpanningTree::Mst::MstInstance

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::SpanningTree::Mst::MstInstance> > mst_instance;
        
}; // Native::Interface::FiveGigabitEthernet::SpanningTree::Mst


class Native::Interface::FiveGigabitEthernet::SpanningTree::Mst::MstInstance : public ydk::Entity
{
    public:
        MstInstance();
        ~MstInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16

}; // Native::Interface::FiveGigabitEthernet::SpanningTree::Mst::MstInstance


class Native::Interface::FiveGigabitEthernet::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qos; //type: Native::Interface::FiveGigabitEthernet::Auto::Qos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Auto::Qos> qos;
        
}; // Native::Interface::FiveGigabitEthernet::Auto


class Native::Interface::FiveGigabitEthernet::Auto::Qos : public ydk::Entity
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

        class Classify; //type: Native::Interface::FiveGigabitEthernet::Auto::Qos::Classify
        class Trust; //type: Native::Interface::FiveGigabitEthernet::Auto::Qos::Trust
        class Video; //type: Native::Interface::FiveGigabitEthernet::Auto::Qos::Video
        class Voip; //type: Native::Interface::FiveGigabitEthernet::Auto::Qos::Voip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Auto::Qos::Classify> classify; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Auto::Qos::Trust> trust; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Auto::Qos::Video> video;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Auto::Qos::Voip> voip; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Auto::Qos


class Native::Interface::FiveGigabitEthernet::Auto::Qos::Classify : public ydk::Entity
{
    public:
        Classify();
        ~Classify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf police; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Auto::Qos::Classify


class Native::Interface::FiveGigabitEthernet::Auto::Qos::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos; //type: empty
        ydk::YLeaf dscp; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Auto::Qos::Trust


class Native::Interface::FiveGigabitEthernet::Auto::Qos::Video : public ydk::Entity
{
    public:
        Video();
        ~Video();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cts; //type: empty
        ydk::YLeaf ip_camera; //type: empty
        ydk::YLeaf media_player; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Auto::Qos::Video


class Native::Interface::FiveGigabitEthernet::Auto::Qos::Voip : public ydk::Entity
{
    public:
        Voip();
        ~Voip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cisco_phone; //type: empty
        ydk::YLeaf cisco_softphone; //type: empty
        ydk::YLeaf trust; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Auto::Qos::Voip


class Native::Interface::FiveGigabitEthernet::Datalink : public ydk::Entity
{
    public:
        Datalink();
        ~Datalink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::Interface::FiveGigabitEthernet::Datalink::Flow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Datalink::Flow> flow;
        
}; // Native::Interface::FiveGigabitEthernet::Datalink


class Native::Interface::FiveGigabitEthernet::Datalink::Flow : public ydk::Entity
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

        class Monitor; //type: Native::Interface::FiveGigabitEthernet::Datalink::Flow::Monitor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Datalink::Flow::Monitor> monitor; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Datalink::Flow


class Native::Interface::FiveGigabitEthernet::Datalink::Flow::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf user_defined_flow; //type: string
        ydk::YLeaf input_output; //type: InputOutput
        class InputOutput;

}; // Native::Interface::FiveGigabitEthernet::Datalink::Flow::Monitor


class Native::Interface::FiveGigabitEthernet::Energywise : public ydk::Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf activitycheck; //type: empty
        class Level; //type: Native::Interface::FiveGigabitEthernet::Energywise::Level

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Energywise::Level> > level;
        
}; // Native::Interface::FiveGigabitEthernet::Energywise


class Native::Interface::FiveGigabitEthernet::Energywise::Level : public ydk::Entity
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

        ydk::YLeaf range; //type: uint8
        class Recurrence; //type: Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence> recurrence;
        
}; // Native::Interface::FiveGigabitEthernet::Energywise::Level


class Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence : public ydk::Entity
{
    public:
        Recurrence();
        ~Recurrence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Importance; //type: Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence::Importance

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence::Importance> > importance;
        
}; // Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence


class Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence::Importance : public ydk::Entity
{
    public:
        Importance();
        ~Importance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        class At; //type: Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence::Importance::At

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence::Importance::At> at;
        
}; // Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence::Importance


class Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence::Importance::At : public ydk::Entity
{
    public:
        At();
        ~At();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minute; //type: one of uint16, string
        ydk::YLeaf hour; //type: one of uint16, string
        ydk::YLeaf day; //type: one of uint16, string
        ydk::YLeaf month; //type: one of uint16, string
        ydk::YLeaf weekday; //type: one of uint16, string

}; // Native::Interface::FiveGigabitEthernet::Energywise::Level::Recurrence::Importance::At


class Native::Interface::FiveGigabitEthernet::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CivicLocationId; //type: Native::Interface::FiveGigabitEthernet::Location::CivicLocationId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Location::CivicLocationId> civic_location_id;
        
}; // Native::Interface::FiveGigabitEthernet::Location


class Native::Interface::FiveGigabitEthernet::Location::CivicLocationId : public ydk::Entity
{
    public:
        CivicLocationId();
        ~CivicLocationId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_identifier; //type: string
        class Host; //type: Native::Interface::FiveGigabitEthernet::Location::CivicLocationId::Host
        class None; //type: Native::Interface::FiveGigabitEthernet::Location::CivicLocationId::None

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Location::CivicLocationId::Host> host; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Location::CivicLocationId::None> none; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Location::CivicLocationId


class Native::Interface::FiveGigabitEthernet::Location::CivicLocationId::Host : public ydk::Entity
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

        ydk::YLeaf port_location; //type: string

}; // Native::Interface::FiveGigabitEthernet::Location::CivicLocationId::Host


class Native::Interface::FiveGigabitEthernet::Location::CivicLocationId::None : public ydk::Entity
{
    public:
        None();
        ~None();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_location; //type: string

}; // Native::Interface::FiveGigabitEthernet::Location::CivicLocationId::None


class Native::Interface::FiveGigabitEthernet::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessGroup; //type: Native::Interface::FiveGigabitEthernet::Mac::AccessGroup

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Mac::AccessGroup> > access_group;
        
}; // Native::Interface::FiveGigabitEthernet::Mac


class Native::Interface::FiveGigabitEthernet::Mac::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

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
        ydk::YLeaf acl_name; //type: string
        class Direction;

}; // Native::Interface::FiveGigabitEthernet::Mac::AccessGroup


class Native::Interface::FiveGigabitEthernet::Macro : public ydk::Entity
{
    public:
        Macro();
        ~Macro();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        class Auto; //type: Native::Interface::FiveGigabitEthernet::Macro::Auto

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Macro::Auto> auto_;
        
}; // Native::Interface::FiveGigabitEthernet::Macro

class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::FiveGigabitEthernet::Ospfv3::Neighbor::DatabaseFilter::All : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::FiveGigabitEthernet::Authentication::ControlDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf in;

};

class Native::Interface::FiveGigabitEthernet::Authentication::HostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_auth;
        static const ydk::Enum::YLeaf multi_domain;
        static const ydk::Enum::YLeaf multi_host;
        static const ydk::Enum::YLeaf single_host;

};

class Native::Interface::FiveGigabitEthernet::Authentication::PortControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf force_authorized;
        static const ydk::Enum::YLeaf force_unauthorized;

};

class Native::Interface::FiveGigabitEthernet::Authentication::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf replace;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::FiveGigabitEthernet::SpanningTree::Bpdufilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class Native::Interface::FiveGigabitEthernet::SpanningTree::Guard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf root;

};

class Native::Interface::FiveGigabitEthernet::SpanningTree::LinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf shared;

};

class Native::Interface::FiveGigabitEthernet::Datalink::Flow::Monitor::InputOutput : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::FiveGigabitEthernet::Mac::AccessGroup::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_48_ */

