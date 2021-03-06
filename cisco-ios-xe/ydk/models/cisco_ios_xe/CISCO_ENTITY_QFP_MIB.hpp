#ifndef _CISCO_ENTITY_QFP_MIB_
#define _CISCO_ENTITY_QFP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ENTITY_QFP_MIB {

class CISCOENTITYQFPMIB : public ydk::Entity
{
    public:
        CISCOENTITYQFPMIB();
        ~CISCOENTITYQFPMIB();

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

        class Ciscoentityqfp; //type: CISCOENTITYQFPMIB::Ciscoentityqfp
        class Ciscoentityqfpnotif; //type: CISCOENTITYQFPMIB::Ciscoentityqfpnotif
        class Ceqfpsystemtable; //type: CISCOENTITYQFPMIB::Ceqfpsystemtable
        class Ceqfputilizationtable; //type: CISCOENTITYQFPMIB::Ceqfputilizationtable
        class Ceqfpmemoryresourcetable; //type: CISCOENTITYQFPMIB::Ceqfpmemoryresourcetable
        class Ceqfpthroughputtable; //type: CISCOENTITYQFPMIB::Ceqfpthroughputtable

        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ciscoentityqfp> ciscoentityqfp;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ciscoentityqfpnotif> ciscoentityqfpnotif;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ceqfpsystemtable> ceqfpsystemtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ceqfputilizationtable> ceqfputilizationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ceqfpmemoryresourcetable> ceqfpmemoryresourcetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ceqfpthroughputtable> ceqfpthroughputtable;
        
}; // CISCOENTITYQFPMIB


class CISCOENTITYQFPMIB::Ciscoentityqfp : public ydk::Entity
{
    public:
        Ciscoentityqfp();
        ~Ciscoentityqfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ceqfpfivesecondutilalgo; //type: Ceqfpfivesecondutilalgo
        ydk::YLeaf ceqfponeminuteutilalgo; //type: Ceqfponeminuteutilalgo
        ydk::YLeaf ceqfpfiveminutesutilalgo; //type: Ceqfpfiveminutesutilalgo
        ydk::YLeaf ceqfpsixtyminutesutilalgo; //type: Ceqfpsixtyminutesutilalgo
        class Ceqfpfivesecondutilalgo;
        class Ceqfponeminuteutilalgo;
        class Ceqfpfiveminutesutilalgo;
        class Ceqfpsixtyminutesutilalgo;

}; // CISCOENTITYQFPMIB::Ciscoentityqfp


class CISCOENTITYQFPMIB::Ciscoentityqfpnotif : public ydk::Entity
{
    public:
        Ciscoentityqfpnotif();
        ~Ciscoentityqfpnotif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ceqfpmemoryresthreshnotifenabled; //type: boolean
        ydk::YLeaf ceqfpthroughputnotifenabled; //type: uint32

}; // CISCOENTITYQFPMIB::Ciscoentityqfpnotif


class CISCOENTITYQFPMIB::Ceqfpsystemtable : public ydk::Entity
{
    public:
        Ceqfpsystemtable();
        ~Ceqfpsystemtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ceqfpsystementry; //type: CISCOENTITYQFPMIB::Ceqfpsystemtable::Ceqfpsystementry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ceqfpsystemtable::Ceqfpsystementry> > ceqfpsystementry;
        
}; // CISCOENTITYQFPMIB::Ceqfpsystemtable


class CISCOENTITYQFPMIB::Ceqfpsystemtable::Ceqfpsystementry : public ydk::Entity
{
    public:
        Ceqfpsystementry();
        ~Ceqfpsystementry();

        bool has_data() const override;
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
        ydk::YLeaf ceqfpsystemtrafficdirection; //type: Ceqfpsystemtrafficdirection
        ydk::YLeaf ceqfpsystemstate; //type: Ceqfpsystemstate
        ydk::YLeaf ceqfpnumbersystemloads; //type: uint32
        ydk::YLeaf ceqfpsystemlastloadtime; //type: string
        class Ceqfpsystemtrafficdirection;
        class Ceqfpsystemstate;

}; // CISCOENTITYQFPMIB::Ceqfpsystemtable::Ceqfpsystementry


class CISCOENTITYQFPMIB::Ceqfputilizationtable : public ydk::Entity
{
    public:
        Ceqfputilizationtable();
        ~Ceqfputilizationtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ceqfputilizationentry; //type: CISCOENTITYQFPMIB::Ceqfputilizationtable::Ceqfputilizationentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ceqfputilizationtable::Ceqfputilizationentry> > ceqfputilizationentry;
        
}; // CISCOENTITYQFPMIB::Ceqfputilizationtable


class CISCOENTITYQFPMIB::Ceqfputilizationtable::Ceqfputilizationentry : public ydk::Entity
{
    public:
        Ceqfputilizationentry();
        ~Ceqfputilizationentry();

        bool has_data() const override;
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
        ydk::YLeaf ceqfputiltimeinterval; //type: CiscoQfpTimeInterval
        ydk::YLeaf ceqfputilinputprioritypktrate; //type: uint64
        ydk::YLeaf ceqfputilinputprioritybitrate; //type: uint64
        ydk::YLeaf ceqfputilinputnonprioritypktrate; //type: uint64
        ydk::YLeaf ceqfputilinputnonprioritybitrate; //type: uint64
        ydk::YLeaf ceqfputilinputtotalpktrate; //type: uint64
        ydk::YLeaf ceqfputilinputtotalbitrate; //type: uint64
        ydk::YLeaf ceqfputiloutputprioritypktrate; //type: uint64
        ydk::YLeaf ceqfputiloutputprioritybitrate; //type: uint64
        ydk::YLeaf ceqfputiloutputnonprioritypktrate; //type: uint64
        ydk::YLeaf ceqfputiloutputnonprioritybitrate; //type: uint64
        ydk::YLeaf ceqfputiloutputtotalpktrate; //type: uint64
        ydk::YLeaf ceqfputiloutputtotalbitrate; //type: uint64
        ydk::YLeaf ceqfputilprocessingload; //type: uint32

}; // CISCOENTITYQFPMIB::Ceqfputilizationtable::Ceqfputilizationentry


