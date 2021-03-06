#ifndef _CISCO_IF_EXTENSION_MIB_
#define _CISCO_IF_EXTENSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IF_EXTENSION_MIB {

class CISCOIFEXTENSIONMIB : public ydk::Entity
{
    public:
        CISCOIFEXTENSIONMIB();
        ~CISCOIFEXTENSIONMIB();

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

        class Ciscoifextsystemconfig; //type: CISCOIFEXTENSIONMIB::Ciscoifextsystemconfig
        class Cieifpacketstatstable; //type: CISCOIFEXTENSIONMIB::Cieifpacketstatstable
        class Cieifinterfacetable; //type: CISCOIFEXTENSIONMIB::Cieifinterfacetable
        class Cieifstatuslisttable; //type: CISCOIFEXTENSIONMIB::Cieifstatuslisttable
        class Cieifvlstatstable; //type: CISCOIFEXTENSIONMIB::Cieifvlstatstable
        class Cieifindexpersistencetable; //type: CISCOIFEXTENSIONMIB::Cieifindexpersistencetable
        class Cieifdot1Qcustomethertypetable; //type: CISCOIFEXTENSIONMIB::Cieifdot1Qcustomethertypetable
        class Cieifutiltable; //type: CISCOIFEXTENSIONMIB::Cieifutiltable
        class Cieifdot1Dbasemappingtable; //type: CISCOIFEXTENSIONMIB::Cieifdot1Dbasemappingtable
        class Cieifnamemappingtable; //type: CISCOIFEXTENSIONMIB::Cieifnamemappingtable

        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Ciscoifextsystemconfig> ciscoifextsystemconfig;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifpacketstatstable> cieifpacketstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifinterfacetable> cieifinterfacetable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifstatuslisttable> cieifstatuslisttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifvlstatstable> cieifvlstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifindexpersistencetable> cieifindexpersistencetable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifdot1Qcustomethertypetable> cieifdot1qcustomethertypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifutiltable> cieifutiltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifdot1Dbasemappingtable> cieifdot1dbasemappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifnamemappingtable> cieifnamemappingtable;
        
}; // CISCOIFEXTENSIONMIB


class CISCOIFEXTENSIONMIB::Ciscoifextsystemconfig : public ydk::Entity
{
    public:
        Ciscoifextsystemconfig();
        ~Ciscoifextsystemconfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ciesystemmtu; //type: int32
        ydk::YLeaf cielinkupdownenable; //type: Cielinkupdownenable
        ydk::YLeaf ciestandardlinkupdownvarbinds; //type: Ciestandardlinkupdownvarbinds
        ydk::YLeaf cieifindexpersistence; //type: boolean
        ydk::YLeaf ciedelayedlinkupdownnotifenable; //type: boolean
        ydk::YLeaf ciedelayedlinkupdownnotifdelay; //type: uint32
        ydk::YLeaf cieifindexglobalpersistence; //type: IfIndexPersistenceState
        ydk::YLeaf cielinkupdownconfig; //type: Cielinkupdownconfig
        class Ciestandardlinkupdownvarbinds;

}; // CISCOIFEXTENSIONMIB::Ciscoifextsystemconfig


class CISCOIFEXTENSIONMIB::Cieifpacketstatstable : public ydk::Entity
{
    public:
        Cieifpacketstatstable();
        ~Cieifpacketstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cieifpacketstatsentry; //type: CISCOIFEXTENSIONMIB::Cieifpacketstatstable::Cieifpacketstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifpacketstatstable::Cieifpacketstatsentry> > cieifpacketstatsentry;
        
}; // CISCOIFEXTENSIONMIB::Cieifpacketstatstable


