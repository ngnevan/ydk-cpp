#ifndef _CISCO_IOS_XE_NATIVE_155_
#define _CISCO_IOS_XE_NATIVE_155_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_122.hpp"
#include "Cisco_IOS_XE_native_152.hpp"
#include "Cisco_IOS_XE_native_154.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::IsisContainer::Isis::LspGenInterval::Intervals : public ydk::Entity
{
    public:
        Intervals();
        ~Intervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::LspGenInterval::Intervals


class Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels : public ydk::Entity
{
    public:
        IntervalsLevels();
        ~IntervalsLevels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntervalsLevel1; //type: Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1
        class IntervalsLevel2; //type: Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1> intervals_level_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2> intervals_level_2;
        
}; // Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels


class Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1 : public ydk::Entity
{
    public:
        IntervalsLevel1();
        ~IntervalsLevel1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1


class Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2 : public ydk::Entity
{
    public:
        IntervalsLevel2();
        ~IntervalsLevel2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_2; //type: empty
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2


class Native::Router::IsisContainer::Isis::Microloop : public ydk::Entity
{
    public:
        Microloop();
        ~Microloop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Avoidance; //type: Native::Router::IsisContainer::Isis::Microloop::Avoidance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Microloop::Avoidance> avoidance; // presence node
        
}; // Native::Router::IsisContainer::Isis::Microloop


class Native::Router::IsisContainer::Isis::Microloop::Avoidance : public ydk::Entity
{
    public:
        Avoidance();
        ~Avoidance();

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
        ydk::YLeaf protected_; //type: empty
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Native::Router::IsisContainer::Isis::Microloop::Avoidance


class Native::Router::IsisContainer::Isis::Mpls : public ydk::Entity
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

        class Ldp; //type: Native::Router::IsisContainer::Isis::Mpls::Ldp
        class TrafficEng; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::Ldp> ldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Router::IsisContainer::Isis::Mpls


class Native::Router::IsisContainer::Isis::Mpls::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync; //type: empty
        ydk::YLeaf sync_igp_shortcuts; //type: empty
        class Autoconfig; //type: Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig> autoconfig; // presence node
        
}; // Native::Router::IsisContainer::Isis::Mpls::Ldp


class Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig : public ydk::Entity
{
    public:
        Autoconfig();
        ~Autoconfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf level_2; //type: empty

}; // Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf level_2; //type: empty
        ydk::YLeaf multicast_intact; //type: empty
        class RouterId; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId
        class Scanner; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId> router_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner> scanner;
        
}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
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
        class ATMSubinterface; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner : public ydk::Entity
{
    public:
        Scanner();
        ~Scanner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf max_flash; //type: uint32

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner


class Native::Router::IsisContainer::Isis::Net : public ydk::Entity
{
    public:
        Net();
        ~Net();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string

}; // Native::Router::IsisContainer::Isis::Net


class Native::Router::IsisContainer::Isis::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf ietf; //type: empty
        ydk::YLeaf interval; //type: uint16
        class Interface; //type: Native::Router::IsisContainer::Isis::Nsf::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Nsf::Interface> interface;
        
}; // Native::Router::IsisContainer::Isis::Nsf


class Native::Router::IsisContainer::Isis::Nsf::Interface : public ydk::Entity
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

        ydk::YLeaf wait; //type: uint8

}; // Native::Router::IsisContainer::Isis::Nsf::Interface


class Native::Router::IsisContainer::Isis::Partition : public ydk::Entity
{
    public:
        Partition();
        ~Partition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avoidance; //type: empty

}; // Native::Router::IsisContainer::Isis::Partition


class Native::Router::IsisContainer::Isis::PassiveInterface : public ydk::Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

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
        ydk::YLeaf interface; //type: string

}; // Native::Router::IsisContainer::Isis::PassiveInterface


class Native::Router::IsisContainer::Isis::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PassiveInterface; //type: Native::Router::IsisContainer::Isis::Disable::PassiveInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::IsisContainer::Isis::Disable


class Native::Router::IsisContainer::Isis::Disable::PassiveInterface : public ydk::Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string

}; // Native::Router::IsisContainer::Isis::Disable::PassiveInterface


