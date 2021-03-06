#ifndef _MPLS_VPN_MIB_
#define _MPLS_VPN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_VPN_MIB {

class MPLSVPNMIB : public ydk::Entity
{
    public:
        MPLSVPNMIB();
        ~MPLSVPNMIB();

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

        class Mplsvpnscalars; //type: MPLSVPNMIB::Mplsvpnscalars
        class Mplsvpninterfaceconftable; //type: MPLSVPNMIB::Mplsvpninterfaceconftable
        class Mplsvpnvrftable; //type: MPLSVPNMIB::Mplsvpnvrftable
        class Mplsvpnvrfroutetargettable; //type: MPLSVPNMIB::Mplsvpnvrfroutetargettable
        class Mplsvpnvrfbgpnbraddrtable; //type: MPLSVPNMIB::Mplsvpnvrfbgpnbraddrtable
        class Mplsvpnvrfbgpnbrprefixtable; //type: MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable
        class Mplsvpnvrfroutetable; //type: MPLSVPNMIB::Mplsvpnvrfroutetable

        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnscalars> mplsvpnscalars;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpninterfaceconftable> mplsvpninterfaceconftable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrftable> mplsvpnvrftable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrfroutetargettable> mplsvpnvrfroutetargettable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrfbgpnbraddrtable> mplsvpnvrfbgpnbraddrtable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable> mplsvpnvrfbgpnbrprefixtable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrfroutetable> mplsvpnvrfroutetable;
        
}; // MPLSVPNMIB


class MPLSVPNMIB::Mplsvpnscalars : public ydk::Entity
{
    public:
        Mplsvpnscalars();
        ~Mplsvpnscalars();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mplsvpnconfiguredvrfs; //type: uint32
        ydk::YLeaf mplsvpnactivevrfs; //type: uint32
        ydk::YLeaf mplsvpnconnectedinterfaces; //type: uint32
        ydk::YLeaf mplsvpnnotificationenable; //type: boolean
        ydk::YLeaf mplsvpnvrfconfmaxpossibleroutes; //type: uint32

}; // MPLSVPNMIB::Mplsvpnscalars


class MPLSVPNMIB::Mplsvpninterfaceconftable : public ydk::Entity
{
    public:
        Mplsvpninterfaceconftable();
        ~Mplsvpninterfaceconftable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mplsvpninterfaceconfentry; //type: MPLSVPNMIB::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry> > mplsvpninterfaceconfentry;
        
}; // MPLSVPNMIB::Mplsvpninterfaceconftable


class MPLSVPNMIB::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry : public ydk::Entity
{
    public:
        Mplsvpninterfaceconfentry();
        ~Mplsvpninterfaceconfentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        ydk::YLeaf mplsvpninterfaceconfindex; //type: int32
        ydk::YLeaf mplsvpninterfacelabeledgetype; //type: Mplsvpninterfacelabeledgetype
        ydk::YLeaf mplsvpninterfacevpnclassification; //type: Mplsvpninterfacevpnclassification
        ydk::YLeaf mplsvpninterfacevpnroutedistprotocol; //type: Mplsvpninterfacevpnroutedistprotocol
        ydk::YLeaf mplsvpninterfaceconfstoragetype; //type: StorageType
        ydk::YLeaf mplsvpninterfaceconfrowstatus; //type: RowStatus
        class Mplsvpninterfacelabeledgetype;
        class Mplsvpninterfacevpnclassification;

}; // MPLSVPNMIB::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry


class MPLSVPNMIB::Mplsvpnvrftable : public ydk::Entity
{
    public:
        Mplsvpnvrftable();
        ~Mplsvpnvrftable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mplsvpnvrfentry; //type: MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry> > mplsvpnvrfentry;
        
}; // MPLSVPNMIB::Mplsvpnvrftable


class MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry : public ydk::Entity
{
    public:
        Mplsvpnvrfentry();
        ~Mplsvpnvrfentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mplsvpnvrfname; //type: binary
        ydk::YLeaf mplsvpnvrfdescription; //type: string
        ydk::YLeaf mplsvpnvrfroutedistinguisher; //type: binary
        ydk::YLeaf mplsvpnvrfcreationtime; //type: uint32
        ydk::YLeaf mplsvpnvrfoperstatus; //type: Mplsvpnvrfoperstatus
        ydk::YLeaf mplsvpnvrfactiveinterfaces; //type: uint32
        ydk::YLeaf mplsvpnvrfassociatedinterfaces; //type: uint32
        ydk::YLeaf mplsvpnvrfconfmidroutethreshold; //type: uint32
        ydk::YLeaf mplsvpnvrfconfhighroutethreshold; //type: uint32
        ydk::YLeaf mplsvpnvrfconfmaxroutes; //type: uint32
        ydk::YLeaf mplsvpnvrfconflastchanged; //type: uint32
        ydk::YLeaf mplsvpnvrfconfrowstatus; //type: RowStatus
        ydk::YLeaf mplsvpnvrfconfstoragetype; //type: StorageType
        ydk::YLeaf mplsvpnvrfsecillegallabelviolations; //type: uint32
        ydk::YLeaf mplsvpnvrfsecillegallabelrcvthresh; //type: uint32
        ydk::YLeaf mplsvpnvrfperfroutesadded; //type: uint32
        ydk::YLeaf mplsvpnvrfperfroutesdeleted; //type: uint32
        ydk::YLeaf mplsvpnvrfperfcurrnumroutes; //type: uint32
        class Mplsvpnvrfoperstatus;

}; // MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry


class MPLSVPNMIB::Mplsvpnvrfroutetargettable : public ydk::Entity
{
    public:
        Mplsvpnvrfroutetargettable();
        ~Mplsvpnvrfroutetargettable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mplsvpnvrfroutetargetentry; //type: MPLSVPNMIB::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry> > mplsvpnvrfroutetargetentry;
        
}; // MPLSVPNMIB::Mplsvpnvrfroutetargettable


class MPLSVPNMIB::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry : public ydk::Entity
{
    public:
        Mplsvpnvrfroutetargetentry();
        ~Mplsvpnvrfroutetargetentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        ydk::YLeaf mplsvpnvrfroutetargetindex; //type: uint32
        ydk::YLeaf mplsvpnvrfroutetargettype; //type: Mplsvpnvrfroutetargettype
        ydk::YLeaf mplsvpnvrfroutetarget; //type: binary
        ydk::YLeaf mplsvpnvrfroutetargetdescr; //type: string
        ydk::YLeaf mplsvpnvrfroutetargetrowstatus; //type: RowStatus
        class Mplsvpnvrfroutetargettype;

}; // MPLSVPNMIB::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry


class MPLSVPNMIB::Mplsvpnvrfbgpnbraddrtable : public ydk::Entity
{
    public:
        Mplsvpnvrfbgpnbraddrtable();
        ~Mplsvpnvrfbgpnbraddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mplsvpnvrfbgpnbraddrentry; //type: MPLSVPNMIB::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry> > mplsvpnvrfbgpnbraddrentry;
        
}; // MPLSVPNMIB::Mplsvpnvrfbgpnbraddrtable


class MPLSVPNMIB::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry : public ydk::Entity
{
    public:
        Mplsvpnvrfbgpnbraddrentry();
        ~Mplsvpnvrfbgpnbraddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        //type: int32 (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::mplsvpninterfaceconfindex)
        ydk::YLeaf mplsvpninterfaceconfindex;
        ydk::YLeaf mplsvpnvrfbgpnbrindex; //type: uint32
        ydk::YLeaf mplsvpnvrfbgpnbrrole; //type: Mplsvpnvrfbgpnbrrole
        ydk::YLeaf mplsvpnvrfbgpnbrtype; //type: InetAddressType
        ydk::YLeaf mplsvpnvrfbgpnbraddr; //type: binary
        ydk::YLeaf mplsvpnvrfbgpnbrrowstatus; //type: RowStatus
        ydk::YLeaf mplsvpnvrfbgpnbrstoragetype; //type: StorageType
        class Mplsvpnvrfbgpnbrrole;

}; // MPLSVPNMIB::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry


class MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable : public ydk::Entity
{
    public:
        Mplsvpnvrfbgpnbrprefixtable();
        ~Mplsvpnvrfbgpnbrprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mplsvpnvrfbgpnbrprefixentry; //type: MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry> > mplsvpnvrfbgpnbrprefixentry;
        
}; // MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable


class MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry : public ydk::Entity
{
    public:
        Mplsvpnvrfbgpnbrprefixentry();
        ~Mplsvpnvrfbgpnbrprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        ydk::YLeaf mplsvpnvrfbgppathattripaddrprefix; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattripaddrprefixlen; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattrpeer; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattrorigin; //type: Mplsvpnvrfbgppathattrorigin
        ydk::YLeaf mplsvpnvrfbgppathattraspathsegment; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattrnexthop; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattrmultiexitdisc; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattrlocalpref; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattratomicaggregate; //type: Mplsvpnvrfbgppathattratomicaggregate
        ydk::YLeaf mplsvpnvrfbgppathattraggregatoras; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattraggregatoraddr; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattrcalclocalpref; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattrbest; //type: Mplsvpnvrfbgppathattrbest
        ydk::YLeaf mplsvpnvrfbgppathattrunknown; //type: binary
        class Mplsvpnvrfbgppathattrorigin;
        class Mplsvpnvrfbgppathattratomicaggregate;
        class Mplsvpnvrfbgppathattrbest;

}; // MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry


class MPLSVPNMIB::Mplsvpnvrfroutetable : public ydk::Entity
{
    public:
        Mplsvpnvrfroutetable();
        ~Mplsvpnvrfroutetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mplsvpnvrfrouteentry; //type: MPLSVPNMIB::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry> > mplsvpnvrfrouteentry;
        
}; // MPLSVPNMIB::Mplsvpnvrfroutetable


class MPLSVPNMIB::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry : public ydk::Entity
{
    public:
        Mplsvpnvrfrouteentry();
        ~Mplsvpnvrfrouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        ydk::YLeaf mplsvpnvrfroutedest; //type: binary
        ydk::YLeaf mplsvpnvrfroutemask; //type: binary
        ydk::YLeaf mplsvpnvrfroutetos; //type: uint32
        ydk::YLeaf mplsvpnvrfroutenexthop; //type: binary
        ydk::YLeaf mplsvpnvrfroutedestaddrtype; //type: InetAddressType
        ydk::YLeaf mplsvpnvrfroutemaskaddrtype; //type: InetAddressType
        ydk::YLeaf mplsvpnvrfroutenexthopaddrtype; //type: InetAddressType
        ydk::YLeaf mplsvpnvrfrouteifindex; //type: int32
        ydk::YLeaf mplsvpnvrfroutetype; //type: Mplsvpnvrfroutetype
        ydk::YLeaf mplsvpnvrfrouteproto; //type: Mplsvpnvrfrouteproto
        ydk::YLeaf mplsvpnvrfrouteage; //type: uint32
        ydk::YLeaf mplsvpnvrfrouteinfo; //type: string
        ydk::YLeaf mplsvpnvrfroutenexthopas; //type: uint32
        ydk::YLeaf mplsvpnvrfroutemetric1; //type: int32
        ydk::YLeaf mplsvpnvrfroutemetric2; //type: int32
        ydk::YLeaf mplsvpnvrfroutemetric3; //type: int32
        ydk::YLeaf mplsvpnvrfroutemetric4; //type: int32
        ydk::YLeaf mplsvpnvrfroutemetric5; //type: int32
        ydk::YLeaf mplsvpnvrfrouterowstatus; //type: RowStatus
        ydk::YLeaf mplsvpnvrfroutestoragetype; //type: StorageType
        class Mplsvpnvrfroutetype;
        class Mplsvpnvrfrouteproto;

}; // MPLSVPNMIB::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry

class MPLSVPNMIB::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::Mplsvpninterfacelabeledgetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf providerEdge;
        static const ydk::Enum::YLeaf customerEdge;

};

class MPLSVPNMIB::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::Mplsvpninterfacevpnclassification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf carrierOfCarrier;
        static const ydk::Enum::YLeaf enterprise;
        static const ydk::Enum::YLeaf interProvider;

};

class MPLSVPNMIB::Mplsvpnvrftable::Mplsvpnvrfentry::Mplsvpnvrfoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class MPLSVPNMIB::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::Mplsvpnvrfroutetargettype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;
        static const ydk::Enum::YLeaf both;

};

class MPLSVPNMIB::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::Mplsvpnvrfbgpnbrrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ce;
        static const ydk::Enum::YLeaf pe;

};

class MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattrorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

};

class MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattratomicaggregate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lessSpecificRrouteNotSelected;
        static const ydk::Enum::YLeaf lessSpecificRouteSelected;

};

class MPLSVPNMIB::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattrbest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class MPLSVPNMIB::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfroutetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf reject;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class MPLSVPNMIB::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf netmgmt;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf ggp;
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf isIs;
        static const ydk::Enum::YLeaf esIs;
        static const ydk::Enum::YLeaf ciscoIgrp;
        static const ydk::Enum::YLeaf bbnSpfIgp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf idpr;
        static const ydk::Enum::YLeaf ciscoEigrp;

};


}
}

#endif /* _MPLS_VPN_MIB_ */