class CISCOIFEXTENSIONMIB::Cieifpacketstatstable::Cieifpacketstatsentry : public ydk::Entity
{
    public:
        Cieifpacketstatsentry();
        ~Cieifpacketstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieiflastintime; //type: uint32
        ydk::YLeaf cieiflastouttime; //type: uint32
        ydk::YLeaf cieiflastouthangtime; //type: uint32
        ydk::YLeaf cieifinruntserrs; //type: uint32
        ydk::YLeaf cieifingiantserrs; //type: uint32
        ydk::YLeaf cieifinframingerrs; //type: uint32
        ydk::YLeaf cieifinoverrunerrs; //type: uint32
        ydk::YLeaf cieifinignored; //type: uint32
        ydk::YLeaf cieifinaborterrs; //type: uint32
        ydk::YLeaf cieifinputqueuedrops; //type: uint32
        ydk::YLeaf cieifoutputqueuedrops; //type: uint32
        ydk::YLeaf cieifpacketdiscontinuitytime; //type: uint32

}; // CISCOIFEXTENSIONMIB::Cieifpacketstatstable::Cieifpacketstatsentry


class CISCOIFEXTENSIONMIB::Cieifinterfacetable : public ydk::Entity
{
    public:
        Cieifinterfacetable();
        ~Cieifinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cieifinterfaceentry; //type: CISCOIFEXTENSIONMIB::Cieifinterfacetable::Cieifinterfaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifinterfacetable::Cieifinterfaceentry> > cieifinterfaceentry;
        
}; // CISCOIFEXTENSIONMIB::Cieifinterfacetable


class CISCOIFEXTENSIONMIB::Cieifinterfacetable::Cieifinterfaceentry : public ydk::Entity
{
    public:
        Cieifinterfaceentry();
        ~Cieifinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifresetcount; //type: uint32
        ydk::YLeaf cieifkeepaliveenabled; //type: boolean
        ydk::YLeaf cieifstatechangereason; //type: string
        ydk::YLeaf cieifcarriertransitioncount; //type: uint32
        ydk::YLeaf cieifinterfacediscontinuitytime; //type: uint32
        ydk::YLeaf cieifdhcpmode; //type: boolean
        ydk::YLeaf cieifmtu; //type: int32
        ydk::YLeaf cieifcontextname; //type: binary
        ydk::YLeaf cieifoperstatuscause; //type: IfOperStatusReason
        ydk::YLeaf cieifoperstatuscausedescr; //type: string
        ydk::YLeaf cieifspeedreceive; //type: uint32
        ydk::YLeaf cieifhighspeedreceive; //type: uint32
        ydk::YLeaf cieifowner; //type: string
        ydk::YLeaf cieifsharedconfig; //type: Cieifsharedconfig
        ydk::YLeaf cieifspeedgroupconfig; //type: Cieifspeedgroupconfig
        ydk::YLeaf cieiftransceiverfrequencyconfig; //type: Cieiftransceiverfrequencyconfig
        ydk::YLeaf cieiffillpatternconfig; //type: Cieiffillpatternconfig
        ydk::YLeaf cieifignorebiterrorsconfig; //type: boolean
        ydk::YLeaf cieifignoreinterruptthresholdconfig; //type: boolean
        class Cieifsharedconfig;
        class Cieifspeedgroupconfig;
        class Cieiftransceiverfrequencyconfig;
        class Cieiffillpatternconfig;

}; // CISCOIFEXTENSIONMIB::Cieifinterfacetable::Cieifinterfaceentry


class CISCOIFEXTENSIONMIB::Cieifstatuslisttable : public ydk::Entity
{
    public:
        Cieifstatuslisttable();
        ~Cieifstatuslisttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cieifstatuslistentry; //type: CISCOIFEXTENSIONMIB::Cieifstatuslisttable::Cieifstatuslistentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifstatuslisttable::Cieifstatuslistentry> > cieifstatuslistentry;
        
}; // CISCOIFEXTENSIONMIB::Cieifstatuslisttable