class Native::Router::IsisContainer::Isis::Protocol : public ydk::Entity
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

        ydk::YLeaf shutdown; //type: empty

}; // Native::Router::IsisContainer::Isis::Protocol


class Native::Router::IsisContainer::Isis::SegmentRouting : public ydk::Entity
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

        ydk::YLeaf mpls; //type: empty
        class PrefixSidMap; //type: Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap> prefix_sid_map;
        
}; // Native::Router::IsisContainer::Isis::SegmentRouting


class Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap : public ydk::Entity
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

        ydk::YLeaf advertise_local; //type: empty
        class Receive; //type: Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive> receive; // presence node
        
}; // Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap


class Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

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

}; // Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive


class Native::Router::IsisContainer::Isis::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::IsisContainer::Isis::Skeptical


class Native::Router::IsisContainer::Isis::Use : public ydk::Entity
{
    public:
        Use();
        ~Use();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_metrics; //type: empty

}; // Native::Router::IsisContainer::Isis::Use


class Native::Router::IsisContainer::Isis::Bfd : public ydk::Entity
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

        ydk::YLeaf all_interfaces; //type: empty
        ydk::YLeaf check_ctrl_plane_failure; //type: empty

}; // Native::Router::IsisContainer::Isis::Bfd


class Native::Router::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: one of uint16, string
        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf nsf; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf variance; //type: uint8
        class PassiveInterface; //type: Native::Router::Eigrp::PassiveInterface
        class AddressFamily; //type: Native::Router::Eigrp::AddressFamily
        class AfInterface; //type: Native::Router::Eigrp::AfInterface
        class SetAsInSubmode; //type: Native::Router::Eigrp::SetAsInSubmode
        class Bfd; //type: Native::Router::Eigrp::Bfd
        class DefaultInformation; //type: Native::Router::Eigrp::DefaultInformation
        class DefaultMetric; //type: Native::Router::Eigrp::DefaultMetric
        class Distance; //type: Native::Router::Eigrp::Distance
        class DistributeList; //type: Native::Router::Eigrp::DistributeList
        class Eigrp_; //type: Native::Router::Eigrp::Eigrp_
        class Metric; //type: Native::Router::Eigrp::Metric
        class Neighbor; //type: Native::Router::Eigrp::Neighbor
        class Network; //type: Native::Router::Eigrp::Network
        class OffsetList; //type: Native::Router::Eigrp::OffsetList
        class Redistribute; //type: Native::Router::Eigrp::Redistribute
        class SummaryMetric; //type: Native::Router::Eigrp::SummaryMetric
        class Timers; //type: Native::Router::Eigrp::Timers
        class TrafficShare; //type: Native::Router::Eigrp::TrafficShare

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::PassiveInterface> passive_interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily> > address_family;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AfInterface> > af_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::SetAsInSubmode> set_as_in_submode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultMetric> default_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::Eigrp_> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor> neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::OffsetList> offset_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::SummaryMetric> summary_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::TrafficShare> traffic_share;
        
}; // Native::Router::Eigrp


class Native::Router::Eigrp::PassiveInterface : public ydk::Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf default_; //type: empty

}; // Native::Router::Eigrp::PassiveInterface


class Native::Router::Eigrp::AddressFamily : public ydk::Entity
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

        ydk::YLeaf type; //type: Type
        class AfIpList; //type: Native::Router::Eigrp::AddressFamily::AfIpList
        class AfIpVrfList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList> > af_ip_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList> > af_ip_vrf_list;
                class Type;

}; // Native::Router::Eigrp::AddressFamily


