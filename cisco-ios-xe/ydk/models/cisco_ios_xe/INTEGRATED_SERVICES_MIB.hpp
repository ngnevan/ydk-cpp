#ifndef _INTEGRATED_SERVICES_MIB_
#define _INTEGRATED_SERVICES_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace INTEGRATED_SERVICES_MIB {

class INTEGRATEDSERVICESMIB : public ydk::Entity
{
    public:
        INTEGRATEDSERVICESMIB();
        ~INTEGRATEDSERVICESMIB();

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

        class Intsrvgenobjects; //type: INTEGRATEDSERVICESMIB::Intsrvgenobjects
        class Intsrvifattribtable; //type: INTEGRATEDSERVICESMIB::Intsrvifattribtable
        class Intsrvflowtable; //type: INTEGRATEDSERVICESMIB::Intsrvflowtable

        std::shared_ptr<cisco_ios_xe::INTEGRATED_SERVICES_MIB::INTEGRATEDSERVICESMIB::Intsrvgenobjects> intsrvgenobjects;
        std::shared_ptr<cisco_ios_xe::INTEGRATED_SERVICES_MIB::INTEGRATEDSERVICESMIB::Intsrvifattribtable> intsrvifattribtable;
        std::shared_ptr<cisco_ios_xe::INTEGRATED_SERVICES_MIB::INTEGRATEDSERVICESMIB::Intsrvflowtable> intsrvflowtable;
        
}; // INTEGRATEDSERVICESMIB


class INTEGRATEDSERVICESMIB::Intsrvgenobjects : public ydk::Entity
{
    public:
        Intsrvgenobjects();
        ~Intsrvgenobjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf intsrvflownewindex; //type: int32

}; // INTEGRATEDSERVICESMIB::Intsrvgenobjects


class INTEGRATEDSERVICESMIB::Intsrvifattribtable : public ydk::Entity
{
    public:
        Intsrvifattribtable();
        ~Intsrvifattribtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Intsrvifattribentry; //type: INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry

        std::vector<std::shared_ptr<cisco_ios_xe::INTEGRATED_SERVICES_MIB::INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry> > intsrvifattribentry;
        
}; // INTEGRATEDSERVICESMIB::Intsrvifattribtable


class INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry : public ydk::Entity
{
    public:
        Intsrvifattribentry();
        ~Intsrvifattribentry();

        bool has_data() const override;
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
        ydk::YLeaf intsrvifattriballocatedbits; //type: int32
        ydk::YLeaf intsrvifattribmaxallocatedbits; //type: int32
        ydk::YLeaf intsrvifattriballocatedbuffer; //type: int32
        ydk::YLeaf intsrvifattribflows; //type: uint32
        ydk::YLeaf intsrvifattribpropagationdelay; //type: int32
        ydk::YLeaf intsrvifattribstatus; //type: RowStatus

}; // INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry


class INTEGRATEDSERVICESMIB::Intsrvflowtable : public ydk::Entity
{
    public:
        Intsrvflowtable();
        ~Intsrvflowtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Intsrvflowentry; //type: INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry

        std::vector<std::shared_ptr<cisco_ios_xe::INTEGRATED_SERVICES_MIB::INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry> > intsrvflowentry;
        
}; // INTEGRATEDSERVICESMIB::Intsrvflowtable


class INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry : public ydk::Entity
{
    public:
        Intsrvflowentry();
        ~Intsrvflowentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf intsrvflownumber; //type: int32
        ydk::YLeaf intsrvflowtype; //type: int32
        ydk::YLeaf intsrvflowowner; //type: Intsrvflowowner
        ydk::YLeaf intsrvflowdestaddr; //type: binary
        ydk::YLeaf intsrvflowsenderaddr; //type: binary
        ydk::YLeaf intsrvflowdestaddrlength; //type: int32
        ydk::YLeaf intsrvflowsenderaddrlength; //type: int32
        ydk::YLeaf intsrvflowprotocol; //type: int32
        ydk::YLeaf intsrvflowdestport; //type: binary
        ydk::YLeaf intsrvflowport; //type: binary
        ydk::YLeaf intsrvflowflowid; //type: int32
        ydk::YLeaf intsrvflowinterface; //type: int32
        ydk::YLeaf intsrvflowifaddr; //type: binary
        ydk::YLeaf intsrvflowrate; //type: int32
        ydk::YLeaf intsrvflowburst; //type: int32
        ydk::YLeaf intsrvflowweight; //type: int32
        ydk::YLeaf intsrvflowqueue; //type: int32
        ydk::YLeaf intsrvflowmintu; //type: int32
        ydk::YLeaf intsrvflowmaxtu; //type: int32
        ydk::YLeaf intsrvflowbesteffort; //type: uint32
        ydk::YLeaf intsrvflowpoliced; //type: uint32
        ydk::YLeaf intsrvflowdiscard; //type: boolean
        ydk::YLeaf intsrvflowservice; //type: QosService
        ydk::YLeaf intsrvfloworder; //type: int32
        ydk::YLeaf intsrvflowstatus; //type: RowStatus
        class Intsrvflowowner;

}; // INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry

class QosService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bestEffort;
        static const ydk::Enum::YLeaf guaranteedDelay;
        static const ydk::Enum::YLeaf controlledLoad;

};

class INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::Intsrvflowowner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf rsvp;
        static const ydk::Enum::YLeaf management;

};


}
}

#endif /* _INTEGRATED_SERVICES_MIB_ */