class CISCOIFEXTENSIONMIB::Cieifstatuslisttable::Cieifstatuslistentry : public ydk::Entity
{
    public:
        Cieifstatuslistentry();
        ~Cieifstatuslistentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cieifstatuslistindex; //type: uint32
        ydk::YLeaf cieinterfacesindex; //type: binary
        ydk::YLeaf cieinterfacesopermode; //type: binary
        ydk::YLeaf cieinterfacesopercause; //type: binary
        ydk::YLeaf cieinterfaceownershipbitmap; //type: binary

}; // CISCOIFEXTENSIONMIB::Cieifstatuslisttable::Cieifstatuslistentry


class CISCOIFEXTENSIONMIB::Cieifvlstatstable : public ydk::Entity
{
    public:
        Cieifvlstatstable();
        ~Cieifvlstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cieifvlstatsentry; //type: CISCOIFEXTENSIONMIB::Cieifvlstatstable::Cieifvlstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifvlstatstable::Cieifvlstatsentry> > cieifvlstatsentry;
        
}; // CISCOIFEXTENSIONMIB::Cieifvlstatstable


class CISCOIFEXTENSIONMIB::Cieifvlstatstable::Cieifvlstatsentry : public ydk::Entity
{
    public:
        Cieifvlstatsentry();
        ~Cieifvlstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifnodropvlinpkts; //type: uint64
        ydk::YLeaf cieifnodropvlinoctets; //type: uint64
        ydk::YLeaf cieifnodropvloutpkts; //type: uint64
        ydk::YLeaf cieifnodropvloutoctets; //type: uint64
        ydk::YLeaf cieifdropvlinpkts; //type: uint64
        ydk::YLeaf cieifdropvlinoctets; //type: uint64
        ydk::YLeaf cieifdropvloutpkts; //type: uint64
        ydk::YLeaf cieifdropvloutoctets; //type: uint64

}; // CISCOIFEXTENSIONMIB::Cieifvlstatstable::Cieifvlstatsentry


class CISCOIFEXTENSIONMIB::Cieifindexpersistencetable : public ydk::Entity
{
    public:
        Cieifindexpersistencetable();
        ~Cieifindexpersistencetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cieifindexpersistenceentry; //type: CISCOIFEXTENSIONMIB::Cieifindexpersistencetable::Cieifindexpersistenceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifindexpersistencetable::Cieifindexpersistenceentry> > cieifindexpersistenceentry;
        
}; // CISCOIFEXTENSIONMIB::Cieifindexpersistencetable


class CISCOIFEXTENSIONMIB::Cieifindexpersistencetable::Cieifindexpersistenceentry : public ydk::Entity
{
    public:
        Cieifindexpersistenceentry();
        ~Cieifindexpersistenceentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifindexpersistenceenabled; //type: boolean
        ydk::YLeaf cieifindexpersistencecontrol; //type: IfIndexPersistenceState

}; // CISCOIFEXTENSIONMIB::Cieifindexpersistencetable::Cieifindexpersistenceentry


class CISCOIFEXTENSIONMIB::Cieifdot1Qcustomethertypetable : public ydk::Entity
{
    public:
        Cieifdot1Qcustomethertypetable();
        ~Cieifdot1Qcustomethertypetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cieifdot1Qcustomethertypeentry; //type: CISCOIFEXTENSIONMIB::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry> > cieifdot1qcustomethertypeentry;
        
}; // CISCOIFEXTENSIONMIB::Cieifdot1Qcustomethertypetable


class CISCOIFEXTENSIONMIB::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry : public ydk::Entity
{
    public:
        Cieifdot1Qcustomethertypeentry();
        ~Cieifdot1Qcustomethertypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifdot1qcustomadminethertype; //type: int32
        ydk::YLeaf cieifdot1qcustomoperethertype; //type: int32

}; // CISCOIFEXTENSIONMIB::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry


class CISCOIFEXTENSIONMIB::Cieifutiltable : public ydk::Entity
{
    public:
        Cieifutiltable();
        ~Cieifutiltable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cieifutilentry; //type: CISCOIFEXTENSIONMIB::Cieifutiltable::Cieifutilentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifutiltable::Cieifutilentry> > cieifutilentry;
        
}; // CISCOIFEXTENSIONMIB::Cieifutiltable


class CISCOIFEXTENSIONMIB::Cieifutiltable::Cieifutilentry : public ydk::Entity
{
    public:
        Cieifutilentry();
        ~Cieifutilentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifinpktrate; //type: uint64
        ydk::YLeaf cieifinoctetrate; //type: uint64
        ydk::YLeaf cieifoutpktrate; //type: uint64
        ydk::YLeaf cieifoutoctetrate; //type: uint64
        ydk::YLeaf cieifinterval; //type: uint32

}; // CISCOIFEXTENSIONMIB::Cieifutiltable::Cieifutilentry


class CISCOIFEXTENSIONMIB::Cieifdot1Dbasemappingtable : public ydk::Entity
{
    public:
        Cieifdot1Dbasemappingtable();
        ~Cieifdot1Dbasemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cieifdot1Dbasemappingentry; //type: CISCOIFEXTENSIONMIB::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry> > cieifdot1dbasemappingentry;
        
}; // CISCOIFEXTENSIONMIB::Cieifdot1Dbasemappingtable


class CISCOIFEXTENSIONMIB::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry : public ydk::Entity
{
    public:
        Cieifdot1Dbasemappingentry();
        ~Cieifdot1Dbasemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifdot1dbasemappingport; //type: int32

}; // CISCOIFEXTENSIONMIB::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry


class CISCOIFEXTENSIONMIB::Cieifnamemappingtable : public ydk::Entity
{
    public:
        Cieifnamemappingtable();
        ~Cieifnamemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cieifnamemappingentry; //type: CISCOIFEXTENSIONMIB::Cieifnamemappingtable::Cieifnamemappingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IF_EXTENSION_MIB::CISCOIFEXTENSIONMIB::Cieifnamemappingtable::Cieifnamemappingentry> > cieifnamemappingentry;
        
}; // CISCOIFEXTENSIONMIB::Cieifnamemappingtable


class CISCOIFEXTENSIONMIB::Cieifnamemappingtable::Cieifnamemappingentry : public ydk::Entity
{
    public:
        Cieifnamemappingentry();
        ~Cieifnamemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cieifname; //type: string
        ydk::YLeaf cieifindex; //type: int32

}; // CISCOIFEXTENSIONMIB::Cieifnamemappingtable::Cieifnamemappingentry

class IfIndexPersistenceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf global;

};

class CISCOIFEXTENSIONMIB::Ciscoifextsystemconfig::Ciestandardlinkupdownvarbinds : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf additional;
        static const ydk::Enum::YLeaf other;

};

class CISCOIFEXTENSIONMIB::Cieifinterfacetable::Cieifinterfaceentry::Cieifsharedconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf ownerDedicated;
        static const ydk::Enum::YLeaf ownerShared;
        static const ydk::Enum::YLeaf sharedOnly;

};

class CISCOIFEXTENSIONMIB::Cieifinterfacetable::Cieifinterfaceentry::Cieifspeedgroupconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf tenG;
        static const ydk::Enum::YLeaf oneTwoFourEightG;
        static const ydk::Enum::YLeaf twoFourEightSixteenG;

};

class CISCOIFEXTENSIONMIB::Cieifinterfacetable::Cieifinterfaceentry::Cieiftransceiverfrequencyconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf fibreChannel;
        static const ydk::Enum::YLeaf ethernet;

};

class CISCOIFEXTENSIONMIB::Cieifinterfacetable::Cieifinterfaceentry::Cieiffillpatternconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf arbff8G;
        static const ydk::Enum::YLeaf idle8G;

};


}
}

#endif /* _CISCO_IF_EXTENSION_MIB_ */

