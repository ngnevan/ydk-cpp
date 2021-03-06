#ifndef _IP_MIB_
#define _IP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace IP_MIB {

class IPMIB : public ydk::Entity
{
    public:
        IPMIB();
        ~IPMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Ip; //type: IPMIB::Ip
        class Iptrafficstats; //type: IPMIB::Iptrafficstats
        class Icmp; //type: IPMIB::Icmp
        class Ipaddrtable; //type: IPMIB::Ipaddrtable
        class Ipnettomediatable; //type: IPMIB::Ipnettomediatable
        class Ipv4Interfacetable; //type: IPMIB::Ipv4Interfacetable
        class Ipv6Interfacetable; //type: IPMIB::Ipv6Interfacetable
        class Ipsystemstatstable; //type: IPMIB::Ipsystemstatstable
        class Ipifstatstable; //type: IPMIB::Ipifstatstable
        class Ipaddressprefixtable; //type: IPMIB::Ipaddressprefixtable
        class Ipaddresstable; //type: IPMIB::Ipaddresstable
        class Ipnettophysicaltable; //type: IPMIB::Ipnettophysicaltable
        class Ipv6Scopezoneindextable; //type: IPMIB::Ipv6Scopezoneindextable
        class Ipdefaultroutertable; //type: IPMIB::Ipdefaultroutertable
        class Ipv6Routeradverttable; //type: IPMIB::Ipv6Routeradverttable
        class Icmpstatstable; //type: IPMIB::Icmpstatstable
        class Icmpmsgstatstable; //type: IPMIB::Icmpmsgstatstable

        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ip> ip;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Iptrafficstats> iptrafficstats;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Icmp> icmp;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipaddrtable> ipaddrtable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipnettomediatable> ipnettomediatable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv4Interfacetable> ipv4interfacetable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv6Interfacetable> ipv6interfacetable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipsystemstatstable> ipsystemstatstable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipifstatstable> ipifstatstable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipaddressprefixtable> ipaddressprefixtable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipaddresstable> ipaddresstable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipnettophysicaltable> ipnettophysicaltable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv6Scopezoneindextable> ipv6scopezoneindextable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipdefaultroutertable> ipdefaultroutertable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv6Routeradverttable> ipv6routeradverttable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Icmpstatstable> icmpstatstable;
        std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Icmpmsgstatstable> icmpmsgstatstable;
        
}; // IPMIB


class IPMIB::Ip : public ydk::Entity
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

        ydk::YLeaf ipforwarding; //type: Ipforwarding
        ydk::YLeaf ipdefaultttl; //type: int32
        ydk::YLeaf ipinreceives; //type: uint32
        ydk::YLeaf ipinhdrerrors; //type: uint32
        ydk::YLeaf ipinaddrerrors; //type: uint32
        ydk::YLeaf ipforwdatagrams; //type: uint32
        ydk::YLeaf ipinunknownprotos; //type: uint32
        ydk::YLeaf ipindiscards; //type: uint32
        ydk::YLeaf ipindelivers; //type: uint32
        ydk::YLeaf ipoutrequests; //type: uint32
        ydk::YLeaf ipoutdiscards; //type: uint32
        ydk::YLeaf ipoutnoroutes; //type: uint32
        ydk::YLeaf ipreasmtimeout; //type: int32
        ydk::YLeaf ipreasmreqds; //type: uint32
        ydk::YLeaf ipreasmoks; //type: uint32
        ydk::YLeaf ipreasmfails; //type: uint32
        ydk::YLeaf ipfragoks; //type: uint32
        ydk::YLeaf ipfragfails; //type: uint32
        ydk::YLeaf ipfragcreates; //type: uint32
        ydk::YLeaf iproutingdiscards; //type: uint32
        ydk::YLeaf ipv6ipforwarding; //type: Ipv6Ipforwarding
        ydk::YLeaf ipv6ipdefaulthoplimit; //type: int32
        ydk::YLeaf ipv4interfacetablelastchange; //type: uint32
        ydk::YLeaf ipv6interfacetablelastchange; //type: uint32
        ydk::YLeaf ipaddressspinlock; //type: int32
        ydk::YLeaf ipv6routeradvertspinlock; //type: int32
        class Ipforwarding;
        class Ipv6Ipforwarding;

}; // IPMIB::Ip