class CISCOENTITYQFPMIB::Ceqfpmemoryresourcetable : public ydk::Entity
{
    public:
        Ceqfpmemoryresourcetable();
        ~Ceqfpmemoryresourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ceqfpmemoryresourceentry; //type: CISCOENTITYQFPMIB::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry> > ceqfpmemoryresourceentry;
        
}; // CISCOENTITYQFPMIB::Ceqfpmemoryresourcetable


class CISCOENTITYQFPMIB::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry : public ydk::Entity
{
    public:
        Ceqfpmemoryresourceentry();
        ~Ceqfpmemoryresourceentry();

        bool has_data() const override;
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
        ydk::YLeaf ceqfpmemoryrestype; //type: CiscoQfpMemoryResource
        ydk::YLeaf ceqfpmemoryrestotal; //type: uint32
        ydk::YLeaf ceqfpmemoryresinuse; //type: uint32
        ydk::YLeaf ceqfpmemoryresfree; //type: uint32
        ydk::YLeaf ceqfpmemoryreslowfreewatermark; //type: uint32
        ydk::YLeaf ceqfpmemoryresrisingthreshold; //type: uint32
        ydk::YLeaf ceqfpmemoryresfallingthreshold; //type: uint32
        ydk::YLeaf ceqfpmemoryrestotalovrflw; //type: uint32
        ydk::YLeaf ceqfpmemoryhcrestotal; //type: uint64
        ydk::YLeaf ceqfpmemoryresinuseovrflw; //type: uint32
        ydk::YLeaf ceqfpmemoryhcresinuse; //type: uint64
        ydk::YLeaf ceqfpmemoryresfreeovrflw; //type: uint32
        ydk::YLeaf ceqfpmemoryhcresfree; //type: uint64
        ydk::YLeaf ceqfpmemoryreslowfreewatermarkovrflw; //type: uint32
        ydk::YLeaf ceqfpmemoryhcreslowfreewatermark; //type: uint64

}; // CISCOENTITYQFPMIB::Ceqfpmemoryresourcetable::Ceqfpmemoryresourceentry


class CISCOENTITYQFPMIB::Ceqfpthroughputtable : public ydk::Entity
{
    public:
        Ceqfpthroughputtable();
        ~Ceqfpthroughputtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ceqfpthroughputentry; //type: CISCOENTITYQFPMIB::Ceqfpthroughputtable::Ceqfpthroughputentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_QFP_MIB::CISCOENTITYQFPMIB::Ceqfpthroughputtable::Ceqfpthroughputentry> > ceqfpthroughputentry;
        
}; // CISCOENTITYQFPMIB::Ceqfpthroughputtable


class CISCOENTITYQFPMIB::Ceqfpthroughputtable::Ceqfpthroughputentry : public ydk::Entity
{
    public:
        Ceqfpthroughputentry();
        ~Ceqfpthroughputentry();

        bool has_data() const override;
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
        ydk::YLeaf ceqfpthroughputlicensedbw; //type: uint64
        ydk::YLeaf ceqfpthroughputlevel; //type: Ceqfpthroughputlevel
        ydk::YLeaf ceqfpthroughputinterval; //type: int32
        ydk::YLeaf ceqfpthroughputthreshold; //type: int32
        ydk::YLeaf ceqfpthroughputavgrate; //type: uint64
        class Ceqfpthroughputlevel;

}; // CISCOENTITYQFPMIB::Ceqfpthroughputtable::Ceqfpthroughputentry

class CiscoQfpTimeInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fiveSeconds;
        static const ydk::Enum::YLeaf oneMinute;
        static const ydk::Enum::YLeaf fiveMinutes;
        static const ydk::Enum::YLeaf sixtyMinutes;

};

class CiscoQfpMemoryResource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dram;

};

class CISCOENTITYQFPMIB::Ciscoentityqfp::Ceqfpfivesecondutilalgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf fiveSecSample;

};

class CISCOENTITYQFPMIB::Ciscoentityqfp::Ceqfponeminuteutilalgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf fiveSecSMA;

};

class CISCOENTITYQFPMIB::Ciscoentityqfp::Ceqfpfiveminutesutilalgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf fiveSecSMA;

};

class CISCOENTITYQFPMIB::Ciscoentityqfp::Ceqfpsixtyminutesutilalgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf fiveSecSMA;

};

class CISCOENTITYQFPMIB::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemtrafficdirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ingress;
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf both;

};

class CISCOENTITYQFPMIB::Ceqfpsystemtable::Ceqfpsystementry::Ceqfpsystemstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf activeSolo;
        static const ydk::Enum::YLeaf standby;
        static const ydk::Enum::YLeaf hotStandby;

};

class CISCOENTITYQFPMIB::Ceqfpthroughputtable::Ceqfpthroughputentry::Ceqfpthroughputlevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf exceed;

};


}
}

#endif /* _CISCO_ENTITY_QFP_MIB_ */