class Native::Router::Eigrp::AddressFamily::AfIpList : public ydk::Entity
{
    public:
        AfIpList();
        ~AfIpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast_multicast; //type: UnicastMulticast
        ydk::YLeaf autonomous_system; //type: uint16
        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf nsf; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf variance; //type: uint8
        class AfInterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface
        class SetAsInSubmode; //type: Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode
        class Bfd; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd
        class DefaultInformation; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation
        class DefaultMetric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric
        class Distance; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance
        class DistributeList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_
        class Metric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Metric
        class Neighbor; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor
        class Network; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Network
        class OffsetList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList
        class Redistribute; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute
        class SummaryMetric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric
        class Timers; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Timers
        class TrafficShare; //type: Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare
        class Topology; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface> > af_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode> set_as_in_submode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric> default_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor> neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList> offset_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric> summary_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology> topology;
                class UnicastMulticast;

}; // Native::Router::Eigrp::AddressFamily::AfIpList


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface : public ydk::Entity
{
    public:
        AfInterface();
        ~AfInterface();

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
        ydk::YLeaf bandwidth_percent; //type: uint32
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf split_horizon; //type: boolean
        class StubSite; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite
        class Authentication; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication
        class SummaryAddress; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite> stub_site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress> summary_address;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite : public ydk::Entity
{
    public:
        StubSite();
        ~StubSite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wan_interface; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::StubSite


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication : public ydk::Entity
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
        class Mode; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode> mode;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: empty
        class HmacSha256; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256> hmac_sha_256;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256 : public ydk::Entity
{
    public:
        HmacSha256();
        ~HmacSha256();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress : public ydk::Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress


class Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode : public ydk::Entity
{
    public:
        SetAsInSubmode();
        ~SetAsInSubmode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system; //type: uint16

}; // Native::Router::Eigrp::AddressFamily::AfIpList::SetAsInSubmode


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd : public ydk::Entity
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

        ydk::YLeaf all_interfaces; //type: empty
        class Interface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface> interface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface : public ydk::Entity
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
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
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
        class ATMSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::ATMACRsubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LISPSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In
        class Out; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In> in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out> out; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_num; //type: uint16
        ydk::YLeaf sa_name; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_out_num; //type: uint16
        ydk::YLeaf sa_out_name; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric : public ydk::Entity
{
    public:
        DefaultMetric();
        ~DefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DmRdr; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr> > dm_rdr;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr : public ydk::Entity
{
    public:
        DmRdr();
        ~DmRdr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dm_rdr; //type: uint32
        class DmRdr0; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0> > dm_rdr0;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0 : public ydk::Entity
{
    public:
        DmRdr0();
        ~DmRdr0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dm_rdr0; //type: uint32
        ydk::YLeaf dm_rdr_pct; //type: uint8

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RadDis; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis> > rad_dis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_> eigrp;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis : public ydk::Entity
{
    public:
        RadDis();
        ~RadDis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rad_dis; //type: uint8
        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv40; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_ : public ydk::Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiRt; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt> > di_rt;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt : public ydk::Entity
{
    public:
        DiRt();
        ~DiRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf di_rt; //type: uint8
        ydk::YLeaf di_rt0; //type: uint8

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EigFilt; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt
        class Gateway; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway
        class Prefix; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix
        class RouteMap; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt> > eig_filt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway> gateway;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap> route_map;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt : public ydk::Entity
{
    public:
        EigFilt();
        ~EigFilt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eig_filt; //type: one of uint16, string
        class In; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In
        class Out; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In> in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out> out; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList interface_name; //type: list of  string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList interface_name; //type: list of  string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway : public ydk::Entity
{
    public:
        Gateway();
        ~Gateway();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GwList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList> > gw_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList : public ydk::Entity
{
    public:
        GwList();
        ~GwList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gw_list; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PlName; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName> > pl_name;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName : public ydk::Entity
{
    public:
        PlName();
        ~PlName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pl_name; //type: string
        ydk::YLeaf gateway; //type: empty
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RmapName; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName> > rmap_name;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName : public ydk::Entity
{
    public:
        RmapName();
        ~RmapName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rmap_name; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName


class Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_ : public ydk::Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf stub_site; //type: string
        class Stub; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub> stub; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub : public ydk::Entity
{
    public:
        Stub();
        ~Stub();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connected; //type: empty
        ydk::YLeaf summary; //type: empty
        ydk::YLeaf redistributed; //type: empty
        ydk::YLeaf leak_map; //type: string
        ydk::YLeaf receive_only; //type: empty
        ydk::YLeaf static_; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub


class Native::Router::Eigrp::AddressFamily::AfIpList::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_hops; //type: uint8
        ydk::YLeaf weights; //type: uint8

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Metric


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor : public ydk::Entity
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

        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        class Interface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface> interface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface : public ydk::Entity
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
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
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
        class ATMSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::ATMACRsubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LISPSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Network : public ydk::Entity
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

        ydk::YLeaf number; //type: string
        ydk::YLeaf wild_card; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Network


class Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList : public ydk::Entity
{
    public:
        OffsetList();
        ~OffsetList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList
        class OlAcl; //type: Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList> > nsr_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl> > ol_acl;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList


class Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList : public ydk::Entity
{
    public:
        NsrList();
        ~NsrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_list; //type: uint16
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList


class Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl : public ydk::Entity
{
    public:
        OlAcl();
        ~OlAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ol_acl; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf ospf; //type: uint16
        class Bgp; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp
        class Connected; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected
        class Isis; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis
        class Lisp; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp
        class Mobile; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile
        class Odr; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr
        class Rip; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip
        class Static; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static
        class Vrf; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr> odr; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static> static_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf> vrf;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rdr_as; //type: one of uint32, string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf rd_lesser_1_period_0_xx_period_yy_greater_; //type: empty
        class Metric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric> metric;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwith; //type: uint32
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf reliability; //type: uint8
        ydk::YLeaf effective; //type: uint8
        ydk::YLeaf mtu; //type: uint16

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_tag; //type: string
        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf level_1_2; //type: empty
        ydk::YLeaf level_2; //type: empty
        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr : public ydk::Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static : public ydk::Entity
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

        ydk::YLeaf metric; //type: empty
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf global; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf


class Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric : public ydk::Entity
{
    public:
        SummaryMetric();
        ~SummaryMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf a_period_b_period_c_period_d_slash_nn; //type: empty
        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric


class Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpList::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ActiveTime; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime
        class GracefulRestart; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart
        class Nsf; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime> active_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf> nsf;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Timers


class Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime : public ydk::Entity
{
    public:
        ActiveTime();
        ~ActiveTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atimer; //type: uint16
        ydk::YLeaf disabled; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime


class Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf purge_time; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart


class Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf converge; //type: empty
        ydk::YLeaf signal; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf


class Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare : public ydk::Entity
{
    public:
        TrafficShare();
        ~TrafficShare();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf balanced; //type: empty
        class Min; //type: Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min> min;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare


class Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min : public ydk::Entity
{
    public:
        Min();
        ~Min();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf across_interfaces; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Base; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base> base; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base : public ydk::Entity
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

        class Distance; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance
        class DistributeList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList
        class Redistribute; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute
        class SummaryMetric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute> redistribute;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric> > summary_metric;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_> eigrp;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_ : public ydk::Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DistanceList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList> > distance_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList : public ydk::Entity
{
    public:
        DistanceList();
        ~DistanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal_route; //type: uint8
        ydk::YLeaf external_route; //type: uint8

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList
        class RouteMap; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList> > prefix_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap> > route_map;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string
        ydk::YLeaf gateway; //type: empty
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

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
        ydk::YLeaf in; //type: string
        ydk::YLeaf out; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connected; //type: empty
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_
        class Ospf; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf
        class Static; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static> static_; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_ : public ydk::Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList> > as_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList : public ydk::Entity
{
    public:
        AsList();
        ~AsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system; //type: uint16

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PidList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList> > pid_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList : public ydk::Entity
{
    public:
        PidList();
        ~PidList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_id; //type: uint16

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Ospf::PidList


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static : public ydk::Entity
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


}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric : public ydk::Entity
{
    public:
        SummaryMetric();
        ~SummaryMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr_slash_prefix_len; //type: string
        ydk::YLeaf distance; //type: uint8
        class Metric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric> metric;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_metric; //type: uint32
        ydk::YLeaf delay_metric; //type: uint32
        ydk::YLeaf reliability_metric; //type: uint8
        ydk::YLeaf effective_bandwidth_metric; //type: uint8
        ydk::YLeaf mtu; //type: uint16

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::SummaryMetric::Metric


class Native::Router::Eigrp::AddressFamily::AfIpVrfList : public ydk::Entity
{
    public:
        AfIpVrfList();
        ~AfIpVrfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf unicast_multicast; //type: UnicastMulticast
        ydk::YLeaf autonomous_system; //type: uint16
        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf nsf; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf variance; //type: uint8
        class AfInterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface
        class SetAsInSubmode; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode
        class Bfd; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd
        class DefaultInformation; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation
        class DefaultMetric; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric
        class Distance; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance
        class DistributeList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_
        class Metric; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric
        class Neighbor; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor
        class Network; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network
        class OffsetList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList
        class Redistribute; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute
        class SummaryMetric; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric
        class Timers; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers
        class TrafficShare; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare
        class Topology; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface> > af_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode> set_as_in_submode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric> default_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor> neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList> offset_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric> summary_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology> topology;
                class UnicastMulticast;

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface : public ydk::Entity
{
    public:
        AfInterface();
        ~AfInterface();

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
        ydk::YLeaf bandwidth_percent; //type: uint32
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf split_horizon; //type: boolean
        class StubSite; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite
        class Authentication; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication
        class SummaryAddress; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite> stub_site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress> summary_address;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite : public ydk::Entity
{
    public:
        StubSite();
        ~StubSite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wan_interface; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::StubSite


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication : public ydk::Entity
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
        class Mode; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode> mode;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: empty
        class HmacSha256; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256> hmac_sha_256;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256 : public ydk::Entity
{
    public:
        HmacSha256();
        ~HmacSha256();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress : public ydk::Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode : public ydk::Entity
{
    public:
        SetAsInSubmode();
        ~SetAsInSubmode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autonomous_system; //type: uint16

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::SetAsInSubmode


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd : public ydk::Entity
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

        ydk::YLeaf all_interfaces; //type: empty
        class Interface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface> interface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface : public ydk::Entity
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
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
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
        class ATMSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::ATMACRsubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LISPSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In
        class Out; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In> in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out> out; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_num; //type: uint16
        ydk::YLeaf sa_name; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_out_num; //type: uint16
        ydk::YLeaf sa_out_name; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric : public ydk::Entity
{
    public:
        DefaultMetric();
        ~DefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DmRdr; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr> > dm_rdr;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr : public ydk::Entity
{
    public:
        DmRdr();
        ~DmRdr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dm_rdr; //type: uint32
        class DmRdr0; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0> > dm_rdr0;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0 : public ydk::Entity
{
    public:
        DmRdr0();
        ~DmRdr0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dm_rdr0; //type: uint32
        ydk::YLeaf dm_rdr_pct; //type: uint8

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RadDis; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis> > rad_dis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_> eigrp;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis : public ydk::Entity
{
    public:
        RadDis();
        ~RadDis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rad_dis; //type: uint8
        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv40; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_ : public ydk::Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiRt; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt> > di_rt;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt : public ydk::Entity
{
    public:
        DiRt();
        ~DiRt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf di_rt; //type: uint8
        ydk::YLeaf di_rt0; //type: uint8

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EigFilt; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt
        class Gateway; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway
        class Prefix; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix
        class RouteMap; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt> > eig_filt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway> gateway;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap> route_map;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt : public ydk::Entity
{
    public:
        EigFilt();
        ~EigFilt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eig_filt; //type: one of uint16, string
        class In; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In
        class Out; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In> in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out> out; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList interface_name; //type: list of  string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList interface_name; //type: list of  string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway : public ydk::Entity
{
    public:
        Gateway();
        ~Gateway();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GwList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList> > gw_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList : public ydk::Entity
{
    public:
        GwList();
        ~GwList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gw_list; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PlName; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName> > pl_name;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName : public ydk::Entity
{
    public:
        PlName();
        ~PlName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pl_name; //type: string
        ydk::YLeaf gateway; //type: empty
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName

class Native::Router::Eigrp::AddressFamily::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class Native::Router::Eigrp::AddressFamily::AfIpList::UnicastMulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};

class Native::Router::Eigrp::AddressFamily::AfIpVrfList::UnicastMulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_155_ */