class IPMIB::Iptrafficstats : public ydk::Entity
{
    public:
        Iptrafficstats();
        ~Iptrafficstats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipifstatstablelastchange; //type: uint32

}; // IPMIB::Iptrafficstats


class IPMIB::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf icmpinmsgs; //type: uint32
        ydk::YLeaf icmpinerrors; //type: uint32
        ydk::YLeaf icmpindestunreachs; //type: uint32
        ydk::YLeaf icmpintimeexcds; //type: uint32
        ydk::YLeaf icmpinparmprobs; //type: uint32
        ydk::YLeaf icmpinsrcquenchs; //type: uint32
        ydk::YLeaf icmpinredirects; //type: uint32
        ydk::YLeaf icmpinechos; //type: uint32
        ydk::YLeaf icmpinechoreps; //type: uint32
        ydk::YLeaf icmpintimestamps; //type: uint32
        ydk::YLeaf icmpintimestampreps; //type: uint32
        ydk::YLeaf icmpinaddrmasks; //type: uint32
        ydk::YLeaf icmpinaddrmaskreps; //type: uint32
        ydk::YLeaf icmpoutmsgs; //type: uint32
        ydk::YLeaf icmpouterrors; //type: uint32
        ydk::YLeaf icmpoutdestunreachs; //type: uint32
        ydk::YLeaf icmpouttimeexcds; //type: uint32
        ydk::YLeaf icmpoutparmprobs; //type: uint32
        ydk::YLeaf icmpoutsrcquenchs; //type: uint32
        ydk::YLeaf icmpoutredirects; //type: uint32
        ydk::YLeaf icmpoutechos; //type: uint32
        ydk::YLeaf icmpoutechoreps; //type: uint32
        ydk::YLeaf icmpouttimestamps; //type: uint32
        ydk::YLeaf icmpouttimestampreps; //type: uint32
        ydk::YLeaf icmpoutaddrmasks; //type: uint32
        ydk::YLeaf icmpoutaddrmaskreps; //type: uint32

}; // IPMIB::Icmp


class IPMIB::Ipaddrtable : public ydk::Entity
{
    public:
        Ipaddrtable();
        ~Ipaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipaddrentry; //type: IPMIB::Ipaddrtable::Ipaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipaddrtable::Ipaddrentry> > ipaddrentry;
        
}; // IPMIB::Ipaddrtable


class IPMIB::Ipaddrtable::Ipaddrentry : public ydk::Entity
{
    public:
        Ipaddrentry();
        ~Ipaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipadentaddr; //type: string
        ydk::YLeaf ipadentifindex; //type: int32
        ydk::YLeaf ipadentnetmask; //type: string
        ydk::YLeaf ipadentbcastaddr; //type: int32
        ydk::YLeaf ipadentreasmmaxsize; //type: int32

}; // IPMIB::Ipaddrtable::Ipaddrentry


class IPMIB::Ipnettomediatable : public ydk::Entity
{
    public:
        Ipnettomediatable();
        ~Ipnettomediatable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipnettomediaentry; //type: IPMIB::Ipnettomediatable::Ipnettomediaentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipnettomediatable::Ipnettomediaentry> > ipnettomediaentry;
        
}; // IPMIB::Ipnettomediatable


class IPMIB::Ipnettomediatable::Ipnettomediaentry : public ydk::Entity
{
    public:
        Ipnettomediaentry();
        ~Ipnettomediaentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipnettomediaifindex; //type: int32
        ydk::YLeaf ipnettomedianetaddress; //type: string
        ydk::YLeaf ipnettomediaphysaddress; //type: string
        ydk::YLeaf ipnettomediatype; //type: Ipnettomediatype
        class Ipnettomediatype;

}; // IPMIB::Ipnettomediatable::Ipnettomediaentry


class IPMIB::Ipv4Interfacetable : public ydk::Entity
{
    public:
        Ipv4Interfacetable();
        ~Ipv4Interfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4Interfaceentry; //type: IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry> > ipv4interfaceentry;
        
}; // IPMIB::Ipv4Interfacetable


class IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry : public ydk::Entity
{
    public:
        Ipv4Interfaceentry();
        ~Ipv4Interfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4interfaceifindex; //type: int32
        ydk::YLeaf ipv4interfacereasmmaxsize; //type: int32
        ydk::YLeaf ipv4interfaceenablestatus; //type: Ipv4Interfaceenablestatus
        ydk::YLeaf ipv4interfaceretransmittime; //type: uint32
        class Ipv4Interfaceenablestatus;

}; // IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry


class IPMIB::Ipv6Interfacetable : public ydk::Entity
{
    public:
        Ipv6Interfacetable();
        ~Ipv6Interfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6Interfaceentry; //type: IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry> > ipv6interfaceentry;
        
}; // IPMIB::Ipv6Interfacetable


class IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry : public ydk::Entity
{
    public:
        Ipv6Interfaceentry();
        ~Ipv6Interfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6interfaceifindex; //type: int32
        ydk::YLeaf ipv6interfacereasmmaxsize; //type: uint32
        ydk::YLeaf ipv6interfaceidentifier; //type: string
        ydk::YLeaf ipv6interfaceenablestatus; //type: Ipv6Interfaceenablestatus
        ydk::YLeaf ipv6interfacereachabletime; //type: uint32
        ydk::YLeaf ipv6interfaceretransmittime; //type: uint32
        ydk::YLeaf ipv6interfaceforwarding; //type: Ipv6Interfaceforwarding
        class Ipv6Interfaceenablestatus;
        class Ipv6Interfaceforwarding;

}; // IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry


class IPMIB::Ipsystemstatstable : public ydk::Entity
{
    public:
        Ipsystemstatstable();
        ~Ipsystemstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipsystemstatsentry; //type: IPMIB::Ipsystemstatstable::Ipsystemstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipsystemstatstable::Ipsystemstatsentry> > ipsystemstatsentry;
        
}; // IPMIB::Ipsystemstatstable


class IPMIB::Ipsystemstatstable::Ipsystemstatsentry : public ydk::Entity
{
    public:
        Ipsystemstatsentry();
        ~Ipsystemstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipsystemstatsipversion; //type: IpVersion
        ydk::YLeaf ipsystemstatsinreceives; //type: uint32
        ydk::YLeaf ipsystemstatshcinreceives; //type: uint64
        ydk::YLeaf ipsystemstatsinoctets; //type: uint32
        ydk::YLeaf ipsystemstatshcinoctets; //type: uint64
        ydk::YLeaf ipsystemstatsinhdrerrors; //type: uint32
        ydk::YLeaf ipsystemstatsinnoroutes; //type: uint32
        ydk::YLeaf ipsystemstatsinaddrerrors; //type: uint32
        ydk::YLeaf ipsystemstatsinunknownprotos; //type: uint32
        ydk::YLeaf ipsystemstatsintruncatedpkts; //type: uint32
        ydk::YLeaf ipsystemstatsinforwdatagrams; //type: uint32
        ydk::YLeaf ipsystemstatshcinforwdatagrams; //type: uint64
        ydk::YLeaf ipsystemstatsreasmreqds; //type: uint32
        ydk::YLeaf ipsystemstatsreasmoks; //type: uint32
        ydk::YLeaf ipsystemstatsreasmfails; //type: uint32
        ydk::YLeaf ipsystemstatsindiscards; //type: uint32
        ydk::YLeaf ipsystemstatsindelivers; //type: uint32
        ydk::YLeaf ipsystemstatshcindelivers; //type: uint64
        ydk::YLeaf ipsystemstatsoutrequests; //type: uint32
        ydk::YLeaf ipsystemstatshcoutrequests; //type: uint64
        ydk::YLeaf ipsystemstatsoutnoroutes; //type: uint32
        ydk::YLeaf ipsystemstatsoutforwdatagrams; //type: uint32
        ydk::YLeaf ipsystemstatshcoutforwdatagrams; //type: uint64
        ydk::YLeaf ipsystemstatsoutdiscards; //type: uint32
        ydk::YLeaf ipsystemstatsoutfragreqds; //type: uint32
        ydk::YLeaf ipsystemstatsoutfragoks; //type: uint32
        ydk::YLeaf ipsystemstatsoutfragfails; //type: uint32
        ydk::YLeaf ipsystemstatsoutfragcreates; //type: uint32
        ydk::YLeaf ipsystemstatsouttransmits; //type: uint32
        ydk::YLeaf ipsystemstatshcouttransmits; //type: uint64
        ydk::YLeaf ipsystemstatsoutoctets; //type: uint32
        ydk::YLeaf ipsystemstatshcoutoctets; //type: uint64
        ydk::YLeaf ipsystemstatsinmcastpkts; //type: uint32
        ydk::YLeaf ipsystemstatshcinmcastpkts; //type: uint64
        ydk::YLeaf ipsystemstatsinmcastoctets; //type: uint32
        ydk::YLeaf ipsystemstatshcinmcastoctets; //type: uint64
        ydk::YLeaf ipsystemstatsoutmcastpkts; //type: uint32
        ydk::YLeaf ipsystemstatshcoutmcastpkts; //type: uint64
        ydk::YLeaf ipsystemstatsoutmcastoctets; //type: uint32
        ydk::YLeaf ipsystemstatshcoutmcastoctets; //type: uint64
        ydk::YLeaf ipsystemstatsinbcastpkts; //type: uint32
        ydk::YLeaf ipsystemstatshcinbcastpkts; //type: uint64
        ydk::YLeaf ipsystemstatsoutbcastpkts; //type: uint32
        ydk::YLeaf ipsystemstatshcoutbcastpkts; //type: uint64
        ydk::YLeaf ipsystemstatsdiscontinuitytime; //type: uint32
        ydk::YLeaf ipsystemstatsrefreshrate; //type: uint32

}; // IPMIB::Ipsystemstatstable::Ipsystemstatsentry


class IPMIB::Ipifstatstable : public ydk::Entity
{
    public:
        Ipifstatstable();
        ~Ipifstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipifstatsentry; //type: IPMIB::Ipifstatstable::Ipifstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipifstatstable::Ipifstatsentry> > ipifstatsentry;
        
}; // IPMIB::Ipifstatstable


class IPMIB::Ipifstatstable::Ipifstatsentry : public ydk::Entity
{
    public:
        Ipifstatsentry();
        ~Ipifstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipifstatsipversion; //type: IpVersion
        ydk::YLeaf ipifstatsifindex; //type: int32
        ydk::YLeaf ipifstatsinreceives; //type: uint32
        ydk::YLeaf ipifstatshcinreceives; //type: uint64
        ydk::YLeaf ipifstatsinoctets; //type: uint32
        ydk::YLeaf ipifstatshcinoctets; //type: uint64
        ydk::YLeaf ipifstatsinhdrerrors; //type: uint32
        ydk::YLeaf ipifstatsinnoroutes; //type: uint32
        ydk::YLeaf ipifstatsinaddrerrors; //type: uint32
        ydk::YLeaf ipifstatsinunknownprotos; //type: uint32
        ydk::YLeaf ipifstatsintruncatedpkts; //type: uint32
        ydk::YLeaf ipifstatsinforwdatagrams; //type: uint32
        ydk::YLeaf ipifstatshcinforwdatagrams; //type: uint64
        ydk::YLeaf ipifstatsreasmreqds; //type: uint32
        ydk::YLeaf ipifstatsreasmoks; //type: uint32
        ydk::YLeaf ipifstatsreasmfails; //type: uint32
        ydk::YLeaf ipifstatsindiscards; //type: uint32
        ydk::YLeaf ipifstatsindelivers; //type: uint32
        ydk::YLeaf ipifstatshcindelivers; //type: uint64
        ydk::YLeaf ipifstatsoutrequests; //type: uint32
        ydk::YLeaf ipifstatshcoutrequests; //type: uint64
        ydk::YLeaf ipifstatsoutforwdatagrams; //type: uint32
        ydk::YLeaf ipifstatshcoutforwdatagrams; //type: uint64
        ydk::YLeaf ipifstatsoutdiscards; //type: uint32
        ydk::YLeaf ipifstatsoutfragreqds; //type: uint32
        ydk::YLeaf ipifstatsoutfragoks; //type: uint32
        ydk::YLeaf ipifstatsoutfragfails; //type: uint32
        ydk::YLeaf ipifstatsoutfragcreates; //type: uint32
        ydk::YLeaf ipifstatsouttransmits; //type: uint32
        ydk::YLeaf ipifstatshcouttransmits; //type: uint64
        ydk::YLeaf ipifstatsoutoctets; //type: uint32
        ydk::YLeaf ipifstatshcoutoctets; //type: uint64
        ydk::YLeaf ipifstatsinmcastpkts; //type: uint32
        ydk::YLeaf ipifstatshcinmcastpkts; //type: uint64
        ydk::YLeaf ipifstatsinmcastoctets; //type: uint32
        ydk::YLeaf ipifstatshcinmcastoctets; //type: uint64
        ydk::YLeaf ipifstatsoutmcastpkts; //type: uint32
        ydk::YLeaf ipifstatshcoutmcastpkts; //type: uint64
        ydk::YLeaf ipifstatsoutmcastoctets; //type: uint32
        ydk::YLeaf ipifstatshcoutmcastoctets; //type: uint64
        ydk::YLeaf ipifstatsinbcastpkts; //type: uint32
        ydk::YLeaf ipifstatshcinbcastpkts; //type: uint64
        ydk::YLeaf ipifstatsoutbcastpkts; //type: uint32
        ydk::YLeaf ipifstatshcoutbcastpkts; //type: uint64
        ydk::YLeaf ipifstatsdiscontinuitytime; //type: uint32
        ydk::YLeaf ipifstatsrefreshrate; //type: uint32

}; // IPMIB::Ipifstatstable::Ipifstatsentry


class IPMIB::Ipaddressprefixtable : public ydk::Entity
{
    public:
        Ipaddressprefixtable();
        ~Ipaddressprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipaddressprefixentry; //type: IPMIB::Ipaddressprefixtable::Ipaddressprefixentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipaddressprefixtable::Ipaddressprefixentry> > ipaddressprefixentry;
        
}; // IPMIB::Ipaddressprefixtable


class IPMIB::Ipaddressprefixtable::Ipaddressprefixentry : public ydk::Entity
{
    public:
        Ipaddressprefixentry();
        ~Ipaddressprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipaddressprefixifindex; //type: int32
        ydk::YLeaf ipaddressprefixtype; //type: InetAddressType
        ydk::YLeaf ipaddressprefixprefix; //type: binary
        ydk::YLeaf ipaddressprefixlength; //type: uint32
        ydk::YLeaf ipaddressprefixorigin; //type: IpAddressPrefixOriginTC
        ydk::YLeaf ipaddressprefixonlinkflag; //type: boolean
        ydk::YLeaf ipaddressprefixautonomousflag; //type: boolean
        ydk::YLeaf ipaddressprefixadvpreferredlifetime; //type: uint32
        ydk::YLeaf ipaddressprefixadvvalidlifetime; //type: uint32

}; // IPMIB::Ipaddressprefixtable::Ipaddressprefixentry


class IPMIB::Ipaddresstable : public ydk::Entity
{
    public:
        Ipaddresstable();
        ~Ipaddresstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipaddressentry; //type: IPMIB::Ipaddresstable::Ipaddressentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipaddresstable::Ipaddressentry> > ipaddressentry;
        
}; // IPMIB::Ipaddresstable


class IPMIB::Ipaddresstable::Ipaddressentry : public ydk::Entity
{
    public:
        Ipaddressentry();
        ~Ipaddressentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipaddressaddrtype; //type: InetAddressType
        ydk::YLeaf ipaddressaddr; //type: binary
        ydk::YLeaf ipaddressifindex; //type: int32
        ydk::YLeaf ipaddresstype; //type: Ipaddresstype
        ydk::YLeaf ipaddressprefix; //type: string
        ydk::YLeaf ipaddressorigin; //type: IpAddressOriginTC
        ydk::YLeaf ipaddressstatus; //type: IpAddressStatusTC
        ydk::YLeaf ipaddresscreated; //type: uint32
        ydk::YLeaf ipaddresslastchanged; //type: uint32
        ydk::YLeaf ipaddressrowstatus; //type: RowStatus
        ydk::YLeaf ipaddressstoragetype; //type: StorageType
        class Ipaddresstype;

}; // IPMIB::Ipaddresstable::Ipaddressentry


class IPMIB::Ipnettophysicaltable : public ydk::Entity
{
    public:
        Ipnettophysicaltable();
        ~Ipnettophysicaltable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipnettophysicalentry; //type: IPMIB::Ipnettophysicaltable::Ipnettophysicalentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipnettophysicaltable::Ipnettophysicalentry> > ipnettophysicalentry;
        
}; // IPMIB::Ipnettophysicaltable


class IPMIB::Ipnettophysicaltable::Ipnettophysicalentry : public ydk::Entity
{
    public:
        Ipnettophysicalentry();
        ~Ipnettophysicalentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipnettophysicalifindex; //type: int32
        ydk::YLeaf ipnettophysicalnetaddresstype; //type: InetAddressType
        ydk::YLeaf ipnettophysicalnetaddress; //type: binary
        ydk::YLeaf ipnettophysicalphysaddress; //type: string
        ydk::YLeaf ipnettophysicallastupdated; //type: uint32
        ydk::YLeaf ipnettophysicaltype; //type: Ipnettophysicaltype
        ydk::YLeaf ipnettophysicalstate; //type: Ipnettophysicalstate
        ydk::YLeaf ipnettophysicalrowstatus; //type: RowStatus
        class Ipnettophysicaltype;
        class Ipnettophysicalstate;

}; // IPMIB::Ipnettophysicaltable::Ipnettophysicalentry


class IPMIB::Ipv6Scopezoneindextable : public ydk::Entity
{
    public:
        Ipv6Scopezoneindextable();
        ~Ipv6Scopezoneindextable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6Scopezoneindexentry; //type: IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry> > ipv6scopezoneindexentry;
        
}; // IPMIB::Ipv6Scopezoneindextable


class IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry : public ydk::Entity
{
    public:
        Ipv6Scopezoneindexentry();
        ~Ipv6Scopezoneindexentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6scopezoneindexifindex; //type: int32
        ydk::YLeaf ipv6scopezoneindexlinklocal; //type: uint32
        ydk::YLeaf ipv6scopezoneindex3; //type: uint32
        ydk::YLeaf ipv6scopezoneindexadminlocal; //type: uint32
        ydk::YLeaf ipv6scopezoneindexsitelocal; //type: uint32
        ydk::YLeaf ipv6scopezoneindex6; //type: uint32
        ydk::YLeaf ipv6scopezoneindex7; //type: uint32
        ydk::YLeaf ipv6scopezoneindexorganizationlocal; //type: uint32
        ydk::YLeaf ipv6scopezoneindex9; //type: uint32
        ydk::YLeaf ipv6scopezoneindexa; //type: uint32
        ydk::YLeaf ipv6scopezoneindexb; //type: uint32
        ydk::YLeaf ipv6scopezoneindexc; //type: uint32
        ydk::YLeaf ipv6scopezoneindexd; //type: uint32

}; // IPMIB::Ipv6Scopezoneindextable::Ipv6Scopezoneindexentry


class IPMIB::Ipdefaultroutertable : public ydk::Entity
{
    public:
        Ipdefaultroutertable();
        ~Ipdefaultroutertable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipdefaultrouterentry; //type: IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry> > ipdefaultrouterentry;
        
}; // IPMIB::Ipdefaultroutertable


class IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry : public ydk::Entity
{
    public:
        Ipdefaultrouterentry();
        ~Ipdefaultrouterentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipdefaultrouteraddresstype; //type: InetAddressType
        ydk::YLeaf ipdefaultrouteraddress; //type: binary
        ydk::YLeaf ipdefaultrouterifindex; //type: int32
        ydk::YLeaf ipdefaultrouterlifetime; //type: uint32
        ydk::YLeaf ipdefaultrouterpreference; //type: Ipdefaultrouterpreference
        class Ipdefaultrouterpreference;

}; // IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry


class IPMIB::Ipv6Routeradverttable : public ydk::Entity
{
    public:
        Ipv6Routeradverttable();
        ~Ipv6Routeradverttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv6Routeradvertentry; //type: IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry> > ipv6routeradvertentry;
        
}; // IPMIB::Ipv6Routeradverttable


class IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry : public ydk::Entity
{
    public:
        Ipv6Routeradvertentry();
        ~Ipv6Routeradvertentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6routeradvertifindex; //type: int32
        ydk::YLeaf ipv6routeradvertsendadverts; //type: boolean
        ydk::YLeaf ipv6routeradvertmaxinterval; //type: uint32
        ydk::YLeaf ipv6routeradvertmininterval; //type: uint32
        ydk::YLeaf ipv6routeradvertmanagedflag; //type: boolean
        ydk::YLeaf ipv6routeradvertotherconfigflag; //type: boolean
        ydk::YLeaf ipv6routeradvertlinkmtu; //type: uint32
        ydk::YLeaf ipv6routeradvertreachabletime; //type: uint32
        ydk::YLeaf ipv6routeradvertretransmittime; //type: uint32
        ydk::YLeaf ipv6routeradvertcurhoplimit; //type: uint32
        ydk::YLeaf ipv6routeradvertdefaultlifetime; //type: uint32
        ydk::YLeaf ipv6routeradvertrowstatus; //type: RowStatus

}; // IPMIB::Ipv6Routeradverttable::Ipv6Routeradvertentry


class IPMIB::Icmpstatstable : public ydk::Entity
{
    public:
        Icmpstatstable();
        ~Icmpstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Icmpstatsentry; //type: IPMIB::Icmpstatstable::Icmpstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Icmpstatstable::Icmpstatsentry> > icmpstatsentry;
        
}; // IPMIB::Icmpstatstable


class IPMIB::Icmpstatstable::Icmpstatsentry : public ydk::Entity
{
    public:
        Icmpstatsentry();
        ~Icmpstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf icmpstatsipversion; //type: IpVersion
        ydk::YLeaf icmpstatsinmsgs; //type: uint32
        ydk::YLeaf icmpstatsinerrors; //type: uint32
        ydk::YLeaf icmpstatsoutmsgs; //type: uint32
        ydk::YLeaf icmpstatsouterrors; //type: uint32

}; // IPMIB::Icmpstatstable::Icmpstatsentry


class IPMIB::Icmpmsgstatstable : public ydk::Entity
{
    public:
        Icmpmsgstatstable();
        ~Icmpmsgstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Icmpmsgstatsentry; //type: IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::IP_MIB::IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry> > icmpmsgstatsentry;
        
}; // IPMIB::Icmpmsgstatstable


class IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry : public ydk::Entity
{
    public:
        Icmpmsgstatsentry();
        ~Icmpmsgstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf icmpmsgstatsipversion; //type: IpVersion
        ydk::YLeaf icmpmsgstatstype; //type: int32
        ydk::YLeaf icmpmsgstatsinpkts; //type: uint32
        ydk::YLeaf icmpmsgstatsoutpkts; //type: uint32

}; // IPMIB::Icmpmsgstatstable::Icmpmsgstatsentry

class IpAddressOriginTC : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf linklayer;
        static const ydk::Enum::YLeaf random;

};

class IpAddressStatusTC : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf preferred;
        static const ydk::Enum::YLeaf deprecated;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf inaccessible;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf tentative;
        static const ydk::Enum::YLeaf duplicate;
        static const ydk::Enum::YLeaf optimistic;

};

class IpAddressPrefixOriginTC : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf wellknown;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf routeradv;

};

class IPMIB::Ip::Ipforwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf notForwarding;

};

class IPMIB::Ip::Ipv6Ipforwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf notForwarding;

};

class IPMIB::Ipnettomediatable::Ipnettomediaentry::Ipnettomediatype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf static_;

};

class IPMIB::Ipv4Interfacetable::Ipv4Interfaceentry::Ipv4Interfaceenablestatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6Interfaceenablestatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class IPMIB::Ipv6Interfacetable::Ipv6Interfaceentry::Ipv6Interfaceforwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forwarding;
        static const ydk::Enum::YLeaf notForwarding;

};

class IPMIB::Ipaddresstable::Ipaddressentry::Ipaddresstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf anycast;
        static const ydk::Enum::YLeaf broadcast;

};

class IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicaltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf local;

};

class IPMIB::Ipnettophysicaltable::Ipnettophysicalentry::Ipnettophysicalstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reachable;
        static const ydk::Enum::YLeaf stale;
        static const ydk::Enum::YLeaf delay;
        static const ydk::Enum::YLeaf probe;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf incomplete;

};

class IPMIB::Ipdefaultroutertable::Ipdefaultrouterentry::Ipdefaultrouterpreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reserved;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf high;

};


}
}

#endif /* _IP_MIB_ */

